/*
  Blink

  Program by Dr. Vijay Gaikwad and Parth Gaikwad
  One LED is connected to D0 and Other LED is connected to D1.
  2 resistors of 200 ohms are separtely coonected to D0 and D1.
  
  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT); 
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D1, LOW); 
  delay(100);                       // wait for a second
  
  digitalWrite(D0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D1, HIGH);  
  delay(100);                       // wait for a second

  digitalWrite(D0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D1, LOW); 
  delay(100);                       // wait for a second
  
  digitalWrite(D0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D1, HIGH);  
  delay(100);                       // wait for a second

  digitalWrite(D0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D1, LOW); 
  delay(100);                       // wait for a second
  
  digitalWrite(D0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D1, HIGH);  
  delay(300);                       // wait for a second

  digitalWrite(D0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D1, LOW); 
  delay(100);                       // wait for a second
  
  digitalWrite(D0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D1, HIGH);  
  delay(100);                       // wait for a second

  digitalWrite(D0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D1, LOW); 
  delay(100);                       // wait for a second
  
  digitalWrite(D0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D1, HIGH);  
  delay(100);                       // wait for a second
}
