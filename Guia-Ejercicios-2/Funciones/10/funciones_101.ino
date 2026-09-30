void configurarPines(int entradas[], int cantidadEntradas, int salidas[], int cantidadSalidas) {
  for (int i = 0; i < cantidadEntradas; i++) {
    pinMode(entradas[i], INPUT);
  }

  for (int i = 0; i < cantidadSalidas; i++) {
    pinMode(salidas[i], OUTPUT);
  }
}

int entradas[] = {2, 3};
int salidas[] = {8, 9};

void setup() {
  configurarPines(entradas, 2, salidas, 2);
}

void loop() {
}