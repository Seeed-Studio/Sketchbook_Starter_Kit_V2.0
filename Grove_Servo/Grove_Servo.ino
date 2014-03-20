// demo of Starter Kit V2.0 - Servo

#include <Servo.h>

const int pinServo = 3;               // pin of servo
const int potentiometer = 0;          // pin of potentiometer

Servo groveServo; //create a object

int shaft;

void setup()
{
    groveServo.attach(pinServo);     //the servo is attached to D3
    pinMode(potentiometer, INPUT);
}

void loop()
{
    shaft = analogRead(potentiometer);
    shaft = map(shaft, 0, 1023, 0, 179);
    //analog input data range from 1~1023, but servo
    groveServo.write(shaft);             //only reflects to data ranging from 1~179.
    delay(15);
}
