#include <LiquidCrystal.h>
#include <Servo.h> 

Servo servo1;
LiquidCrystal lcd(12,11,5,4,3,2);  

void setup()
{
  servo1.attach(9);
   lcd.begin(16,2);
  lcd.clear();
  lcd.print("STARTING IN");
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6,OUTPUT);
}


void loop(){ 
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
delay(0);
digitalWrite(13, OUTPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("5");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("  ");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, OUTPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("4");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("  ");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, OUTPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("3");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("  ");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, OUTPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("2");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("  ");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, OUTPUT);
lcd.setCursor(7,2);
lcd.print("1");
delay(500);
digitalWrite(13, INPUT);
digitalWrite(10, INPUT);
digitalWrite(8, INPUT);
digitalWrite(7, INPUT);
digitalWrite(6, INPUT);
lcd.setCursor(7,2);
lcd.print("  ");
delay(500);
lcd.setCursor(7,2);
lcd.print("0");
  int position;
  servo1.write(0);   
  delay(1000);        
  servo1.write(90);   
  delay(1000);         
  servo1.write(0);     
  delay(1000);
}

