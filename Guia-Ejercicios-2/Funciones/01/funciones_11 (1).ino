void melodia1() {
  tone(2, 262, 300); delay(300);
  tone(2, 294, 300); delay(300);
  tone(2, 330, 300); delay(300);
}

void melodia2() {
  tone(2, 330, 300); delay(300);
  tone(2, 294, 300); delay(300);
  tone(2, 262, 300); delay(300);
}

void melodia3() {
  tone(2, 262, 200); delay(200);
  tone(2, 330, 200); delay(200);
  tone(2, 392, 400); delay(400);
}

void setup() {
  pinMode(2, OUTPUT); 
}

void loop() {
  melodia1(); delay(1000);
  melodia2(); delay(1000);
  melodia3(); delay(1000);
}
