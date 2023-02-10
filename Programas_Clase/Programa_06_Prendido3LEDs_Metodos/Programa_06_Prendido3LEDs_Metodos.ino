int leds[3]={4, 5, 6};
int i, tam = 3;

void setup(){
	for (i = 0; i<tam; i++){
	  pinMode(leds[i], OUTPUT);
  } 
}

void loop() {
	actionLEDs(1);
	delay(1000);

  actionLEDs(0);
	delay(1000);
}

void actionLEDs(int v){
	for (i = 0; i<tam; i++){
	  digitalWrite(leds[i], v);
  }
}
