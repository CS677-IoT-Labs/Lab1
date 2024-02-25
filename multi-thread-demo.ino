TaskHandle_t hello_task;

#define INTERNAL_LED_PIN 2

void setup()
{
  Serial.begin(9600);
  pinMode(INTERNAL_LED_PIN, OUTPUT);

  // create a task that will be executed in the Task1code() function, with priority 1 and executed on core 0
  xTaskCreatePinnedToCore(
      Task1code,   /* Task function. */
      "SAYHEY",    /* name of task. */
      10000,       /* Stack size of task */
      NULL,        /* parameter of the task, we need this when the task function accepts params */
      1,           /* priority of the task , 0 is the worst */
      &hello_task, /* Task handle to keep track of created task */
      0);          /* pin task to core 0. core 1 used by arduino by default */
  delay(500);
}

// Task1code: blinks an LED every 1000 ms
void Task1code(void *pvParameters)
{
  Serial.print("Hello task running on core ");
  Serial.println(xPortGetCoreID());

  // infinite loop
  while (true)
  {
    Serial.println("tasksmth");
    delay(1000);
  }
}

void loop()
{
  // drive the LED in the main loop. can be anything ofcourse
  digitalWrite(INTERNAL_LED_PIN, HIGH);
  delay(700);
  digitalWrite(INTERNAL_LED_PIN, LOW);
  delay(700);
}