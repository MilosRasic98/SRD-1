// TRANSMITTER CODE

/* 
 *  This code will be used for sending data using the NRF24 to the Arduino on our drone
 *  
 *  Connections for this transmitter are:
 *  NRF24 - standard SPI connection and the other 2 pins to pins 7 & 8
 *  All of the switches are connected to digital pins, they are wires up so they pull the input to ground,
 *  this is so we can use an internall pullup on Arduino pins
 *  On the analog pins we have all of the joysticks from our transmitter
 *  A4 and A5 are left unconnected so we can have I2C devices further on if we desire
 *  
 */
 

/* 
 *  This code is a modified version of the code from Electronoobs.com
 *  Check out his tutorial on the Arduino Drone
 *  
 */
 
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define Pin_AUX1 2
#define Pin_AUX2 3
#define Pin_AUX3 4
#define Pin_AUX4 5
#define Pin_AUX5 6
#define Pin_AUX6 9
#define Pin_AUX7 10

/*Create a unique pipe out. The receiver has to 
  wear the same unique code*/
  
const uint64_t pipeOut = 0xE8E8F0F0E1LL;

RF24 radio(7, 8); // select  CSN  pin

// The sizeof this struct should not exceed 32 bytes
// This gives us up to 32 8 bits channals
struct MyData {
  byte throttle;
  byte yaw;
  byte pitch;
  byte roll;
  byte AUX1;
  byte AUX2;
  byte AUX3;
  byte AUX4;
  byte AUX5;
  byte AUX6;
  byte AUX7;
  byte gimbalY;
  byte gimbalZ;
};

MyData data;

void resetData() 
{
  data.throttle = 0;
  data.yaw = 127;
  data.pitch = 127;
  data.roll = 127;
  data.AUX1 = 0;
  data.AUX2 = 0;
  data.AUX3 = 0;
  data.AUX4 = 0;
  data.AUX5 = 0;
  data.AUX6 = 0;
  data.AUX7 = 0;
  data.gimbalY = 0;
  data.gimbalZ = 0;
}

void setup()
{
  //Start everything up
  pinMode(Pin_AUX1, INPUT_PULLUP);
  pinMode(Pin_AUX2, INPUT_PULLUP);
  pinMode(Pin_AUX3, INPUT_PULLUP);
  pinMode(Pin_AUX4, INPUT_PULLUP);
  pinMode(Pin_AUX5, INPUT_PULLUP);
  pinMode(Pin_AUX6, INPUT_PULLUP);
  pinMode(Pin_AUX7, INPUT_PULLUP);
  radio.begin();
  radio.setAutoAck(false);
  radio.setDataRate(RF24_250KBPS);
  radio.openWritingPipe(pipeOut);
  resetData();
}

int mapJoystickValues(int val, int lower, int middle, int upper, bool reverse)
{
  val = constrain(val, lower, upper);
  if ( val < middle )
    val = map(val, lower, middle, 0, 128);
  else
    val = map(val, middle, upper, 128, 255);
  return ( reverse ? 255 - val : val );
}

void loop()
{
  data.throttle = mapJoystickValues( analogRead(A0), 60, 490, 925, true );
  data.yaw      = mapJoystickValues( analogRead(A7), 10, 502, 1000, true );
  data.pitch    = mapJoystickValues( analogRead(A2), 44, 502, 934, true );
  data.roll     = mapJoystickValues( analogRead(A1),  0, 520, 956, false );
  data.gimbalY  = map(analogRead(A6), 0, 1023, 0, 255);
  data.gimbalZ  = map(analogRead(A7), 0, 1023, 0, 255);
  data.AUX1     = digitalRead(Pin_AUX1);
  data.AUX2     = digitalRead(Pin_AUX2);
  data.AUX3     = digitalRead(Pin_AUX3);
  data.AUX4     = digitalRead(Pin_AUX4);
  data.AUX5     = digitalRead(Pin_AUX5);
  data.AUX6     = digitalRead(Pin_AUX6);
  data.AUX7     = digitalRead(Pin_AUX7);
  radio.write(&data, sizeof(MyData));
}
