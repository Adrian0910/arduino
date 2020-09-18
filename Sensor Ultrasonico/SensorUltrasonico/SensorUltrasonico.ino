long tiempo;
int disparador=12; /*trigger*/
int entrada=13;/*echo*/
float distancia;
int led1=11;
int led2=10;
int led3=9;
int led4=8;
int led5=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(disparador,OUTPUT);//sensor
  pinMode(entrada,INPUT);
  Serial.begin(9600);
  pinMode(6,OUTPUT); //Buzzer
  pinMode(led1,OUTPUT);/*leds*/
  pinMode(led2,OUTPUT);/*leds*/
  pinMode(led3,OUTPUT);/*leds*/
  pinMode(led4,OUTPUT);/*leds*/
  pinMode(led5,OUTPUT);/*leds*/

}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led5,HIGH);
  delay(1000);*/
  
digitalWrite(disparador,HIGH);
delayMicroseconds(10);
digitalWrite(disparador,LOW);
tiempo =(pulseIn(entrada,HIGH)/2);
/*ahora se calculara la distancia en cm
 * sabiendo que el espacio del sonido es de 343m/2
 * tenemos en millonesimas de segundo*/
 distancia=(tiempo*0.0343);

 Serial.println(distancia);
 delay(100);
 
 if(distancia <= 50){
  digitalWrite(led1,HIGH);

 }else{
  digitalWrite(led1,LOW);
delay(0);
 }
 
 if(distancia <= 40){
  digitalWrite(led2,HIGH);
  delay(0);
 }else{
  digitalWrite(led2,LOW);
 delay(0);
 
 }
 if(distancia <= 30){
  digitalWrite(led3,HIGH);
  delay(0);
 }else{
  digitalWrite(led3,LOW);
 delay(0);
 }
 
 if(distancia <= 20){
  digitalWrite(led4,HIGH);
  delay(0);
 }else{
  digitalWrite(led4,LOW);
 delay(0);
 }
 
 if(distancia <= 10){
  digitalWrite(led5,HIGH);
  delay(0);
 tone(6,500,200);
 
 }else{
  digitalWrite(led5,LOW);
 
 }
}
