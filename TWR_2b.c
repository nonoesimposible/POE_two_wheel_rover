#pragma config(Sensor, in1,    rightLineFollower, sensorLineFollower)
#pragma config(Sensor, in2,    middleLineFollower, sensorLineFollower)
#pragma config(Sensor, in3,    leftLineFollower, sensorLineFollower)
#pragma config(Sensor, in4,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl2,  sonarIn,        sensorSONAR_raw)
#pragma config(Sensor, dgtl5,  pushButton,     sensorTouch)
#pragma config(Sensor, dgtl6,  redLED,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  yellowLED,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  greenLED,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  encoderRight,   sensorQuadEncoder)
#pragma config(Sensor, dgtl11, encoderLeft,    sensorQuadEncoder)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: Activity 3.1.1 Inputs and Outputs
  Team Members: Byron Sharman
  Date: 3/31/2021
  Section:


  Task Description:
  When the button is pushed, drive forward for 3 seconds. When driving, turn the green
  LED on; after stopping, turn the red LED on for one second.


  Pseudocode:
  wait for button to be pushed
  turn on green LED
  turn on left motor
  turn on right motor
  wait 3 seconds
  turn off green LED
  turn off left motor
  turn on red led
  wait 1 second
  turn off red LED

*/

task main()
{

    untilTouch(pushButton);
    turnLEDOn(greenLED);
    //to go straight, both motors must be started
    startMotor(leftMotor, 40);
    startMotor(rightMotor, 41);
    wait(3);
    turnLEDOff(greenLED);
    stopMotor(leftMotor);
    stopMotor(rightMotor);
    turnLEDOn(redLED);
    wait(1);
    turnLEDOff(redLED);


}
