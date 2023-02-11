int potSel = A0; // pin donde se conecta el potenciometro de seleccion
int pontInt = A1;
int led = 6;
//int led  = 3;
//int valorPot = 0;
//int intensidad = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

int sel = 0;
int valintepot =0;
int valinteserial = 0;

void loop() {
  sel = analogRead(potSel); // 0 1023. ==> 0 1   
  valintepot = analogRead(pontInt);

  Serial.println(String(sel)+ " " + String(valintepot));
  
  if(Serial.available() > 0){
  valinteserial = Serial.readString().toInt();
  }
  ///////////
  if(sel > 511){ //aplicamos control serial
    analogWrite(led , valinteserial);
  }else{ //aplicamos contgrol por el pot 
    valintepot = map(valintepot , 0 , 1023 , 0 , 255);
    // Serial.println(String(valintepot));
    analogWrite(led , valintepot);
  }

  delay(100);
}
