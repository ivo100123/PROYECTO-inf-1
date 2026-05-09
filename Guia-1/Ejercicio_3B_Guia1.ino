#define ledR 5
#define ledB 3
#define ledG 6
#define pot A0
#define btn 7

bool estadoBoton;
bool estadoAnterior = 1;
bool ledEncendido = false;
int intensidad;

int valorPot;

void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop()
{
  estadoBoton = digitalRead(btn);

  if (estadoBoton == 0 && estadoAnterior == 1)
  {
    ledEncendido = !ledEncendido;
    delay(150);
  }

  estadoAnterior = estadoBoton;

  valorPot = analogRead(pot);

  if (ledEncendido == 1)
  {
    if (valorPot <= 341)
    {
      intensidad = map(valorPot, 0, 341, 30, 255);
      analogWrite(ledR, intensidad);
      analogWrite(ledG, 0);
      analogWrite(ledB, 0);
    }
    else if (valorPot <= 682)
    {
      intensidad = map(valorPot, 342, 682, 30, 255);
      analogWrite(ledR, 0);
      analogWrite(ledG, intensidad);
      analogWrite(ledB, 0);
    }
    else
    {
      intensidad = map(valorPot, 683, 1023, 30, 255);
      analogWrite(ledR, 0);
      analogWrite(ledG, 0);
      analogWrite(ledB, intensidad);
    }
  }
  else
  {
    analogWrite(ledR, 0);
    analogWrite(ledG, 0);
    analogWrite(ledB, 0);
  }
}