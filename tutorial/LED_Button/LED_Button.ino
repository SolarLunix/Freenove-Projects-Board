int buttonB = 2;
int buttonY = 3;
int buttonR = 4;
int buttonG = 5;
int ledPin = 13;
boolean state13 = false;
int state = 0;

void setup() {
  pinMode(buttonB, INPUT);
  pinMode(buttonR, INPUT);
  pinMode(buttonG, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() { 
  click_change();
  if (state == 0)
    click();
  else if (state == 1)
    led_onoff();
}

void click_change(){
  if(digitalRead(buttonY) == LOW){
    state = 0;
  }

  if(digitalRead(buttonG) == LOW) {
    state = 1;
  }

  digitalWrite(ledPin, LOW);
}

void led_onoff(){
  if(digitalRead(buttonB) == LOW){
    delay(10);
    if(digitalRead(buttonB) == LOW) {
      reverseLED();
      while(digitalRead(buttonB) == LOW);
      delay(10);
    }
  }
}

void reverseLED(){
  state13 = !state13;
  digitalWrite(ledPin, state13);
}

void click(){
  if(digitalRead(buttonB) == HIGH){
    digitalWrite(ledPin, false);
  } else {
    digitalWrite(ledPin, true);
  }
}
