//***********************CONTROLADOR DE BRILLO****************************

int push = A0; //Seleccion del pin en modo analogico
int led = 3; //Led conectado al pin 3 (PWM-)
int brillo; //Variable brillo
int valor_push;
int randval;
boolean stateled = false;
boolean aux = false;

void setup() {
  pinMode(led, OUTPUT); //se declara el Led como salida
  pinMode(push,INPUT);
  Serial.begin(9600);
}

void loop() {
  stateled = digitalRead(A0);
  Serial.println(valor_push);
  
  if (stateled == false && brillo <=255){
    inicio();
  }
  
  while(stateled == true){
    encender();
  }
}

void inicio(){
  //AUMENTO DE BRILLO
  for(brillo = 0; brillo < 256; brillo++) {
     analogWrite(led, brillo);
     delay(10);
  }
  //DISMUNICION DEL BRILLO
  for(brillo = 255; brillo >= 0; brillo--) {
     analogWrite(led, brillo);
     delay(10);
  }
}


void encender(){
  randomSeed(millis());    // genera una semilla para aleatorio a partir de la función millis()
  brillo = random(255);// genera número aleatorio entre 0 y 255
  analogWrite(led, brillo);
  delay(10);
  aux == true;
}
