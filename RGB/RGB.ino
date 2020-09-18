#include <math.h>
int potPin = A0;
int potPin1 = A1;
int potPin2 = A2;
int R=2;
int G=3;+
int B=4;
int val=0;
int val1=0;
int val2=0;


void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = round(analogRead(potPin)/4.01);
  val1 = round(analogRead(potPin1)/4.01);
  val2 = round(analogRead(potPin2)/4.01);
 
  Serial.print("R: ");
  Serial.print(val);
  Serial.print(", ");
  
  Serial.print("G: ");
  Serial.print(val1);
  Serial.print(", ");
  
  Serial.print("B: ");
  Serial.print(val2);
  Serial.print(".");
  Serial.write(10);
  
  if (val >=181 && val <=200 ){
    digitalWrite(R,HIGH);
  } else { 
    digitalWrite(R,LOW);
  }

  if (val1 >=152 && val1 <= 180){
    digitalWrite(G,HIGH);
  } else { 
    digitalWrite(G,LOW);
  }

  if (val2 >= 96 && val2 <= 120 ){
    digitalWrite(B,HIGH);
  } else { 
    digitalWrite(B,LOW);
  }
  
  delay(300);
}
