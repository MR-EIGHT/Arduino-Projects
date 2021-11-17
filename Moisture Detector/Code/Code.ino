#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); 
 
int waterValue = 0;  // holds the value
int sensorPin = A3; // sensor pin used
  
void setup() { 
  lcd.begin(16, 2); 
  
  lcd.print("  WATER LEVEL : "); 
} 
  
void loop() { 
  lcd.setCursor(0, 1);   //column 0, line 1
  waterValue = analogRead(sensorPin); 

  // detect water
//   if (waterValue<=100){ lcd.println("    No Water    "); } 
//   else { lcd.println(" Water Detected "); }

   
  if (waterValue<=100){ lcd.println("     Empty    "); } 
  else if (waterValue>100 && waterValue<=400) lcd.println("       Low      "); 
  else if (waterValue>400 && waterValue<=700) lcd.println("     Medium     ");  
  else if (waterValue>700) lcd.println("      High      "); 
  delay(1000); 
}
