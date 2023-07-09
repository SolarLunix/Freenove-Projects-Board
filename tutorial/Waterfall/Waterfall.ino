const int LED_COUNT = 14;
int pins[LED_COUNT] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

void setup() {
  for(int pin : pins){
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int pin : pins){
    barGraphDisplay(pin);
  }
  
  for(int i = LED_COUNT-1; i >= 0; i--){
    barGraphDisplay(pins[i]);
  }
}

void barGraphDisplay(int ledOn) {
  for(int pin:pins){
    if (ledOn == pin){
      digitalWrite(pin, HIGH);
    } else {
      digitalWrite(pin, LOW);
    }
  }
  delay(100);
}