// demo of Grove - Starter V2.0
// Loovee  2013-3-10
// this demo will show you how to use Grove - Button to control a LED
// when the button was pressed, the led will on 
// otherwise led off
// Grove - Button connect to D3
// Grove - LED connect to D7

const int pinButton = 3;                        // pin of button define here
const int pinLed    = 7;                        // pin of led define here

void setup()
{
    pinMode(pinButton, INPUT);                  // set button INPUT
    pinMode(pinLed, OUTPUT);                    // set led OUTPUT
}

void loop()
{
    if(digitalRead(pinButton))                     // when button is pressed
    {
        digitalWrite(pinLed, HIGH);             // led on
    }
    else
    {
        digitalWrite(pinLed, LOW);
    }
    
    delay(10);
}
