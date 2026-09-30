int lanzarDado(int lados) {
  int resultado = random(1, lados + 1);

  return resultado;
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  int resultado = lanzarDado(6);

  Serial.println(resultado);

  delay(1000);
}