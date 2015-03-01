int switchState = 0;

// LEDs
int green = 3;
int redUp = 5;
int redDown = 4;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  
  if (switchState == LOW) {
    digitalWrite(green, HIGH);
    digitalWrite(redUp, LOW);
    digitalWrite(redDown, LOW);
  } else {
    digitalWrite(green, LOW);
    digitalWrite(redUp, LOW);
    digitalWrite(redDown, HIGH);
    
    delay(1000);
    
    digitalWrite(redUp, HIGH);
    digitalWrite(redDown, LOW);
    
    delay(1000);
  }
}
