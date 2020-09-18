
const int botonSumaPin = 7;    
const int ledPin = 3;             

int botonSumaValue;          

int cicloTrabajo;            

void setup(){
  Serial.begin (9600);
  pinMode(ledPin, OUTPUT);
  pinMode(botonSumaPin, INPUT);
  
}

void loop (){
  botonSumaValue= digitalRead(botonSumaPin);
 
  Serial.println(botonSumaValue, DEC);
  if (botonSumaValue == LOW && cicloTrabajo <=1024){
    cicloTrabajo +=5;
  }
  
  analogWrite(ledPin, cicloTrabajo);
  delay(30);
}
