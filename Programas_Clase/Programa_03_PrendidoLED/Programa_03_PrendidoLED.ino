//Los leds tienen dos modos de trabajo, uno digital(PIN DIGITAL) y el otro analogico(PIN PWM)

int led= 13; //arduino uno/mega cuentan con un led en la placa que sirve para realizar pruebas
// Este led se ubica en el pin 13

void setup() {
	//Siempre que se trabaje con un pin digital, se debe definir si el pin sera de entrada o de salida
	pinMode(led, OUTPUT);
}

void loop() {
	digitalWrite(led, HIGH);
	delay(1000);
//prendes y te esperas un segundo
	digitalWrite(led, LOW);
	delay(1000);
}

