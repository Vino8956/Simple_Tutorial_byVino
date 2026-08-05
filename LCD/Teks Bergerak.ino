//CODE BY VINO8956
//Menampilkan teks yang bergerak seperti sedang mengetik
//Terimakasih sudah visit :)

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void typeWrite(int row, String text, int speedDelay) {
  lcd.setCursor(0, row);
  for (int i = 0; i < text.length(); i++) {
    lcd.print(text[i]);
    delay(speedDelay);
  }
}

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  typeWrite(0, "Tunggu...", 150);
  typeWrite(1, "Terimakasih!", 100);
  delay(2000);
  
  lcd.clear();
  delay(500);
}
