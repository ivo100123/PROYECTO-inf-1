#include <Adafruit_GFX.h>

#include <Adafruit_GrayOLED.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <SPI.h>

#include <Adafruit_ST7735.h>
#include <Adafruit_ST7789.h>

#define sck 13 //Señal de reloj para sincronizar el bus SPI
#define sda 11 //Entrada de datos del bus SPI hacia la pantalla.
#define a0 9 // Indica a la pantalla si lo que estás enviando es un comando de configuración o datos de color para los píxeles.
#define reset 8 //  Pin físico para reiniciar el controlador de la pantalla.
#define cs 10 //Activa o desactiva la comunicación de la pantalla en el bus SPI.
//#define bzr 5
//#define joystick 6

// Instalar librerias AdafruitGFX, Adafruit ST7735 y Adafruit_ST7789

//inicializamos la pantalla

// Constructor por software SPI: Adafruit_ST7735(CS, DC, MOSI(SDA), SCK, RST)
Adafruit_ST7735 tft = Adafruit_ST7735(cs, a0, reset);


//uint8_t: Asegura que cada fila ocupe exactamente 1 byte físico de memoria
const uint8_t serpienteInicial[] = {
  B01111100,
  B01111100, 
  B01111100, 
  B01111100,   
  B01111100,  
  B01111100,    
  B01111100,
  B01111100,
  B01111100,
  B01111100,
  B01111100,
  B01111100,
};

void setup() 
{

  // Use this initializer if you're using a 1.8" TFT
  tft.initR(INITR_BLACKTAB);   // En teoria estos ya hacen todos los pinMode de la pantalla
 // pinMode(bzr,OUTPUT);
 // pinMode(joystick,INPUT)

  // Use this initializer (uncomment) if you're using a 1.44" TFT (depende del tamaño asi que por las dudas lo dejo)
  //tft.initR(INITR_144GREENTAB);   // initialize a ST7735S chip, black tab

  tft.setCursor(0,0);
  tft.setTextColor(ST7735_WHITE);
  tft.fillScreen(ST7735_BLACK); //ponemos el fondo negro
 // tft.print("texto de prueba");



   tft.drawBitmap(60, 40, serpienteInicial, 8, 7, ST7735_YELLOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
