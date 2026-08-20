#define PIN_TEMP A0      
#define PIN_MOV 2        
#define PIN_MOTOR 9      
#define PIN_LAMPARA 8    

void setup() {
  pinMode(PIN_TEMP, INPUT);
  pinMode(PIN_MOV, INPUT);
  pinMode(PIN_MOTOR, OUTPUT);
  pinMode(PIN_LAMPARA, OUTPUT);
}

void loop() {
  int lecturaADC = analogRead(PIN_TEMP);
  float temperatura = (lecturaADC * 5.0 / 1023.0) * 100.0;

  bool presencia = digitalRead(PIN_MOV);

  int pwmVentilador = 0;
  
  bool estadoLampara = presencia;

  if (temperatura >= 50.0) {
    pwmVentilador = 255; 
  } 
  else if (presencia) {
    if (temperatura <= 15.0) {
      pwmVentilador = 50;
    } else if (temperatura <= 30.0) {
      pwmVentilador = map((int)temperatura, 15, 30, 50, 150);
    } else {
      pwmVentilador = map((int)temperatura, 30, 50, 150, 255);
    }
  } 
  else {
    pwmVentilador = 0;
  }

  analogWrite(PIN_MOTOR, pwmVentilador);
  digitalWrite(PIN_LAMPARA, estadoLampara);

  delay(500); 
}
