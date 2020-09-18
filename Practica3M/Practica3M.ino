
int pinAnalog = A0;
int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int lectura;
 
void setup() {
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
 }

void loop() {
  lectura = (analogRead(pinAnalog)*5)/1025;
  Serial.println(lectura);
  //t1();
  t2();
  //delay(1000);
}

void t1(){
  if(lectura > 2){
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,LOW);
  }else{
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,LOW);
  }
}

void t2(){
   switch (lectura) {
    case 1:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    break;
    case 2:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    break;
    case 3:
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);

    break;
    case 4:
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
