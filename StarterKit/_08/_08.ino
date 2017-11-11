const int switchPin = 8;

unsigned long previousTime = 0;

int switchState = 0;
int prevSwitchState = 0;

int led = 2;

long interval = 300;

void setup() {
  for(int x = 2; x < 8; x++) {
    pinMode(x, OUTPUT);
  }

  pinMode(switchPin, INPUT);
}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - previousTime > interval) {
    previousTime = currentTime;
    digitalWrite(led, HIGH);
    led++;

    if (led == 9) {
      resetLeds();
      led = 2;
    }
  }
}

void resetLeds() {
  for(int x = 2; x < 8; x++) {
    digitalWrite(x, LOW);
  }
}

