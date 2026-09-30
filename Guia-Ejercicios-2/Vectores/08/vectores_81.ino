#define LED 2
#define boton 7

int secuencia[5];
int pos = 0;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(boton, INPUT);
    Serial.begin(9600);
}
void loop()
{
   if (pos < 5)
   {
    digitalWrite(LED, HIGH);  
    delay(2000);        
    digitalWrite(LED, LOW);
   
   int estadoBoton = digitalRead(boton);
    secuencia[pos] = estadoBoton; 
    pos++;
     
     delay(500);
     } else
   {
    Serial.println("Secuencia guardada:");
    for (int i = 0; i < 5; i++) {
      Serial.println(secuencia[i]);
    }
    pos = 0;
    for (int i = 0; i < 5; i++) 
    {
      secuencia[i] = 0;
    }
     
      Serial.println("Vector reiniciado, listo para repetir.");
    delay(3000);
   }
}
