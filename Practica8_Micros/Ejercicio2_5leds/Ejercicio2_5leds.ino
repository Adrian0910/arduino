int ledPin0 = 11;
int ledPin1 = 10;
int ledPin2 = 9;
int ledPin3 = 6;
int ledPin4 = 5;

void setup() {
Serial.begin(9600);
pinMode(ledPin0, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
}

void loop() {

char incomingByte = Serial.read(); switch (incomingByte) {
case '0':
  digitalWrite(ledPin0, HIGH);
  break;
case '1':
  digitalWrite(ledPin1, HIGH);
  break;
case '2':
  digitalWrite(ledPin2, HIGH);
  break;
case '3': 
  digitalWrite(ledPin3, HIGH);
  break;
case '4': 
  digitalWrite(ledPin4, HIGH);
  break; 
  case '5': 
  digitalWrite(ledPin0, LOW);
  break; 
  case '6': 
  digitalWrite(ledPin1, LOW);
  break; 
  case '7': 
  digitalWrite(ledPin2, LOW);
  break; 
  case '8': 
  digitalWrite(ledPin3, LOW);
  break;
  case '9': 
  digitalWrite(ledPin4, LOW);
  break;  
 } 
}
