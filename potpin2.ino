const int analogpin=0;
const int ledpin=13;
const int threshold=400;
void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogvalue=analogRead(analogpin);
  if(analogvalue>400)
  {
    digitalWrite(ledpin,HIGH);
   }
   else{
    digitalWrite(ledpin,LOW);
    }
    Serial.write(analogvalue);
    delay(5);
}
