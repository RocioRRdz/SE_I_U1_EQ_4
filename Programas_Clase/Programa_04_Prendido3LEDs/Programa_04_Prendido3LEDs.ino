int led1=4;
int led2=5;
int led3=6; 

void setup(){
	pinMode(led1, OUTPUT); //pines digitles 0-13
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
}

void loop() {
	digitalWrite(led1, HIGH);
	digitalWrite(led2, true);
	digitalWrite(led3, 1);
	delay(1000);

	digitalWrite(led1, LOW);
	digitalWrite(led2, false);
	digitalWrite(led3, 0);
	delay(1000);
}


