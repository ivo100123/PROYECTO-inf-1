#define bzr 3

int array[10];

void setup() {
  Serial.begin(9600);
  pinMode(bzr, OUTPUT);

  randomSeed(analogRead(A0));

  for (int i = 0; i < 10; i++) {
    array[i] = random(1, 11);
  }

  bool numeroCinco = false;

  Serial.println("vector:");
  for (int i = 0; i < 10; i++) {
    Serial.println(array[i]);

    if (array[i] == 5) {
      numeroCinco = true;
    }
  }

  if (numeroCinco = true) {
    Serial.println("Hay un cinco en el array");

    tone(bzr, 2000, 2000);
  } else {
    Serial.println("No hay ningun cinco en el array");
  }
}

void loop() {
}