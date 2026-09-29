void multiplicar(int vectorVacio[], int tamanio) {
  int i = 0;

  while (i < tamanio) {
    int Random = random(0, 101);

    if (Random % 10 == 0) {
      vectorVacio[i] = Random;
      i++;
    }
  }
}

int vectorVacio[5];

void setup() {
  
  int i = 0;
  
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  multiplicar(vectorVacio, 5);
  
 
    for (int i = 0; i < 5; i++) {
    Serial.println(vectorVacio[i]);
  }
}

void loop() {


}
