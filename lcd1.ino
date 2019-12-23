#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup(){


lcd.begin(16,2);
}

void loop(){
  
delay(1500);
lcd.clear();
lcd.print("Jewel Me");
delay(1500);

  
lcd.setCursor(5,1);
lcd.print("GO AWAY");
delay(1500);

  
  
}