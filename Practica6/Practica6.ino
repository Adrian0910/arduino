int pin2=9;//entrada 2 del L293D
int pin7=10;//entrada 7 del L293D
int pote=A0;
int valorpote=0;
int motorpin=10; //pin de salida analogica PWM
int pwm1;
int pwm2;

void setup() {
  // se inicializan los pins de salida
  pinMode(pin2, OUTPUT);
  pinMode(pin7, OUTPUT);

}

void loop() {
  //ejercicio1();
  //ejercicio2();
  ejercicio3();
}

void ejercicio1(){
  valorpote=analogRead(pote)/4;
  //pwm1 = map(valorpote, 0, 1023, 0, 255);
  analogWrite(motorpin, valorpote);
}
  
void ejercicio2(){
  valorpote=analogRead(pote);
  if(valorpote<512){
    analogWrite(pin2, 0);
    analogWrite(pin7, 125);
  }else{
    analogWrite(pin7, 0);
    analogWrite(pin2, 125);
  }

}
  
void ejercicio3(){
  // se almacena el valor del potenciometro en una variable
  valorpote=analogRead(pote);
  //la entrada analogica del arduino es de 10 bits, del 0 al 1023
  //en cambio, la salida es de 8 bits, quiere decir un rango del 0 al 255
  //Por eso se debe mapear el numero de una rango a otro

  pwm1 = map(valorpote, 0, 1023, 0, 255);
  pwm2 = map(valorpote, 0, 1023, 255, 0);

  //se saca el PWM de las dos salidas usando analogWrite(pin, valor)

  analogWrite(pin2, pwm1);
  analogWrite(pin7, pwm2);
}
