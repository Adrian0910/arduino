#include <Servo.h>
Servo Servito; //creacion del obj
int pos = 0;  //Posicion donde inicia el servo



void setup() {
  // put your setup code here, to run once:
  Servito.attach(10); //le dices en que pin esta

}

void loop() {
  // put your main code here, to run repeatedly:
for(pos = 0; pos <= 180; pos+=1){ //Varia la posicion de 0 a 180, con espoera de 15ms
  Servito.write(pos);
  delay(15);
 }
 //Varia la posicion de 180 a 0, con espera de 15 ms
 for(pos = 180; pos >= 0; pos-=1){
  Servito.write(pos);
  delay(15);
 }
}
