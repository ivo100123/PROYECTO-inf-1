int array[] = {2, 6, 10, 11};
int largo = sizeof(array) / sizeof(array[0]);

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < largo; i++) {
    Serial.print("multiplos: ");
    Serial.println(array[i]);

    for (int j = 1; j <= 5; j++) {
      Serial.println(array[i] * j);
    }

  }
}

void loop() {
}
