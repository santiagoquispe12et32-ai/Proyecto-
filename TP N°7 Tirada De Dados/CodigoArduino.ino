#include <Adafruit_NeoPixel.h>
#define buzz 9
#define NEO 3 
#define NEO1 11
Adafruit_NeoPixel ring = Adafruit_NeoPixel(24, NEO, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ring1 = Adafruit_NeoPixel(24, NEO1, NEO_GRB + NEO_KHZ800);
#define boton 1
#define Length(v,t) (sizeof(v)/sizeof(t))
int num;
int num1;
int Todos[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
int Cero[] = {6, 12, 19, 20, 21, 22, 11, 17, 1, 2, 3, 4}; 
int Uno[] = {5, 11, 17, 6, 7, 8, 9, 10, 13, 20, 23};
int Dos[] = {1, 2, 5, 6, 9, 11, 12, 17, 22, 23};
int Tres[] = {1, 3, 6, 8, 10, 12, 14, 16, 18, 20, 22};
int Cuatro[] = {0, 1, 2, 3, 4, 5, 8, 14, 18, 19, 20};
int Cinco[] = {0, 6, 12, 18, 19, 20, 14, 8, 3, 4, 23, 17, 11};
int Seis[] = {0, 6, 12,  20, 21, 22, 17, 11, 3, 4, 8, 14, 19};

int* numeros[] ={Cero, Uno, Dos, Tres, Cuatro, Cinco, Seis};
int size[] = {Length(Cero, int),
              Length(Uno, int),
              Length(Dos, int),
              Length(Tres, int),
              Length(Cuatro, int),
              Length(Cinco, int),
              Length(Seis, int),
             };
void setup()
{
  pinMode(buzz, OUTPUT);
  pinMode(NEO, OUTPUT);
  pinMode(NEO1, OUTPUT);
  pinMode(boton, INPUT);
  randomSeed(analogRead(A0));
  randomSeed(analogRead(A1));
  ring.begin();
  ring.clear();
  ring.show();
  ring1.begin();
  ring1.clear();
  ring1.show();
}

void loop()
{
  if(digitalRead(boton) == HIGH)
  {
    for(int i = 0; i < 8; i++)
  {
      int x = 0;
      x = random(7);
      for(int j = 0; j < size[x]; j++)
      {
        ring.setPixelColor(numeros[x][j], 255, 0, 0, 255);
        ring1.setPixelColor(numeros[x][j], 255, 0, 0, 255);

      }  
      ring.show();
      ring1.show();
      delay(200);
      ring.clear();
      ring.show();
   	  ring1.clear();
      ring1.show();
      
  }
  ring.clear();
  ring.show();
  ring1.clear();
  ring1.show();
  int x = 0;
  x = random(7);
  for(int j = 0; j < size[x]; j++)
  {
    ring.setPixelColor(numeros[x][j], 255, 0, 0, 255);
  } 
  int y = 0;
  y = random(7);
  for(int j = 0; j < size[y]; j++)
  {
    ring1.setPixelColor(numeros[y][j], 255, 0, 0, 255);
  } 
  ring.show();
  ring1.show();
  if(x + y == 7)
  {
    digitalWrite(buzz, HIGH);
    delay(1500);
    digitalWrite(buzz, LOW);
    for(int y = 0; y < 4; y++)
    {
    	for(int j = 0; j < Length(Todos, int); j++)
    	{
     		ring1.setPixelColor(Todos[j], 255, 0, 0, 255);
     		ring.setPixelColor(Todos[j], 255, 0, 0, 255);
    	} 
      ring.show();
      ring1.show();
      delay(500);
      ring.clear();
      ring.show();
      ring1.clear();
      ring1.show();
      delay(500);
    } 
    
  }
  }
}