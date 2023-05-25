int inputpin=A0;
int outputpin=12;
int motorofftime;
int motorontime;
void setup() {
  pinMode(outputpin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  motorofftime=analogRead(inputpin);
  motorontime=1024-motorofftime;
  digitalWrite(outputpin,HIGH);
  delayMicroseconds(motorontime);
   digitalWrite(outputpin,LOW);
   delayMicroseconds(motorofftime);
  
}
