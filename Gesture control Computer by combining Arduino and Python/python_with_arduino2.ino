const int trigger1 = 2; //Trigger pin of 1st Sesnor
const int echo1 = 3; //Echo pin of 1st Sesnor

long time_taken;
int dist,distL,distR;

void setup() {
Serial.begin(9600); 
  
pinMode(trigger1, OUTPUT); 
pinMode(echo1, INPUT); 
}
void calculate_distance(int trigger, int echo)
{
digitalWrite(trigger, LOW);
delayMicroseconds(2);
digitalWrite(trigger, HIGH);
delayMicroseconds(10);
digitalWrite(trigger, LOW);

time_taken = pulseIn(echo, HIGH);
dist= time_taken*0.034/2;
if (dist>50)
dist = 50;


}
void loop() { //infinite loopy
long cm;
calculate_distance(trigger1,echo1);
distL =dist; //get distance of left sensor

cm = microsecondsToCentimeters(time_taken);
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(1000);
if ((distL > 10) && (distL <15))  
{Serial.println("Play/Pause"); delay (500);}

calculate_distance(trigger1,echo1);
distL =dist;
}
long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
   }
