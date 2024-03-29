#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	// wait for bumper switch
	untilBump(bumpSwitch);
	// run both motors at half until switch is pressed again
	startMotor(leftMotor, 63);
	startMotor(rightMotor, 63);
	untilBump(bumpSwitch);
	// run motors at reverse for 3.5s
	stopMotor(leftMotor);
	stopMotor(rightMotor);
	startMotor(leftMotor, -63);
	startMotor(rightMotor, -63);
	wait(3.5);
	// stop both
	stopMotor(leftMotor);
	stopMotor(rightMotor);


}
