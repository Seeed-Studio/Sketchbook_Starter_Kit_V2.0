int ledPin=12;                          //attach a LED to Digital 12
int thresholdvalue=400;                 //the threshold to turn on or off the LED

void setup()
{
    pinMode(ledPin,OUTPUT);             //set the LED on Digital 12 as an OUTPUT
}

void loop()
{
    int sensorValue = analogRead(0);    //the light sensor is attached to analog 0
    if(sensorValue<thresholdvalue)
    {
        digitalWrite(ledPin,HIGH);
    }
    else
    {
        digitalWrite(ledPin,LOW);
    }
}