void ordenar(int numeros[], int cantidad) {
  for (int i = 0; i < cantidad - 1; i++) {
    for (int j = i + 1; j < cantidad; j++) {
      if (numeros[i] < numeros[j]) {
        int aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
      }
    }
  }
}

int numeros[] = {20, 5, 80, 40, 10};
int cantidad = 5;

void setup() {
  Serial.begin(9600);

  ordenar(numeros, cantidad);

  for (int i = 0; i < cantidad; i++) {
    Serial.println(numeros[i]);
  }
}

void loop() {
}