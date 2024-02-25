void setup()
{
    // nothing to do here
    Serial.begin(9600);
}

// the function itself runs in a loop, gets called repeatedly, so we print hello world in an infinite loop basically
void loop()
{
    Serial.println("Hello World!");
    delay(1000);
}