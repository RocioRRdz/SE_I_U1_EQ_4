int LEDS[] = {2,3,4,5,6,7,8,9};
long a = 0;
long b = 1;
long c = 0;

void setup() {
  for (int i=0; i<8; i++){
    pinMode(LEDS[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  c = a + b;
  a = b;
  b = c;

  String binario = decimalToBinary(c);
  Serial.println("Fibonacci: " + String(c) + " con Binario: " + binario);

  for (int i=0; i<8; i++){
    if (binario[7-i] == '1'){
      digitalWrite(LEDS[7-i], HIGH);
    }else{
      digitalWrite(LEDS[7-i], LOW);
    }
  }
  delay(2000);
}

String decimalToBinary(long decimal){
  String binario = "";
  
  while(decimal){
    binario = (decimal % 2 == 1 ? '1' : '0') + binario;
    decimal /= 2;
  }

  while (binario.length() < 8) {
    binario = '0' + binario;
  }
  
  return binario;
}