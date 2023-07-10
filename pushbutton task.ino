int led = 6;
int button = 5;
int reading = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    reading = !reading;
    digitalWrite(led, reading);
    delay(500);
  }
}
