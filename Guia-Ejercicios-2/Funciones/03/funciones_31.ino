#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void bienvenida() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("bienvenido");
}

void inicioJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("inicio de juego");
}

void finJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("fin del juego");
}

void puntuacion() {
  int puntos = random(1, 101);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("puntuacion:");
  lcd.setCursor(0, 1);
  lcd.print(puntos);
}

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  bienvenida();
  delay(2000);

  inicioJuego();
  delay(2000);

  puntuacion();
  delay(2000);

  finJuego();
  delay(2000);
}