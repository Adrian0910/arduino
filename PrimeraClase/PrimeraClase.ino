int pin13= 13, pin12 = 12, pin11 = 11;
/*
13 12 11
0 0 0 *
0 0 1 *
0 1 0 *
0 1 1 *

1 0 0 
1 0 1
1 1 0 
1 1 1
*/

void setup() {
  pinMode(pin13, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin11, OUTPUT);
}

void loop() {
  delay(2000);
  digitalWrite(pin13, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pin11, LOW);
  delay(2000);
  digitalWrite(pin13, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pin11, HIGH);
  delay(2000);
  digitalWrite(pin13, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin11, LOW);
  delay(2000);
  digitalWrite(pin13, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin11, HIGH);
  delay(2000);
 
  digitalWrite(pin13, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pin11, LOW);
  delay(2000);
  digitalWrite(pin13, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pin11, HIGH);
  delay(2000);
  digitalWrite(pin13, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin11, LOW);
  delay(2000);
  digitalWrite(pin13, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin11, HIGH);
  
  
}
