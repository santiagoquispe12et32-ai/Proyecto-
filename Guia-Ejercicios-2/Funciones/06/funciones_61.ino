void prenderPines(int pines[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    digitalWrite(pines[i], HIGH);
  }
}

int pines[] = {2, 3, 4, 5};
int cantidad = 4;

void setup() {
  for (int i = 0; i < cantidad; i++) {
    pinMode(pines[i], OUTPUT);
  }
}

void loop() {
  prenderPines(pines, cantidad);
}