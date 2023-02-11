int LEDS[] = {2, 3, 4, 5, 6, 7, 8, 9};
int num = 0;
long factorial = 1;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(LEDS[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  Serial.println("******************");
  Serial.println("Numero: ");
  while (!Serial.available());
  num = Serial.parseInt();
  Serial.println(num);

  factorial = calcFactorial(num);
  Serial.println("Factorial: " + String(factorial) + ", con Binario: " + decimalToBinary(factorial));

  for (int i = 0; i < 8; i++) {
    if (factorial & (1 << i)) {
      digitalWrite(LEDS[7 - i], HIGH);
    } else {
      digitalWrite(LEDS[7 - i], LOW);
    }
  }

int max = 4294967296;
  if (factorial >= max) {
    return;
  }
  delay(2000);
}

long calcFactorial(int n) {
long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

String decimalToBinary(long decimal) {
  String binario = "";
  int place = 1;

  while (decimal) {
    binario = (decimal % 2 == 1 ? '1' : '0') + binario;
    decimal /= 2;
  }

  while (binario.length() < 32) {
    binario = '0' + binario;
  }
  return binario;
}
