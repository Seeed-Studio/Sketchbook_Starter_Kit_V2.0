// Demo for Grove - Starter V2.0
// Author: Loovee  2013-3-10
// Pulses the Grove - LED with a "breathing" effect.
// Connect the Grove - LED to the socket marked D3

// Defines the pin to which the LED is connected.
// Any pin that supports PWM can also be used:
// 3, 5, 6, 9, 10, 11
const int pinLed    = 3;

// Define the delay for the "breathing" effect; change this
// to a smaller value for a faster effect, larger for slower.
const int BREATH_DELAY = 5; // milliseconds

void setup()
{
    // Configure the LED's pin for output signals.
    pinMode(pinLed, OUTPUT);
}

void loop()
{
    for(int i=0; i<256; i++)
    {
        analogWrite(pinLed, i);
        delay(BREATH_DELAY);
    }
    delay(100);
    
    for(int i=254; i>=0; i--)
    {
        analogWrite(pinLed, i);
        delay(BREATH_DELAY);
    }
    delay(500);
}
