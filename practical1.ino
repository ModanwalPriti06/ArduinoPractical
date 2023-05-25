
void setup()
{
  int i=0;
  int ledpin=2;
  for(i=0;i<8;i++){
    pinMode(ledpin,OUTPUT);
    digitalWrite(ledpin,HIGH);
    ledpin=ledpin+1;
    }
  }
void loop() {
  int i=0;
  int ledpin=2;
   for(i=0;i<8;i++){
    digitalWrite(ledpin,LOW);
    delay(1000);
       digitalWrite(ledpin,HIGH);
       delay(1000);
    ledpin=ledpin+1;

}
    int ledPin=8;
   for(i=8;i>0;i++){
    digitalWrite(ledPin,LOW);
    delay(1000);
       digitalWrite(ledPin,HIGH);
       delay(1000);
    ledPin=ledPin-1;

}
}
