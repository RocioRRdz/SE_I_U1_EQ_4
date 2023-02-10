byte numero; //0 - 255

void setup() {
	numero = 0;
  
	Serial.begin(9600); //baudios a los que se comunicara el arduino con la computadora
}

void loop() {
	Serial.print(numero);
	if (numero<255){
		numero++;
  }else{
	Serial.print("- Se ha llegado al limite de la variable");
  }
  Serial.println();
  delay(1000);
}
