int LED1 = 5;
int LED2 = 6;
int LED3 = 7;
int POT = A0;

int valor;
int mapeado;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(POT);
  mapeado = map(valor, 0, 1023, 1, 5);
  Serial.println(mapeado);

  if (mapeado == 1) {
    // AND
    Serial.println("********************");
    Serial.println("Compuerta: AND");
    digitalWrite(LED1, false);
    digitalWrite(LED2, false);
    digitalWrite(LED3, false);
    delay(2000);
    digitalWrite(LED1, false);
    digitalWrite(LED2, true);
    digitalWrite(LED3, false);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, false);
    digitalWrite(LED3, false);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, true);
    digitalWrite(LED3, true);
    delay(2000);

  } else if (mapeado == 2) {
    // OR
    Serial.println("********************");
    Serial.println("Compuerta: OR");
    digitalWrite(LED1, false);
    digitalWrite(LED2, false);
    digitalWrite(LED3, false);
    delay(2000);
    digitalWrite(LED1, false);
    digitalWrite(LED2, true);
    digitalWrite(LED3, true);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, false);
    digitalWrite(LED3, true);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, true);
    digitalWrite(LED3, true);
    delay(2000);

  } else if (mapeado == 3) {
    // XOR
    Serial.println("********************");
    Serial.println("Compuerta: XOR");
    digitalWrite(LED1, false);
    digitalWrite(LED2, false);
    digitalWrite(LED3, false);
    delay(2000);
    digitalWrite(LED1, false);
    digitalWrite(LED2, true);
    digitalWrite(LED3, true);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, false);
    digitalWrite(LED3, true);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, true);
    digitalWrite(LED3, false);
    delay(2000);

  } else if (mapeado == 4) {
    // XNOR
    Serial.println("********************");
    Serial.println("Compuerta: XNOR");
    digitalWrite(LED1, false);
    digitalWrite(LED2, false);
    digitalWrite(LED3, true);
    delay(2000);
    digitalWrite(LED1, false);
    digitalWrite(LED2, true);
    digitalWrite(LED3, false);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, false);
    digitalWrite(LED3, false);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, true);
    digitalWrite(LED3, true);

  } else if (mapeado == 5) {
    // NOT
    Serial.println("********************");
    Serial.println("Compuerta: NOT");
    digitalWrite(LED1, false);
    digitalWrite(LED2, true);
    digitalWrite(LED3, 0);
    delay(2000);
    digitalWrite(LED1, true);
    digitalWrite(LED2, false);
    digitalWrite(LED3, 0);
    delay(2000);
  }
}

