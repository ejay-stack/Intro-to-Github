#include <Adafruit_LiquidCrystal.h>

// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);

}

void loop()
{
  lcd_1.setCursor(3, 0);
  lcd_1.print("hello world");
  delay(500); // Wait for 500 millisecond(s)
    lcd_1.setCursor(3, 1);

  lcd_1.print("sadas");
  delay(3000); // Wait for 500 millisecond(s)
  lcd_1.clear();
}