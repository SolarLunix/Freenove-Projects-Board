int led_pin = 13;

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  blink(led_pin);
}

void blink(int pin){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(500);
}