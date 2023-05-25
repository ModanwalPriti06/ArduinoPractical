# define echopin 2
# define trigpin 3
int distance;
long duration;
void setup() {
  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);
  Serial.begin(9600);
  Serial.println("The distance is:");
}
void loop() {
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
  Serial.print(distance);
  Serial.print(" cm");

}
