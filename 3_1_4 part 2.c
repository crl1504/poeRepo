#pragma config(Sensor, in1,    LineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    Potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  encoder,        sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ultrasonic,     sensorSONAR_inch)
#pragma config(Sensor, dgtl12, LED,            sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           RightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           LeftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           ServoMotor,    tmotorServoStandard, openLoop)

task main()
{
	while (1 == 1)//repeat indefinitely
	{
    while (SensorValue(limitSwitch) != 0)//repeat while limitSwitch pressed
    {
			if(SensorValue(lightSensor)>700)// if dark
    	{
        turnFlashlightOn(flashlight,127);
    	}
    	else // if not dark
    	{
        turnFlashlightOff(flashlight);
    	}
    }
    //do this when the limitSwitch is not pressed
}


}
