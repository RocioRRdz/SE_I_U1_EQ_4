int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9}; // pines de los LEDS
int nums = 8; 

void setup() {
  for (int i = 0; i < nums; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  int fibonacci[] = {0, 1, 1, 2, 3, 5, 8, 13};

  for (int i = 0; i < nums; i++) {
    int val = fibonacci[i]; // valor actual
    
    for (int j = 0; j < nums; j++) {
      if (j < val) {
        digitalWrite(ledPins[j], HIGH); 
      } else {
        digitalWrite(ledPins[j], LOW);
      }
    }
    delay(2000);
  }
}
