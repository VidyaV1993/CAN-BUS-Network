int sensorValue;

void setup() {

  pinMode(8, OUTPUT);   // to power the LED
  Serial.begin(9600);   // serial monitor

}

void loop() {

  digitalWrite(8, HIGH);          // turn LED on
  delay(1000);                    // wait for 1 second
  digitalWrite(8, LOW);           // turn LED off
  //sensorValue = analogRead(A0);   // get the level from the pot
  Serial.println("TEST: LED Blink");    // print the level value
  delay(1000);                    // wait for 1 second
    
}
