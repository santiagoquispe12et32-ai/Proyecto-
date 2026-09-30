
int numeros[] = { 2, 6, 10, 11};
int cantidad = 4;
void setup()
{
  Serial.begin(9600);
  
  for(int i = 0;  i<cantidad; i++)
  {
    Serial.print("Multiplos de ");
    Serial.println(numeros[i]);
     for (int j = 1; j <= 5; j++)
     {
      int multiplo = numeros[i] * j;
      Serial.println(multiplo);
  }
    Serial.println("-----");
}
}

void loop()
{
}
