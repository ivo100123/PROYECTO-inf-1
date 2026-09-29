int leds[] = {2, 3, 4, 5, 6};
int cantidadLeds = 5;

int escalera[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
int cantidadPasos = 9;

void setup() {
  for (int i = 0; i < cantidadLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < cantidadPasos; i++) {

    int encender = escalera[i];

    for (int j = 0; j < cantidadLeds; j++) {
      digitalWrite(leds[j], 0);
    }
    for (int k = 0; k < encender; k++) {
      digitalWrite(leds[k], 1);
    }
    delay(500);
  }
}
