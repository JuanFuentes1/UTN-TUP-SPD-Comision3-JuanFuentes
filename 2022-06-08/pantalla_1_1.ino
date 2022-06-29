// Liberia para LCD
#include <LiquidCrystal.h>
// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
// Inicializamos LCD
lcd.begin(16, 2);
//
lcd.print("Iniciando");
// Indicamos Linea en LCD
lcd.setCursor(0, 1);
lcd.print("Sistema");
delay(1000);
// Limpiamos LCD
lcd.clear();
delay(1000);
lcd.print("Iniciando");
lcd.setCursor(0, 1);
lcd.print("Sistema");
delay(1000);
lcd.clear();
}
void loop() {
lcd.setCursor(0, 0);
lcd.print("Insertar");
lcd.setCursor(0, 1);
lcd.print("tarjeta");
delay(1000);
}