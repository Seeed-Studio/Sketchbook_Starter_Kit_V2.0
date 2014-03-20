// demo of Starter Kit V2.0 - Grove Sound Sensor
// when sound larger than a certain value, led will on

const int pinSound = A0;               // pin of Sound Sensor
const int pinLed   = 7;                // pin of LED

int thresholdValue = 50;                 // the threshold to turn on or off the LED

void setup()
{
    pinMode(pinLed, OUTPUT);            //set the LED on Digital 12 as an OUTPUT
}

void loop()
{
    int sensorValue = analogRead(pinSound);   //read the sensorValue on Analog 0
    if(sensorValue>thresholdValue)
    digitalWrite(pinLed,HIGH);
    delay(200);
    digitalWrite(pinLed,LOW);
}
