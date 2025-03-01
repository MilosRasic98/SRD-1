# DIY Arduino Drone SRD-1

This repository covers the development of a completely open-source drone that I named the SRD-1. SRD-1 stands for Science & Research Drone 1 (the name was of course inspired by the legendary plane SR-71 Blackbird). For motors and ESCs, this drone uses the generic 2212 motors with the generic 30A ESC-s, meaning that those parts can be easily acquired by anyone. As for the rest of the electronics, all 3 major systems of the drone are based on individual Arduino Nanos. This includes:

1. Flight Controller - Arduino Nano, paired with an MPU6050, running the open-source MultiWii firmware
2. Radio Receiver - Arduino Nano, paired with the RF NRF module, code available in this repository
3. Radio Transmitter - Arduino Nano, paired with the RF NRF module, code available in this repository

If you check out the folders, you'll also be able to find all of the necessary CAD files for building your own drone. I will also be posting all of these models on Printables so you can download them there more easily if you would like. Links to Printables models:

1. https://www.printables.com/model/227060-raspberry-pi-hq-camera-drone-gimbal

I made this drone in 2021 as part of Element14 Communities, Attack of the Drones Project14 Competition, which this project managed to win! If you're interested in my write-up from back then, you can check this link here: https://community.element14.com/challenges-projects/project14/attackofthedrones/b/blog/posts/srd-1---3d-printed-drone-arduino-raspberry---june-11th-update---it-flies

Below, you can find some pictures of the finished drone, flight videos, and crash videos, of course!

![1623446231116](https://github.com/user-attachments/assets/49d3253f-3024-4ecc-9d99-9b085b84803d)

![1622150886577](https://github.com/user-attachments/assets/77c4e53e-28c4-4627-b220-c0617def0be0)

![8](https://github.com/user-attachments/assets/ffcf58a6-e0bb-48bf-bd7a-bb8ab258d10d)

![3](https://github.com/user-attachments/assets/177cfd21-869e-4eac-ab47-2cbfdf3a661e)

![34](https://github.com/user-attachments/assets/3a5d3340-5456-4a03-8ad3-2f6943ecc2ff)

My goal with this drone was to make it capable, but at the same time, make it as cheap as possible. This is why for the construction of the drone, I went with mostly 3D printed parts, as well as some easily obtainable hardware like PVC pipes so that anyone trying to replicate the drone can have the easiest time possible! Here are some flight videos of the drone, some successful, some a bit less successful, as you can see! Hope you like my sophisticated safety mechanism!

Flight 1

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/f9ZAgGi6Brw/0.jpg)](https://www.youtube.com/watch?v=f9ZAgGi6Brw)

Flight 2

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/CNurr2BLMr8/0.jpg)](https://www.youtube.com/watch?v=CNurr2BLMr8)

Flight 3

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/EGkVoUZHSek/0.jpg)](https://www.youtube.com/watch?v=EGkVoUZHSek)

Flight 4

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/9p4l3mPER5Y/0.jpg)](https://www.youtube.com/watch?v=9p4l3mPER5Y)

Drone Crash

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/lXBSGYBcmdE/0.jpg)](https://www.youtube.com/watch?v=lXBSGYBcmdE)

If you're considering making a similar drone and are curious about the lift capabilities, before making this drone, I made a drone motor test stand to find out what kind of thrust I was working with (you can check out the thrust stand, which is also an open-source project here: https://github.com/MilosRasic98/BLDC-Thrust-Tester), each motor could produce 870g of thrust. To get good performance out of the drone, ideally, you would like to keep it below 1.75kg, which is around half the weight of the maximum thrust with all 4 motors at full throttle.

![1](https://github.com/user-attachments/assets/0a04b7aa-8e87-4f3c-b6d8-26666903d461)

My ultimate goal was to equip this drone with a Raspberry Pi and a Raspberry Pi Camera so I could do some recording and some more advanced stuff, but I never got around to the software part of it. However, I have done CAD models and printed out a gimbal for the Raspberry Pi HQ Camera module as well as some drone mounts for the Raspberry Pi 4. You can find the CAD files for each of these in the 3D Model directories or on the Printables links that I've linked at the beginning of this Readme file.

![1621986074014](https://github.com/user-attachments/assets/1e39a893-685b-4c33-8661-4f395991add4)

![1621986098823](https://github.com/user-attachments/assets/78ee6218-672e-4423-a433-155cb9e82030)

As mentioned above, both the RC transmitter and receiver were also made using Arduino Nano boards. To make my life a bit easier when I was making this drone, I used an RC transmitter body from an old RC helicopter I had and just connected it by soldering wires to the potentiometers. Another way you can go to recreate this would be using something like the Arduino joystick modules and keeping the code essentially the same.

![1621959381772](https://github.com/user-attachments/assets/2373eb57-1eb7-469b-ba05-cf9429e0cf2c)

![1621972472953](https://github.com/user-attachments/assets/f04aa1fd-6f01-4015-b867-a2ca850a8052)

![1621972956636](https://github.com/user-attachments/assets/7d06b4a4-4e43-45a5-a1ad-cffc57d7301e)

I've tried my hardest to design all of the mechanical parts with the manufacturing process in mind, in this case, 3D printing. This is why I tried my best to minimize the support material used, as well as optimize the printability of the parts so that the parts can get the most strength where they need it. I've left a lot of comments in the technical drawings section, which you can check below, or check all of it in the technical drawings directory!

![2](https://github.com/user-attachments/assets/3f126dda-77a4-4be8-9bc5-2ee9ee2c08b9)

![3](https://github.com/user-attachments/assets/fa9cb2fb-30a6-407d-abd2-0889320b5a1d)

![4](https://github.com/user-attachments/assets/af6b4f59-f1ba-4953-a4ba-5ec4099d8abc)

![5](https://github.com/user-attachments/assets/02ba59e0-f9d1-4879-b060-daa0c47f06f1)

![6](https://github.com/user-attachments/assets/2c783544-decc-4702-b11d-2a29fc6dcd3e)

![7](https://github.com/user-attachments/assets/2e922cd7-8676-405f-8a19-821e020990ce)

![11](https://github.com/user-attachments/assets/3bb5ca0a-7620-49d9-8bbd-e5c35fb68419)

![12](https://github.com/user-attachments/assets/93f901a3-b2f8-43d5-8e11-3e994c9a65e3)

![13](https://github.com/user-attachments/assets/d00e0ecd-1319-44bc-aeda-d5a3093c1e77)

![14](https://github.com/user-attachments/assets/aa5046e6-6792-4583-82ea-a07c053fda39)

These are the same principles I tried to keep when I designed the gimbal for the Raspberry Pi HQ Camera using the popular SG90 servo motors. Here, I used some pieces of rubber tubing to act as shock absorbers to at least try and remove some of the noise coming from the propellers while the drone is flying.

![27](https://github.com/user-attachments/assets/81174c6a-34c0-4caf-b106-0da4e69748ef)

![28](https://github.com/user-attachments/assets/e751e1be-5c7b-449d-ae4b-9c5999757fa4)

![29](https://github.com/user-attachments/assets/611c7b69-0d15-4ab1-8868-d7901c2d51f0)

![30](https://github.com/user-attachments/assets/72ba4516-ff69-4f2f-80db-f2845c6f364d)

![31](https://github.com/user-attachments/assets/2cd5fb75-18b9-4c0f-883c-a625f7de57fe)

![32](https://github.com/user-attachments/assets/4ca92997-5abb-4770-916e-e3adc002f7aa)

![33](https://github.com/user-attachments/assets/7d55d1b3-37b3-45a0-a37f-5c8dd203e169)

![34](https://github.com/user-attachments/assets/4edaa6a2-a8c9-415c-a92b-ae2d405e83a5)

![35](https://github.com/user-attachments/assets/0681aa25-2fe9-4246-8652-1f965f381b44)

Hope you like the project and that it at least inspires you to make something similar. Feel free to write to me if you have any questions with the project itself!
