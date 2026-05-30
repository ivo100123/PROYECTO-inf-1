#include <LiquidCrystal.h>

#define PIR 3
#define ECHO 5
#define TRIG 6
#define RGB_R 7
#define RGB_G 2
#define RGB_B 4
#define buzzer A1
#define ldr A2
#define tmp A0
 
              //  rs  E db4 db5 db6 db7 
              //   8  9  10  11  12  13
// LiquidCrystal (rs, e, d4, d5, d6, d7)

LiquidCrystal LCD(8, 9, 10, 11, 12, 13);
  
void setup()
{
  LCD.begin(16, 2);
  
  pinMode(PIR, INPUT);
  pinMode(ECHO, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(RGB_R, OUTPUT);
  pinMode(RGB_G, OUTPUT);
  pinMode(RGB_B, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(tmp, INPUT);
}

void loop()
{
  digitalWrite(RGB_R, LOW);
  digitalWrite(RGB_G, LOW);
  digitalWrite(RGB_B, LOW);
  analogWrite(buzzer, 0);
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2); 
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  float light = analogRead(ldr); //1-310
  int luz = map (light , 1 , 310 , 0 , 100 );
  
  float tiempo =  pulseIn(ECHO, HIGH);
  float dist = tiempo / 57.6;
  
  // Sensor de distancia
  
  if (dist < 100)
  {
    digitalWrite(RGB_R, HIGH);
    analogWrite(buzzer, 180);
  }
  
  // Sensor de movimiento
  
  bool mov = digitalRead(PIR);
  if (mov == 1 && luz >= 20)
  {
    digitalWrite(RGB_R, HIGH);
    digitalWrite(RGB_G, HIGH);
    analogWrite(buzzer, 140);
  }
  
  // Sensor de temperatura
  
  float temperatura = (analogRead(tmp) * 5.0/1024)*100-50;
  
  if (temperatura > 39)
  {
    digitalWrite(RGB_R, HIGH);
    analogWrite(buzzer, 180);
  }
  
  // Sensor de luz
  
  if (luz < 20 && mov == 1 || luz < 20 && mov == 1)
  {
    digitalWrite(RGB_R, HIGH);
    analogWrite(buzzer, 180);
  }
  
  // Mostrar en pantalla
  
  LCD.setCursor(0,0);
  LCD.print("D:");
  LCD.print(dist);
  LCD.print(" ");
  
  LCD.setCursor(0,1);
  LCD.print("M:");
  LCD.print(mov == 1 ? "Si" : "No");
  
  LCD.setCursor(9,0);
  LCD.print("L:");
  LCD.print(luz);
  LCD.print("    ");
  
  LCD.setCursor(5,1);
  LCD.print("T:");
  LCD.print(temperatura);
  LCD.print("     ");
}