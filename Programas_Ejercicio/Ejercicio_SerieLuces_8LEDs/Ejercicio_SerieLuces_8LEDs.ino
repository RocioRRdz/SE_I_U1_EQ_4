int potenciometro = A0;
int led[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int tleds = 8; 
int valor, mapeado;

void setup() {
  for (int i = 0; i < tleds; i++) {
    pinMode(led[i], OUTPUT);
  	Serial.begin(9660);
  }
}

void loop() {
  valor = analogRead(potenciometro);
  mapeado = map(valor, 0, 1023, 1, 3);

if(mapeado == 1){
  Serial.println(mapeado);
  for (int j = 0; j < 255; j++) {
    for (int i = 0; i < 8; i++) {
      analogWrite(led[i], j); //Controlar la intensidad del LED
    }
    delay(10); //Retardo para ver los cambios
  }
  for (int j = 255; j >= 0; j--) {
    for (int i = 0; i < 8; i++) {
      analogWrite(led[i], j); //Controlar la intensidad del LED
    }
    delay(10); //Retardo para ver los cambios
  }
}

if(mapeado == 2){
  Serial.println(mapeado);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],LOW);
  delay(200);
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],HIGH);
  delay(200);
}

if(mapeado == 3){
  Serial.println(mapeado);
  
    for(int k=0; k<3; k++){
      digitalWrite(led[0], HIGH);
      digitalWrite(led[1], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[3], HIGH);
      delay(200);
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[3], LOW);
      delay(200);
    }

    for(int l=0; l<3; l++){
      digitalWrite(led[4], HIGH);
      digitalWrite(led[5], HIGH);
      digitalWrite(led[6], HIGH);
      digitalWrite(led[7], HIGH);
      delay(200);
      digitalWrite(led[4], LOW);
      digitalWrite(led[5], LOW);
      digitalWrite(led[6], LOW);
      digitalWrite(led[7], LOW);
      delay(200);
    }
  }

  delay(100);
}
