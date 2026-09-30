bool esMultiplo(int numero, int multiplo) {
  if (numero % multiplo == 0) {
    return true;
  } else {
    return false;
  }
}

void setup() {
  Serial.begin(9600);

  if (esMultiplo(20, 2)) {
    Serial.println("es multiplo");
  } else {
    Serial.println("no es multiplo");
  }
}

void loop() {
}