byte maxValue = 200;
byte variable = 0;
int LED1 = 2;
int LED2 = 3;

void setup() {
  Serial.print("Ingresa un valor");
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    variable = Serial.parseInt();
    Serial.print("Variable ingresada: ");
    Serial.println(variable);

    if (variable >= maxValue) {
      Serial.println("Límite de la variable.");
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      variable = 0;
    } else {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
    }
  }
}
