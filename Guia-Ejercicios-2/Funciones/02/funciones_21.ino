int distancia() {
  digitalWrite(9, LOW);
  delayMicroseconds(2);

  digitalWrite(9, HIGH);
  delayMicroseconds(10);
  digitalWrite(9, LOW);

  int tiempo = pulseIn(10, HIGH);

  int distancia = tiempo / 58;

  return distancia;
}

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);

  Serial.begin(9600);
}

void loop() {
  int d = distancia();

  Serial.println(d);

  delay(100);
}