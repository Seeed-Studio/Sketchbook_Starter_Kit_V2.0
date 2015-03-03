// Demo for Grove - Starter Kit V2.0

// Uses the Grove - Button to control the Grove - Relay.
// When the button is pressed, the relay will be in the "closed" position.
// Connect the Grove - Button to the socket marked D3
// Connect the Grove - Relay to D8

// Define the pins to which the button and relay are attached.
const int buttonPin = 3;
const int relayPin =  8;

void setup()
{
    // Configure the relay's pin for output signals.
    pinMode(relayPin, OUTPUT);

    // Configure the button's pin for input signals.
    pinMode(buttonPin, INPUT);
}

void loop()
{
    // Read the state of the button.
    int buttonState = digitalRead(buttonPin);

    // If the button is pressed, activate (close) the relay.
    if (buttonState == 1)   
    {
        digitalWrite(relayPin, HIGH);
    }
    else   
    {
        digitalWrite(relayPin, LOW);
    }
    delay(10);
}

