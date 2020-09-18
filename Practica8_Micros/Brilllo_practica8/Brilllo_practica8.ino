int ledPin = 11;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {

char incomingByte = Serial.read(); switch (incomingByte) {
case '0':
  analogWrite(ledPin, 0);
  break;
case '1':
  analogWrite(ledPin, 75);
  break;
case '2':
  analogWrite (ledPin, 150);
  break;
case '3': 
  analogWrite(ledPin, 210);
  break;
case '4': 
  analogWrite(ledPin, 255);
  break; 
 } 
}
