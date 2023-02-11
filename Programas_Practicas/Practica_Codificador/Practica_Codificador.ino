const int num = 8;
const int leds[num] = {2, 3, 4, 5, 6, 7, 8, 9};
int potenciometro = A0;

void setup() {
  for (int i = 0; i < num; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(potenciometro, INPUT);
}

void loop() {
  int val = analogRead(potenciometro);
  int vled = map(val, 0, 1023, 0, num - 1);
  
  for (int i = 0; i < num; i++) {
    digitalWrite(leds[i], i == vled);
  }
}
