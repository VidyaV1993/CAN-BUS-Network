#include <LiquidCrystal.h>

//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);    // LCD setup

void setup() {

  pinMode(8, INPUT);    // to read the pushbutton
  Serial.begin(9600);   // serial monitor

//  lcd.begin(20, 4);  
//  lcd.print("hello world!");
  Serial.println("hello world!");
  
}

void loop() {

  int buttonState = digitalRead(8);   // read the pushbutton
  Serial.println(buttonState);   
 //lcd.print(buttonState);                        // print 0 or 1 on the serial monitor
 //lcd.print("hello world!");
  delay(1000);                        // wait for 1 second
  
}
