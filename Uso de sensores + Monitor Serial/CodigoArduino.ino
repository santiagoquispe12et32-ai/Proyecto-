int sensort = A0;
int rojo = 6;
int verde = 5;
int azul = 10;
int sensor = A1;
void setup()
{
  pinMode(sensort, INPUT);
  Serial.begin(9800);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop()
{
  //temperatura
  float tension = analogRead( sensort );
  tension = tension * 5.0;
  tension = tension / 1024.0;
  
  float temperatura = (tension - 0.5) * 100;
  
  
  //luz
  int luzingresa = analogRead(sensor);
  int porcentajedeluz = map(luzingresa, 1,310,100,0);
  
  //mostrar serial
  delay(1000);
  Serial.print("El nivel de luz actual es: ");
  Serial.print(porcentajedeluz);
  Serial.println("%");
  Serial.print("La temperatura actual: ");
  Serial.print(round(temperatura));
  //profe, pone un caracter extraño
  Serial.println("c°");
  

 
  //rgbs
  if (porcentajedeluz >= 30 && porcentajedeluz <= 70)
  {
    if (temperatura < 18 )
    {
      analogWrite(azul, 255);
      analogWrite(verde, 0);
      analogWrite(rojo, 0);
    }
    else if (temperatura >= 18 && temperatura <= 90)
    {
      analogWrite(rojo, 0);
      analogWrite(verde, 255);
      analogWrite(azul, 0);
    }
    else if (temperatura > 90)
    {
      analogWrite(rojo, 255);
      analogWrite(verde, 0);
      analogWrite(azul, 0);
    }
  }
  else
  {
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
  }
}