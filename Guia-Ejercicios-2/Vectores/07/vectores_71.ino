#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6

int leds[] = {2,3,4,5, 6};
int cantidad = 5;
void setup()
{
  for (int i = 0;  i<cantidad;  i++) 
  {
    pinMode(leds[i], OUTPUT);
  }  
  
}
void loop()
{
  for (int i = 0; i < cantidad; i++)
  {
    digitalWrite(leds[i], HIGH);
    delay(500);
    digitalWrite(leds[i], LOW);
  }
}
