#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);


void mensajeInicial() 
{
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Bienvenido");
}

void inicioJuego() 
{
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("juego iniciado");
}

void juegoTerminado() 
{
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("juego terminado.");
}

void puntos() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("puntos totales:");

  lcd.setCursor(0, 1);
  lcd.print(random(0, 101));
}

void setup() 
{
  lcd.begin(16, 2);
  randomSeed(analogRead(A0));
}

void loop() 
{
  mensajeInicial();
  delay(3000);

  inicioJuego();
  delay(3000);

  puntos();
  delay(3000);

  juegoTerminado();
  delay(3000);
}