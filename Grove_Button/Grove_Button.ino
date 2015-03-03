// Demo for Grove - Starter V2.0
// Author: Loovee  2013-3-10

// Uses the Grove - Button to control the Grove - LED.
// Connect the Grove - Button to the socket marked D3
// Connect the Grove - LED to D7

// Defines the pins to which the button and LED are connected.
const int pinButton = 3;
const int pinLed    = 7;

void setup()
{
    // Configure the button's pin for input signals.
    pinMode(pinButton, INPUT);

    // Configure the LED's pin for output.
    pinMode(pinLed, OUTPUT);
}

void loop()
{
    if(digitalRead(pinButton))
    {
        // When the button is pressed, turn the LED on.
        digitalWrite(pinLed, HIGH);
    }
    else
    {
        // Otherwise, turn the LED off.
        digitalWrite(pinLed, LOW);
    }
    
    delay(10);
}

