int a = 2;
int b = 3;
int sum = 4;
int carry = 5;
int state = 0;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(sum, OUTPUT);
  pinMode(carry, OUTPUT);
}

void loop() {
  if (state == 0) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(sum, LOW);
    digitalWrite(carry, LOW);
  }

  if (state == 1) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(sum, HIGH);
    digitalWrite(carry, LOW);
  }

  if (state == 2) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(sum, HIGH);
    digitalWrite(carry, LOW);
  }

  if (state == 3) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(sum, LOW);
    digitalWrite(carry, HIGH);
  }

  state = (state + 1) % 4;
  delay(2000);
}
