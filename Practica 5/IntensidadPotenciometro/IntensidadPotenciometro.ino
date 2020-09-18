 const int LED = 3; // Pin digital con PWM
  const int potenciometro = 0; // Pin analógico
 
  int brillo = 0; // Variable que acumula el brillo
 
  void setup()
  {
    pinMode(LED, OUTPUT); // Pin digital 3 como salida
  }
 
  void loop()
  {
      brillo = (analogRead(potenciometro))/4; // Leemos el valor de A0 y lo guardamos en brillo
      analogWrite(LED, brillo); // Escribimos el valor del brillo en el pin 3 (PWM)
      delay(20);
  }
