
//Encendido y apagado de un led mediante comunicacion serial
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0); //lee el byte de entrada
  int val = Serial.read() - '0';// lee y almacena el dato en val
  if(val > 1){
    Serial.println("EJEMPLO"); // se muestra para un numero diferente de 0 y 1
  }
  if (val == 1){
    Serial.println("ENCENDER");
    digitalWrite(ledPin, HIGH);
  }
  if (val == 0){
    Serial.println("Apagar");
    digitalWrite(ledPin, LOW);
  }

}
