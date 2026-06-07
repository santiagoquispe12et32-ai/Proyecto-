#include <Adafruit_NeoPixel.h>

#define PIN 3
#define NUMPIXELS 12
#define POTE A1
#define PUL 8
//definiciones
int estado = 0;
int estadoultimo = HIGH;
int estadoPasos = 0;
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//funcion para hacer mas practica el codeo
void colorard(int set, int set2,int r,int g,int b,int r1,int g2,int b3 )
{
  int lecturaPot = analogRead(POTE); 
  int velocidad = map(lecturaPot, 0, 1023, 1000, 50);
  delay(velocidad);
  pixels.clear();
  pixels.setPixelColor(set, pixels.Color(r1, g2, b3));
  pixels.setPixelColor(set2, pixels.Color(r, g, b));
  pixels.show();
}
//dejo esta funcion aqui ya que al agregarle ele extra del potenciador ya no modifique la velocidad del barrido
void colorard1(int set, int set2,int r,int g,int b,int r1,int g2,int b3 )
{
  int lecturaPot = analogRead(POTE); 
  int velocidad = map(lecturaPot, 1023, 0, 50, 1000);
  delay(velocidad);
  pixels.clear();
  pixels.setPixelColor(set, pixels.Color(r1, g2, b3));
  pixels.setPixelColor(set2, pixels.Color(r, g, b));
  pixels.show();
}



void setup()
{
  pixels.begin();
  pixels.clear();
  pixels.show();
  pinMode(POTE, INPUT); 
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  pinMode(PUL, INPUT_PULLUP); 
}


void loop()
{
  //leer potenciador y ajustarlo
  int lecturaPot = analogRead(POTE); 
  int velocidad = map(lecturaPot, 1023, 0, 50, 1000);
  
  //Analizar el boton digitalmente
  int botonprendio = digitalRead(PUL);
  if (botonprendio == LOW && estadoultimo == HIGH)
  {
    	estado++;
    	if (estado > 3) 
    	{ 
      	estado = 1; 
    	}
    
    	pixels.clear();
    	pixels.show();
    	delay(200);
    	int estadoPasos = 0; 
  }
    	estadoultimo = botonprendio;
    	
   		if (estado == 1) 
    	{
    		colorard(0,1,   0,0,0, 255,0,0 ); 
    		colorard(1,2,   0,0,0, 0,255,0 );  
    		colorard(2,3,   0,0,0, 0,0,255 ); 
    		colorard(3,4,   0,0,0, 255,255,0 );
    		colorard(4,5,   0,0,0, 255,0,255 );
    		colorard(5,6,   0,0,0, 117,20,200 );
    		colorard(6,7,   0,0,0, 200,130,10 );
    		colorard(7,8,   0,0,0, 190,10,150 ); 
    		colorard(8,9,   0,0,0, 0,150,150 ); 
    		colorard(9,10,  0,0,0, 255,115,0 ); 
    		colorard(10,11, 0,0,0, 180,29,59 ); 
    		colorard(11,0,  0,0,0, 41,166,87 );

    	}
  		
  	
  		if (estado == 2) 
  		{
    
    		colorard1(0,1,   0,0,0, 255,0,0 ); 
    		colorard1(1,2,   0,0,0, 255,0,0 );
    		colorard1(2,3,   0,0,0, 255,0,0 );
    		colorard1(3,4,   0,0,0, 255,0,0 );
    		colorard1(4,5,   0,0,0, 255,0,0 );
    		colorard1(5,6,   0,0,0, 255,0,0 );
    		colorard1(6,7,   0,0,0, 255,0,0 );
    		colorard1(7,8,   0,0,0, 255,0,0 );
    		colorard1(8,9,   0,0,0, 255,0,0 );
    		colorard1(9,10,  0,0,0, 255,0,0 );
    		colorard1(10,11, 0,0,0, 255,0,0 );
    		colorard1(11,0,  0,0,0, 255,0,0 ); 
    
    		
    		colorard1(11,10,  0,0,0, 255,0,0 );
    		colorard1(10,9,   0,0,0, 255,0,0 );
    		colorard1(9,8,    0,0,0, 255,0,0 );
    		colorard1(8,7,    0,0,0, 255,0,0 );
    		colorard1(7,6,    0,0,0, 255,0,0 );
    		colorard1(6,5,    0,0,0, 255,0,0 );
    		colorard1(5,4,    0,0,0, 255,0,0 );
    		colorard1(4,3,    0,0,0, 255,0,0 );
    		colorard1(3,2,    0,0,0, 255,0,0 );
    		colorard1(2,1,    0,0,0, 255,0,0 );
    		colorard1(1,0,    0,0,0, 255,0,0 );
  		}
  
 
  if (estado == 3) 
  {
    if (estadoPasos == 0) 
    {
      uint32_t colorAleatorioPares = pixels.Color(random(0, 256), random(0, 256), random(0, 256));
      pixels.clear();
      pixels.setPixelColor(0,  colorAleatorioPares);
      pixels.setPixelColor(2,  colorAleatorioPares);
      pixels.setPixelColor(4,  colorAleatorioPares);
      pixels.setPixelColor(6,  colorAleatorioPares);
      pixels.setPixelColor(8,  colorAleatorioPares);
      pixels.setPixelColor(10, colorAleatorioPares);
      pixels.show();
      
      estadoPasos = 1; 
      delay(velocidad); 
    }
  } 
   if (estadoPasos == 1) 
   {
      pixels.clear();
      pixels.show();
      
      estadoPasos = 2; 
      delay(velocidad);      
    } 
    else if (estadoPasos == 2) 
    {
      uint32_t colorAleatorioImpares = pixels.Color(random(0, 256), random(0, 256), random(0, 256)); 
      pixels.clear();
      pixels.setPixelColor(1,  colorAleatorioImpares);
      pixels.setPixelColor(3,  colorAleatorioImpares);
      pixels.setPixelColor(5,  colorAleatorioImpares);
      pixels.setPixelColor(7,  colorAleatorioImpares);
      pixels.setPixelColor(9,  colorAleatorioImpares);
      pixels.setPixelColor(11, colorAleatorioImpares);
      pixels.show();
      
      estadoPasos = 3; 
      delay(velocidad);      
    } 
    else if (estadoPasos == 3) 
    {
      pixels.clear();
      pixels.show();
      
      estadoPasos = 0;      
      delay(velocidad); 
    }

 }
    