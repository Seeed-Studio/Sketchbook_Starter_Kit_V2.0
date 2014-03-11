int potentiometer = 0;

void setup()
{
    Serial.begin(9600);                         // set the serial communication frequency at 9600 bits per sec
    pinMode(potentiometer, INPUT);
}

void loop()
{
    int value = analogRead(potentiometer);
    Serial.println(value);                      // pirnt the value on the serial monitor screen
    delay(1000);                                // wait 1000ms before printing next value
}
