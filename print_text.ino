//sketch created by Akshay Joseph
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{

	lcd.begin(16, 2);


	lcd.backlight();
	lcd.clear();
	lcd.setCursor(4,0);
	lcd.print("Haha");
}

void loop()
{
}
