const int num = 8;
int leds[num] = {2, 3, 4, 5, 6, 7, 8, 9};
int P1 = 10;
int P2 = 11;

void setup() {
  for (int i = 0; i < num; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(P1, INPUT_PULLUP);
  pinMode(P2, INPUT_PULLUP);
}

void loop() {
  int Led = 0;

  if (digitalRead(P1) == LOW) {
    Led += 4;
  }
  if (digitalRead(P2) == LOW) {
    Led += 2;
  }
  for (int i = 0; i < num; i++) {
    digitalWrite(leds[i], i == Led);
  }
  delay(100);
}
