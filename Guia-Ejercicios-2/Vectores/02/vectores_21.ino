int numeros[] = {10, 4, 2};
int cantidad = 3;
int aux = 0;
void setup()
{
  Serial.begin(9600);
  
for(int i=0; i<cantidad-1; i++)
{
 for(int j=i+1; j<3; j++)
 {
   if(numeros[i] > numeros[j])
   {
     aux = numeros[i];
     numeros[i] = numeros[j];
     numeros[j] = aux;
   }
 }
}

 
}

void loop()
{
 Serial.println("Vector ordenado de Menor a Mayor: ");
  for(int i=0; i<cantidad; i++)
  {
   Serial.println(numeros[i]); 
  }
}
