#define ROJO 11
#define AZUL 10
int patron1[] = { 1, 0, 0, 1, 1, 0, 1, 1};
int patron2[] = {0, 1, 0, 1, 0, 0, 1, 0};
int cantidad = 8;
void setup()
{
    pinMode(ROJO, OUTPUT);
  pinMode(AZUL, OUTPUT);
}

void loop()
{
  for (int i = 0; i < cantidad; i++)
  {
    if(patron1[i] == 1)
    {
   digitalWrite(ROJO, HIGH); 
    } else{
      digitalWrite(ROJO, LOW);
  }
    
     if(patron2[i] == 1)
    {
   digitalWrite(AZUL, HIGH); 
    } else{
      digitalWrite(AZUL, LOW);
  }
    delay(500);
 }
}
