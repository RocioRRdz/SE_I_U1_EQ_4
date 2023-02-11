int ledA = 2;
int ledB = 3;
int ledCarryIn = 4;
int ledCarry = 5;
int ledCount = 6;

void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledCarryIn, OUTPUT);
  pinMode(ledCarry, OUTPUT);
  pinMode(ledCount, OUTPUT);
}

int carryIn = 0;
void loop() {
  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 1; j++) {
      int sum = i + j + carryIn;
      digitalWrite(ledA, i);
      digitalWrite(ledB, j);
      digitalWrite(ledCount, sum % 2);
      carryIn = sum >= 2;
      digitalWrite(ledCarry, carryIn);
      delay(1000);
    }
  }
}
