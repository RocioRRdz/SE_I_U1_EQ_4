//Modulacion de ancho de pulso= PWM
//Consiste en analogia
//Simula una señal analogica a travesde la variacin del ancho de pulso de una señal digital


//1 byte para trabajarpor pwm= 8bits

//OV = 0
//5V = 255

//Para trabaja9rcon pwm, se requiere que se utilice un pin que lo soporte.
//En arduino: viene señalados con una Virtiguilla (~).

int led=6;
void setup() {
  //Los pines pwm, no requieren que se establezca elmodo de trabao.

}

void loop() {
  for (i=0; i<255; i++){
      analogWrite(led, i);
      delay(10);
  }

  for (i=255; i>0; i--){
      analogWrite(led, i);
      delay(10);
  }
}
