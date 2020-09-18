int potPin = A0;
int ledPin=13;
int ledPin1=12;
int val=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val= analogRead(potPin);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin1, LOW);
  delay(val);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin1, HIGH);
  delay(val);

}
