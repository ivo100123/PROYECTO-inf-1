#define led 2
#define btn 3
#define DURACION 3000

int secuencia[5] = {0,0,0,0,0};
int estadoAnterior = 1;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int i = 0;
  
  while (i < 5) {
    digitalWrite(led, 1);
    unsigned long t = millis();
    
    while (millis() - t < DURACION) {
      int e = digitalRead(btn);
      
      if (e == 0 && estadoAnterior == 1) {
        secuencia[i] = !secuencia[i];
      }
      
      estadoAnterior = e;
    }
    
    digitalWrite(led, 0);
    i++;
    estadoAnterior = 0;
    unsigned long p = millis();
    while (millis() - p < 500);
  }

  for (int x = 0; x < 5; x++) {
    Serial.print(secuencia[x]);
    Serial.print(" ");
  }
  Serial.println();

  for (int k = 0; k < 5; k++) {
    secuencia[k] = 0;
  }
}
