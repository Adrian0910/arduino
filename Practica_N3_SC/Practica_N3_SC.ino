int potPin = A0;
int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int val;
 
void setup() {
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
 }

void loop() {
  val = (analogRead(potPin)*16)/1025;
  Serial.println(val);

  t2();
}


void t2(){
   switch (val) {
    case 1:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    break;
    case 2:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    break;
    case 3:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);

    break;
    case 4:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
    break;
        case 5:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
    break;
       case 6:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
    break;
    
    
    case 7:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
       break;
      case 8:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
   
    break;
    case 9:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
   
    break;
     case 10:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
   
    break;
     case 11:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
   
    break;
     case 12:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
   
    break;
    case 13:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
   
    break;
    case 14:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
   
    break;
     case 15:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
   
    break;
       default:
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    break;
  
  }
}
