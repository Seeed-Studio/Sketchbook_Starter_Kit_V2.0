// Demo for Grove - Starter Kit V2.0
//
// Uses the Grove - Light Sensor to measure the ambient light, and turns on the Grove - LED
// when the value drops below a certain threshold.
// In a bright room, try covering the Grove - Light Sensor with your hand.
// Connect the Grove - Light Sensor to the socket marked A0
// Connect the Grove - LED to D7

// Defines the pins to which the light sensor and LED are connected.
const int pinLight = A0;
const int pinLed   = 7;

// Defines the light-sensor threshold value below which the LED will turn on.
// Decrease this value to make the device more sensitive to ambient light, or vice-versa.
int thresholdvalue = 400;

void setup()
{
    // Configure the LED's pin for output signals.
    pinMode(pinLed, OUTPUT);
}

void loop()
{
    // Read the value of the light sensor. The light sensor is an analog sensor.
    int sensorValue = analogRead(pinLight);

    // Turn the LED on if the sensor value is below the threshold.
    if(sensorValue < thresholdvalue)
    {
        digitalWrite(pinLed, HIGH);
    }
    else
    {
        digitalWrite(pinLed, LOW);
    }
}

