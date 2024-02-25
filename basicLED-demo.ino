// set a macro/pseudonym for the IO port to which LED is connected
// note that this can be any IO port, that supports output
#define LED_PIN 2
#define LED_FREQ 1

void setup()
{
  // sets a GPIO PIN to mode to output
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}