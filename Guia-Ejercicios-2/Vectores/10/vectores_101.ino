#define BUZZER 2

int numeros[10]; 
int cantidad = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);

  randomSeed(analogRead(A0));

  for (int i = 0; i < cantidad; i++)
  {
    numeros[i] = random(1, 11); 
  }

  Serial.println("Vector generado:");
  for (int i = 0; i < cantidad; i++) 
  {
    Serial.println(numeros[i]);

    if (numeros[i] == 5)
    {
      digitalWrite(BUZZER, HIGH);
      delay(400);             
    }
  }
}

void loop()
{
}
