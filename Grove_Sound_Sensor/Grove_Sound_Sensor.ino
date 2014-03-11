int ledPin = 9;                         //attach a LED to Digital 12
int thresholdValue = 0;                 // the threshold to turn on or off the LED

void setup()
{
    pinMode(ledPin, OUTPUT);            //set the LED on Digital 12 as an OUTPUT
}

void loop()
{
    int sensorValue = analogRead(A0);   //read the sensorValue on Analog 0
    if(sensorValue>thresholdValue)
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
}