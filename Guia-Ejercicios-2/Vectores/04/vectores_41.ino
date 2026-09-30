#define LED 13
int patron[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
int cantidad = 8;
void setup()
{
  pinMode(LED, OUTPUT);
}


void loop()
{
  for (int i = 0; i < cantidad; i++)
  {
    if(patron[i] == 1)
    {
   digitalWrite(LED, HIGH); 
    } else{
      digitalWrite(LED, LOW);
  }
    delay(500);
 }
}
