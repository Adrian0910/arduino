int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
int led6=8;
int pinpon=A1;
int val;
void setup() {
pinMode (led1,OUTPUT);
pinMode (led2,OUTPUT);
pinMode (led3,OUTPUT);
pinMode (led4,OUTPUT);
}
 void loop(){
  val=analogRead(A1);
  if(val>0&&val<64){
    digitalWrite(led1,HIGH); //Combinacion 0001
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
  }
    if(val>=65&&val<129){
    digitalWrite(led1,LOW); //Combinacion 0010
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
   if(val>=130&&val<194){
    digitalWrite(led1,HIGH); //Combinacion 0011
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
}
   if(val>=195&&val<259){
    digitalWrite(led1,LOW); //Combinacion 0100
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
   if(val>=260&&val<324){
    digitalWrite(led1,HIGH); //Combinacion 0101
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
   if(val>=325&&val<389){
    digitalWrite(led1,LOW); //Combinacion 0110
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
   if(val>=390&&val<454){
    digitalWrite(led1,HIGH); //Combinacion 0111
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
   if(val>=455&&val<519){
    digitalWrite(led1,LOW); //Combinacion 1000
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
   if(val>=520&&val<584){
    digitalWrite(led1,HIGH); //Combinacion 1001
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
   if(val>=585&&val<649){
    digitalWrite(led1,LOW);//Combinacion 1010
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
  if(val>=650&&val<714){
    digitalWrite(led1,HIGH);//Combinacion 1011
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);
 
}
  if(val>=715&&val<779){
    digitalWrite(led1,LOW);//Combinacion 1100
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
  if(val>=780&&val<844){
    digitalWrite(led1,HIGH);//Combinacion 1101
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
  if(val>=845&&val<909){
    digitalWrite(led1,LOW);//Combinacion 1110
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
  if(val>=910&&val<974){
    digitalWrite(led1,HIGH);//Combinacion 1111
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
 
}
 }
