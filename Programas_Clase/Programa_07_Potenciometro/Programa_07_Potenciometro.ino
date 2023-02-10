//El potenciometro tiene 3 pines
//PIN1 -> GND/5V
//PIN2 -> A0 (PIN ANALOGICO SELECCIONADO)
//PIN3 -> 5V / GND
//Es decir: un extremo a 5V y el otro a GND

int potenciometro = A0; //dispositivos analogicos, por lo que requieren conectarse a un pin analogico
//En Arduino, los pines analogicos son los que se encuentran señalados por una "A"

void setup() {
  //Los pines analogicos no requieren que se establezca el modo de trabajo
}

int valor;
void loop() {
  //Los pines analogicos solamente funcionan como entradas....

  valor = analogRead(potenciometro); //ADC ->18bits de resolucion y trabaja con 5V de voltaje de referencia
  //Esto significa que cuentan con 1024 valores -> 0 -> 1023

  Serial.println(potenciometro);
  delay(500);
}
