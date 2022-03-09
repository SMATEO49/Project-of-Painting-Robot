# Painting robot controller project

It is my project of Painting Robot done to pass at the end of semester of "Real-time Control Systems" class at University of Technology. It is only for simulation script for the FPGA configuration program by **Xilinx**, in this case **xc3s200-5ft256**.

## 1. Scope of the project

> Develop a controller for a given industrial process. Suggest a way of signaling and entering data from sensors. Draw a transition graph that describes the operation of the driver. Create files VHDL source and bindings file. Program the system and check the correct operation of the controller.

## 2.Task

> Figure 1 shows a diagram of a robot for painting objects. The robot's arms are moved by means of ball screws powered by M1 and M2 motors. At the end of the second the arm is mounted vertically with a single-acting pneumatic cylinder S1. At the end of the engine piston rod there is a suction cup S, used to catch painted objects. The robot is equipped with object presence sensors. Sensor C1 detects objects metal and non-metal, and the C2 sensor only metal objects.

![Image of robot](https://github.com/SMATEO49/Project-of-Painting-Robot/blob/main/readmefiles/object.png?raw=true)<figcaption>Fig. 1 Robot for painting objects: a) side view, b) top view, c) cycle of painting metal objects, d) cycle of painting non-metal objects</figcaption>

> In one process cycle, the robot occupies four positions:
>
> 1. Rest position I;
> 2. Place of collecting the item II;
> 3. Place of painting III;
> 4. Place of putting the item away IV.

> The work cycle of the robot begins after pressing the START button. The robot can be stopped at any time by pressing the STOP button. After pressing the START button, the robot starts working from the place where it was stopped. The work cycle is as follows:
>
> 1. The robot waits in the rest position and for the appearance of an object;
> 2. The item is put in place II. Sensors C1 and C2 detect the presence of an object, recognize the type of material (metal / non-metal) and give a signal to start the robot's movements;
> 3. The robot arm moves to position II and the object is picked up by means of the P1 suction cup placed at the end of the S1 actuator piston rod;
> 4. The item is transferred to painting site III, where the painting cycle is performed. Metal objects are painted in cycle c), while non-metal objects are painted in cycle d).
> 5. The item is returned to its place. IV.
> 6. The robot returns to the home position I. The cycle repeats from the beginning.

## 3. Table of used inputs and outputs

> | Name  |                        Description                        |
> | :---: | :-------------------------------------------------------: |
> |  clk  |                binary input for the clock                 |
> | START |            input signal from the START button             |
> | STOP  |             input signal from the STOP button             |
> |  C1   |             signal from the proximity sensor              |
> |  C2   |               signal from the metal sensor                |
> |  S1   | signal that controls the single-acting pneumatic actuator |
> |  P1   |                suction cup control signal                 |
> |  M1   |              motor M1 control signal vector               |
> |  M2   |              motor M2 control signal vector               |
>
> - _clk_ - clock with a frequency of 100,000 [Hz] in the project,
> - _START_ - normally open monostable button (0 - rest, 1 - work activation
>   driver),
> - _STOP_ - normally open monostable button (0 - rest, 1 - work stoppage
>   driver),
> - _C1_ - proximity sensor (0 - empty, 1 - object detection),
> - _C2_ - metal sensor (0 - empty, 1 - metal detection),
> - _S1_ - single-acting pneumatic cylinder (0 - retracted (upper position of the suction cup), 1 - extended (lower position of the suction cup))
> - _P1_ - suction cup suction (0 - open, 1 - suction (grabbing an object))
> - _M1_, _M2_ - 2-element vectors for motor control (1x - the engine is running, rotating, 0x - the engine is at rest, 11 - the rotation of the CCW motor (moving the sled away), 10 - the rotation of the CW motor (approximating the sledge))

## 4. How the controller works

![How it works](https://github.com/SMATEO49/Project-of-Painting-Robot/blob/main/readmefiles/graph.png?raw=true)<figcaption>Fig. 2 Flowchart of a fully state machine based program</figcaption>

## 5. It is my and old

![Proof of my work](https://github.com/SMATEO49/Project-of-Painting-Robot/blob/main/readmefiles/proof.png?raw=true)<figcaption>Fig. 3 The window of the discussed project when starting the IDE</figcaption>
