// Demo for Grove - Starter Kit V2.0

// Prints the value of the potentiometer to the serial console.
// Connect the Grove - Rotary Angle Sensor to the socket marked A0
// Open the Serial Monitor in the Arduino IDE after uploading

// Define the pin to which the angle sensor is connected.
const int potentiometer = A0;

void setup()
{
    // Configure the serial communication line at 9600 baud (bits per second.)
    Serial.begin(9600);

    // Configure the angle sensor's pin for input.
    pinMode(potentiometer, INPUT);
}

void loop()
{
    // Read the value of the sensor and print it to the serial console.
    int value = analogRead(potentiometer);
    Serial.println(value);

    // Wait 0.1 seconds between readings.
    delay(100);
}

