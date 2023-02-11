int potenciometro = A0;
int led1 = 5;
int led2 = 6;
int led3 = 7;
int valor, mapeado;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9660);
}

void loop() {
valor = analogRead(potenciometro);
//map(value,fromLOW,fromHIGH,toLOW,toHIGH);
mapeado = map(valor, 0, 1023, 1, 4);
if(mapeado == 1){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}

if(mapeado == 2){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}

if(mapeado == 3){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
}

if(mapeado == 4){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
}

delay(100);
}
