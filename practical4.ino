const int switchpin=4;
const int ledpin=8;
int switchstate=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
   pinMode(ledpin,INPUT);
   }
   void loop(){
    switchstate=digitalRead(switchpin);
    if(switchstate==LOW)
    {
      digitalWrite(ledpin,HIGH);
      delay(2000);
      digitalWrite(ledpin,LOW);
      delay(2000);
      }
  }
