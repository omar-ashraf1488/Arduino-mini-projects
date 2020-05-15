const int ledPin =13;
const int button = 2;
int val;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  val = digitalRead(button);

  if(val == HIGH)
  {
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    delay(1000);
  }
  else {digitalWrite(ledPin,LOW);}

}
