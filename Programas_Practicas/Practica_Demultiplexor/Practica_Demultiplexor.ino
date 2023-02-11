const int num = 4;
int led[num] = {2, 3, 4, 5};
int P1 = 6;
int P2 = 7;

void setup() {
  for (int i = 0; i < num; i++) {
    pinMode(led[i], OUTPUT);
  }
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
}

void loop() {
  for (int i = 0; i < num; i++) {
    digitalWrite(P1, bitRead(i, 0));
    digitalWrite(P2, bitRead(i, 1));
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
  }
}
