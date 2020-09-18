//Variable donde almacenaremos el valor del potenciometro
long valor;

//Declaramos los pins de los LEDs

int LED_2 = 3;
int LED_4 = 5;

void setup() {
  //Inicializamos la comunicación serial
  Serial.begin(9600);
  
}

void loop() {
  // leemos del pin A0 valor
  valor = analogRead(A0);


  if(valor >= 0 && valor <=511)
  {
      digitalWrite(LED_2, HIGH);
      delay(1000);
      digitalWrite(LED_4, HIGH);
      delay(500);
      digitalWrite(LED_4, LOW);
      delay(500);
  } 
  
  if (valor >= 512 && valor <=1023)
  {
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_4, HIGH);
  }
}
