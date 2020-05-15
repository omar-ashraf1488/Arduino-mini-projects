int ledPin = 13;
int val;

void setup() {
 Serial.begin(9600);
 pinMode(ledPin,OUTPUT);
}

void loop() { 
  val = Serial.read();
  if(val == '1'){digitalWrite(ledPin,HIGH);}
  else if (val == '0'){digitalWrite(ledPin,LOW);}
}
