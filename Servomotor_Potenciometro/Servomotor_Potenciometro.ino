#include <Servo.h>

Servo Servito;
int angulo = 0;

void setup() {
  // put your setup code here, to run once:
  Servito.attach(10);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  angulo = map(analogRead(A0), 0, 1024, 0, 180);
  Serial.println(angulo);

  if(angulo <= 10){
    angulo = 10;
  }
  Servito.write(angulo);
  delay(100);

}
