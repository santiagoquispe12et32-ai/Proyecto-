float numeros[] = {5.4 , 5.39 , 5.38 , 5.31 , 5.21 , 5.03 , 4.45 , 3.95 , 2.6 , 1.49};
int cantidad = 10;
float mayor = -99999999;
void setup()
{
  Serial.begin(9600);
  
for(int i=0; i<cantidad; i++)
{
 if(numeros[i] > mayor)
 {
  mayor = numeros[i]; 
 }
}


}

void loop()
{
  Serial.print("El Numero Mayor es: ");
  Serial.println(mayor);
  
}
