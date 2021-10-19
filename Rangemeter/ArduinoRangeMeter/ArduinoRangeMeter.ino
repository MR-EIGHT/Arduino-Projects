#include <LiquidCrystal.h>  

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);    //LCD :  (rs, enable, d4, d5, d6, d7)


const int trigPin = 12; // Trigger Ultrasonic Sensor
const int echoPin = 11; // Echo Ultrasonic Sensor

void setup() 
{

pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);

lcd.begin(16,2);                                                   
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

lcd.setCursor(0,1);



}

void loop()
{
  long duration, cm;
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = ConvertMicrosecondsToCentimeters(duration);
  
lcd.setCursor(0,0);                                                 
lcd.print("");
delay(10);
lcd.setCursor(0,1);
lcd.print("Distance:");
lcd.print(cm);
lcd.print("cm");
delay(100);

if(cm >=100){
    digitalWrite(A0,LOW);
    digitalWrite(A1,HIGH);
     delay(100);

  }
  else if(cm<100){
    digitalWrite(A0,HIGH);
    digitalWrite(A1,LOW);
    delay(100);
  }
}


long ConvertMicrosecondsToCentimeters(long microseconds)
{
   return microseconds / 29 / 2;
}
