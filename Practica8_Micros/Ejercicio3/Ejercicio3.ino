int ledPin0 = 11;
int ledPin1 = 10;
int ledPin2 = 9;

void setup() {
Serial.begin(9600);+++++++++++
pinMode(ledPin0, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

void loop() {

char incomingByte = Serial.read(); switch (incomingByte) {
case '0':
  analogWrite(ledPin0, 0);
  break;
case '1':
  analogWrite(ledPin0, 75);
  break;
case '2':
  analogWrite (ledPin0, 150);
  break;
case '3': 
  analogWrite(ledPin0, 210);
  break;
case '4': 
  analogWrite(ledPin0, 255);
  break; 
  case '5': 
  //////////////////////////////////////////led1
  analogWrite(ledPin1, 0);
  break; 
  case '6': 
  analogWrite(ledPin1, 75);
  break; 
  case '7': 
  analogWrite(ledPin1, 150);
  break; 
  case '8': 
  analogWrite(ledPin1, 255);
  break; 
  //////////////////////////////////////////led2
  case '9': 
  analogWrite(ledPin2, 0);
  break; 
  case 'a': 
  analogWrite(ledPin2, 75);
  break; 
  case 'b': 
  analogWrite(ledPin2, 150);
  break; 
  case 'c': 
  analogWrite(ledPin2, 255);
  break; 
 } 
}
