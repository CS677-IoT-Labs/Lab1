int granularity = 1;
int brightness  = 0;

// set a macro/pseudonym for the IO port to which LED is connected
#define LED_PIN 2

void setup()
{
  // set LED PIN to output
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  brightness += granularity;

  if (brightness == 0 || brightness == 255)
  {
    // Flip it
    granularity = -granularity;
  }

  analogWrite(LED_PIN, brightness);
  delay(10);
}