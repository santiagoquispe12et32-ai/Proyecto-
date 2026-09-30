#define LED 3
#define PIR 2

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  int mov = detectarMovimiento();
  
  if (mov == 1)
  {
    digitalWrite(LED, HIGH);   
    Serial.println("Movimiento detectado");
  } else 
  {
    digitalWrite(LED, LOW);    
    Serial.println("Zona tranquila");
  }

  delay(500);
}

int detectarMovimiento() {
  return digitalRead(PIR);
}
