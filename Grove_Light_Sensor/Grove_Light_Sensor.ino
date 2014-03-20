// demo of Starter kit V2.0 - Grove - Light Sensor
// when the value of light sensor ledd than a certain value
// led will on, you can set this certain value via change thresholdvalue
// such as when you cover light sensor with your hand, you'll find led on

const int pinLight = A0;
const int pinLed   = 7;

int thresholdvalue=400;                 //the threshold to turn on or off the LED

void setup()
{
    pinMode(pinLed, OUTPUT);             //set the LED on Digital 12 as an OUTPUT
}

void loop()
{
    int sensorValue = analogRead(pinLight);    //the light sensor is attached to analog 0
    if(sensorValue<thresholdvalue)
    {
        digitalWrite(pinLed, HIGH);
    }
    else
    {
        digitalWrite(pinLed, LOW);
    }
}
