const int pot1 = A0;
const int pot2 = A1;
const int LED = 7;

void setup() {
  pinMode(outputPin, OUTPUT);
}

void loop() {
  int v1 = analogRead(pot1);
  int v2 = analogRead(pot2);
  
  if (v1 > v2) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
