
const int botonSumaPin = 7;    
const int LED = 3;             
int i;
int botonSumaValue;          
int s;
int cicloTrabajo;         
int nuevo;

void setup(){
  Serial.begin (9600);
  pinMode(LED, OUTPUT);
  pinMode(botonSumaPin, INPUT);
  
}

void loop (){
  botonSumaValue= digitalRead(botonSumaPin);
 
  Serial.println(botonSumaValue, DEC);
  if (botonSumaValue == HIGH ){
    for  (i=1;i<255; i++){
analogWrite(LED,i);
delay(5);
}
for  (i=255;i>0; i--){
analogWrite(LED,i);
delay(5);
}  }
   if (botonSumaValue == LOW && s==1  ){
    for  (i=1;i<100; i++){
analogWrite(LED,i);
delay(1);
}
for  (i=100;i>0; i--){
analogWrite(LED,i);
delay(1);
}

  }
   
  analogWrite(LED, cicloTrabajo);
  delay(10);
  
}
