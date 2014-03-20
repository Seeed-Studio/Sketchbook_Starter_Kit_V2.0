// demo of Starter Kit V2.0 - Grove - Relay
// when a button press, relay will on

const int buttonPin = 3;     // the button is attached to digital pin 3
const int relayPin =  9;     // the relay is attached to digital pin 9
int buttonState = 0;

void setup()
{
    pinMode(relayPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop()
{
    // read the state of the button:
    buttonState = digitalRead(buttonPin);
    
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
