void setup()
{
    // initiate serial communication at baudrate of 115200
    Serial.begin(115200);
    // set the internal led pin to output mode
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // listen for available data, if available parse, otherwise keep looping
    if (Serial.available())
    {
        // read till you encounter a new line
        String data = Serial.readStringUntil('\n');
        if (data == "ON")
        {
            digitalWrite(LED_BUILTIN, HIGH); // turn on LED
        }
        else if (data == "OFF")
        {
            digitalWrite(LED_BUILTIN, LOW); // turn off LED
        }
    }
}