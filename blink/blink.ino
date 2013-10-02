int pin = 13;

void setup() {
  // assumes the LED is connected to pin 13 on the arduino uno
  pinMode(pin, OUTPUT);     
}

void loop() {
  digitalWrite(pin, HIGH);  // turn the LED on
  delay(3000);              // wait for a second
  digitalWrite(pin, LOW);   // turn the LED off
  delay(1000);              // wait for a second
}
