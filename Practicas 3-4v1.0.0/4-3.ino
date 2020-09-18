 int potPin=A0;
 int buttonPin=7;
 int ledPin1=13;
 int ledPin2=12;
 int ledPin3=11;
 int ledPin4=10;
 int ledPin5=9;
 int ledPin6=8;
 int val=0;
 int buttonState=0;
 
void setup() {
 pinMode(buttonPin,INPUT);
 pinMode(ledPin1,OUTPUT);
 pinMode(ledPin2,OUTPUT);
 pinMode(ledPin3,OUTPUT);
 pinMode(ledPin4,OUTPUT);
 pinMode(ledPin5,OUTPUT);
 pinMode(ledPin6,OUTPUT);
}

void loop() {
val=analogRead(potPin);
buttonState=digitalRead(buttonPin);
if(buttonState == HIGH){
  if(val>704  &&  val<768){
    digitalWrite(ledPin5,HIGH);
    digitalWrite(ledPin6,LOW);
  }
  else{
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,HIGH);  
  }
}
  if(buttonState == LOW){
  if(val>704  &&  val<768){
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
  }
  else{
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);  
  }
}
if(val<64){
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
           }
if(val>64 && val<128 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
      }
if(val>128 && val<192 ) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
      }
if(val>192  &&  val<256 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
      }      
if(val>256  &&  val<320 ) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,LOW);
      }      
 if(val>320  &&  val<384 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,LOW);
      }      
if(val>384  &&  val<448 ) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,LOW);
      }      
if(val>448  &&  val<512 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,LOW);
      }      

if(val>512  &&  val<576 ) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,HIGH);
      }      

if(val>576  &&  val<640 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,HIGH);
      }      

if(val>640  &&  val<704 ) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,HIGH);
      }      

if(val>704  &&  val<768 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,HIGH);
      }      

if(val>768  &&  val<832 ) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,HIGH);
      }      

if(val>832  &&  val<896 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,HIGH);
      }      

if(val>896  &&  val<960 ) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,HIGH);
      }      

if(val>960 ) {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,HIGH);
      }      

  
}
