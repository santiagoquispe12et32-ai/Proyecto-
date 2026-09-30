int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int suma = 0;
int cantidad = 10;
void setup()
{
  Serial.begin(9600);
  
  for(int i=0;  i<cantidad; i++ )
  {
    suma += numeros[i];
  }

}

void loop()
{
  float media = suma / cantidad;
  Serial.print("La media del array es: ");
  Serial.println(media);
}
