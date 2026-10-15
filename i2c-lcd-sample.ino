//C++ Code
//Developed By Tanvir
//https://github.com/TanvirCodeStorm
//Please visit our website https://hydrogengo.github.io

//==========================================//

//Including Libraries
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); 

void setup() {
  lcd.init();  // Initializing the lcd
  lcd.backlight();
}


void loop() {
  //Loading Effect
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Loading");
  delay(200);
  lcd.setCursor(7, 0);
  lcd.print(".");
  delay(200);
  lcd.setCursor(8, 0);
  lcd.print(".");
  delay(200);
  lcd.setCursor(9, 0);
  lcd.print(".");
  delay(200);
  lcd.setCursor(10, 0);
  lcd.print(".");
  delay(200); 
  lcd.setCursor(11, 0);
  lcd.print(".");
  delay(200);
  lcd.setCursor(12, 0);
  lcd.print(".");
  delay(200);
  lcd.setCursor(13, 0);
  lcd.print(".");
  delay(200);
  lcd.setCursor(14, 0);
  lcd.print(".");
  delay(200);
  lcd.setCursor(15, 0);
  lcd.print(".");
  delay(2000);
  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("Done!");
  delay(1000);
  lcd.clear();
  //Displaying Your Name
  lcd.setCursor(4, 0);
  lcd.print("Welcome!");
  lcd.setCursor(5, 1);
  lcd.print("Tanvir");
  delay(5000);
  lcd.clear();
  //Displaying Your Social Profile (For example, GitHub)
  lcd.setCursor(4, 0);
  lcd.print("GitHub");
  lcd.setCursor(2, 1);
  lcd.print("TanvirCodex");
  delay(3000);
  lcd.clear();
  //Displaying Your Website (For example, HydrogenGo)
  lcd.setCursor(3, 0);
  lcd.print("HydrogenGo");
  delay(20000);

}
