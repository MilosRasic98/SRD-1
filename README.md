# DIY Arduino Drone SRD-1

This repository covers the development of a completely open-source drone that I named the SRD-1. SRD-1 stands for Science & Research Drone 1 (the name was of course inspired by the legendary plane SR-71 Blackbird). For motors and ESCs, this drone uses the generic 2212 motors with the generic 30A ESC-s, meaning that those parts can be easily acquired by anyone. As for the rest of the electroncis, all 3 major systems of the drone are based on individual Arduino Nanos. This includes:

1. Flight Controller - Arduino Nano, paired with an MPU6050, running the open-source MultiWii firmware
2. Radio Receiver - Arduino Nano, paired with the RF NRF module, code available in this repository
3. Radio Transmitter - Arduino Nano, paired with the RF NRF module, code available in this repository

If you check out the folders, you'll also be able to find all of the necessary CAD files for building your own drone. I will be also posting all of these models on Printables so you can download them there easier if you would like. Links to Printables models:

1. https://www.printables.com/model/227060-raspberry-pi-hq-camera-drone-gimbal

I made this drone in 2021, as part of Element14 Communities, Attack of the Drones Project14 Competition, which this project managed to win! If you're interested in my write up from back then, you can check this link here: https://community.element14.com/challenges-projects/project14/attackofthedrones/b/blog/posts/srd-1---3d-printed-drone-arduino-raspberry---june-11th-update---it-flies

