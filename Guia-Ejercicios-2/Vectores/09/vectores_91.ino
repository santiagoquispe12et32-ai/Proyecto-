#define VERDE 3
#define AZUL 5
#define ROJO 6

int L1[] = {122, 234, 21};
int L2[] = {33, 53, 155};
int L3[] = {200, 255, 12};

int* colores[] = {L1, L2, L3};
int cantidad = 3;

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < cantidad; i++) {
    analogWrite(ROJO, colores[i][0]);
    analogWrite(VERDE, colores[i][1]);
    analogWrite(AZUL, colores[i][2]);

    Serial.print("Color ");
    Serial.print(i+1);
    Serial.print(": R=");
    Serial.print(colores[i][0]);
    Serial.print(" G=");
    Serial.print(colores[i][1]);
    Serial.print(" B=");
    Serial.println(colores[i][2]);

    delay(2000); 
  }
}
