int r = 2;
int g = 3;
int b = 4;

int colores[3][3] = {
  {122, 234, 21},
  {33,  53, 155},
  {200, 255, 12}
};

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {

  for (int i = 0; i < 3; i++) {

    int rojo   = colores[i][0];
    int verde  = colores[i][1];
    int azul   = colores[i][2];

    analogWrite(r, rojo);
    analogWrite(g, verde);
    analogWrite(b, azul);

    delay(300);
  }

}
