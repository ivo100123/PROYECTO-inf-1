#define MSG_LUZ "El nivel de luz actual es: "
#define MSG_TEMP " y la temperatura actual: "

const int PIN_LDR = A0;
const int PIN_TEMP = A1;

const int PIN_R = 0;
const int PIN_B = 1;
const int PIN_G = 2;


int valorLuz = 0;
int porcentajeLuz = 0;

int valorTemp = 0;
float voltaje = 0;
float temperatura = 0;

void setup() {
  Serial.begin(9600);

  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);
}

void loop() {
  
  valorLuz = analogRead(PIN_LDR);

  
  porcentajeLuz = map(valorLuz, 1023, 0, 0, 100);

  
  valorTemp = analogRead(PIN_TEMP);
  voltaje = valorTemp * 5.0 / 1023.0;
  temperatura = voltaje * 100.0; // pasamos el voltaje a temperatura

  
  Serial.print(MSG_LUZ);
  Serial.print(porcentajeLuz);
  Serial.print(MSG_TEMP);
  Serial.print(temperatura);
  Serial.println(" C");

  if (porcentajeLuz >= 30 && porcentajeLuz <= 70) {

    if (temperatura > 90) {
      digitalWrite(PIN_R, 1);
      digitalWrite(PIN_G, 0);
      digitalWrite(PIN_B, 0);

    } else if (temperatura < 18) {
      digitalWrite(PIN_R, 0);
      digitalWrite(PIN_G, 0);
      digitalWrite(PIN_B, 1);

    } else {
      digitalWrite(PIN_R, 0);
      digitalWrite(PIN_G, 1);
      digitalWrite(PIN_B, 0);
    }

  } 
  else 
  {
    digitalWrite(PIN_R, 0);
    digitalWrite(PIN_G, 0);
    digitalWrite(PIN_B, 0);
  }

  delay(500);
}