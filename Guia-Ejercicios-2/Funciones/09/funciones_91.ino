void llenarVector(int numeros[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    numeros[i] = random(0, 11) * 10;
  }
}

int numeros[5];

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

  llenarVector(numeros, 5);

  for (int i = 0; i < 5; i++) {
    Serial.println(numeros[i]);
  }
}

void loop() {
}