#define trig 6
#define echo 5

float sensor() 
{
  digitalWrite(trig, 0);
  delayMicroseconds(2);

  digitalWrite(trig, 1);
  delayMicroseconds(10);

  digitalWrite(trig, 0);

  float duracion = pulseIn(echo, 1);
  float distancia = duracion / 57.6;

  return distancia;
}

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
}

void loop() 
{
  Serial.println(sensor());
  delay(500);
}
