#include <Adafruit_NeoPixel.h>

#include <Adafruit_LiquidCrystal.h>

#define flex A0
#define boton 2
 
 Adafruit_LiquidCrystal LCD(8, 7, 6, 5, 4, 3);

 Adafruit_NeoPixel strip(6, 11, NEO_GRB + NEO_KHZ800);

void setup()
{
  LCD.begin(0, 0);
  strip.begin();
  strip.show();
  pinMode(flex, INPUT);
  pinMode(boton,INPUT_PULLUP);
  
  Serial.begin(9600);
}

//Variables
bool sistemaEncendido = 0;
bool estadoBoton = digitalRead(boton);
bool estadoAnterior = 0;



//Cual color tiene que prenderse
//1 verde - 2 amarillo - 3 rojo (para el LCD)
int opcionColor = 0;

void loop()
{
  int flexMap = map( analogRead(flex),990,1017,180,0);

  Serial.println( flexMap );
 	//Lo convertimos en boton (que prende el sistema)
    estadoBoton = digitalRead(boton);

  if(estadoBoton == 0 && estadoAnterior == 1)
  {
    sistemaEncendido = !sistemaEncendido;
  }
  	estadoAnterior = estadoBoton;
  
 Serial.println(estadoBoton);
 if(sistemaEncendido == 1)
  {   
   
   	#ifdef tests
   	#Serial.print("Flex:");
  	#Serial.println(flexMap);
  	#Serial.print("Angulo:");
    #Serial.println(flexMap);
    #Serial.print("Led:");
    #Serial.println(LED);
    #Serial.print(""); //no sé como hacer esto tengo 3 minutos profeee
    #Serial.println(opcionColor)
   #endif

   //Ponemos la cantidad de flex
 	LCD.setCursor(0,0);
    LCD.print("F:");
    LCD.print(flexMap);
 
    
   	LCD.setCursor(6,10);
   	LCD.print("Color:");
   	LCD.print(opcionColor);
   
   
   if(flexMap < 45) //Encienden solo los verdes
   {
    strip.clear();
    strip.setPixelColor(0, strip.Color(0,255,0));
    strip.show();
    delay(500);
    
    strip.setPixelColor(1, strip.Color(0,255,0));
    strip.show();
    delay(500);
    opcionColor = 1; //Se pone el 1 (verde) para mostrar en LCD
     
   }
   else if(flexMap >= 45 && flexMap < 90) //Encienden verdes y amarillos
   {     
    strip.clear();
    strip.setPixelColor(0, strip.Color(255,255,0));
    strip.show();
    delay(500);
    
    
    strip.setPixelColor(1, strip.Color(255,255,0));
    strip.show();
    delay(500);
     
     
    strip.setPixelColor(2, strip.Color(255,255,0));
    strip.show();
    delay(500);
     
   
    strip.setPixelColor(3, strip.Color(255,255,0));
    strip.show();
    delay(500);
     
    opcionColor = 2; //Se pone el 2 (amarillo) para mostrar en LCD
     
   }
   else if(flexMap >= 90) //90 - 180 encienden todos
   {
     strip.clear();
    strip.setPixelColor(0, strip.Color(255,0,0));
    strip.show();
    delay(500);
    
   
    strip.setPixelColor(1, strip.Color(255,0,0));
    strip.show();
    delay(500);
     
     
    strip.setPixelColor(2, strip.Color(255,0,0));
    strip.show();
    delay(500);
     
   
    strip.setPixelColor(3, strip.Color(255,0,0));
    strip.show();
    delay(500);
     
   
    strip.setPixelColor(4, strip.Color(255,0,0));
    strip.show();
    delay(500);
     
   
    strip.setPixelColor(5, strip.Color(255,0,0));
    strip.show();
    delay(500);
     
    opcionColor = 3; //Se pone el 1 (rojo) para mostrar en LCD
     
   }
   
   
 }
  //Si el sitema no esta prendido se apaga todo
  else if(sistemaEncendido == 0)
   {
     LCD.clear();
    
    strip.clear();
    strip.setPixelColor(0, strip.Color(0,0,0));
    strip.show();
    
   
    strip.setPixelColor(1, strip.Color(0,0,0));
    strip.show();
     
     
    strip.setPixelColor(2, strip.Color(0,0,0));
    strip.show();


    strip.setPixelColor(3, strip.Color(0,0,0));
    strip.show();
    
     
   
    strip.setPixelColor(4, strip.Color(0,0,0));
    strip.show();
   
     
   
    strip.setPixelColor(5, strip.Color(0,0,0));
    strip.show();
    
   }

  } 
 