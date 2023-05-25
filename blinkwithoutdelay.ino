
const int ledpin=LED_BUILTIN;
int ledstate=LOW;
unsigned long previousMillis=0;
const int interval=500; 
void setup() 
{
pinMode(ledpin,OUTPUT);
}
void loop() {
  unsigned long currentMillis=millis();
  if(currentMillis-previousMillis>=interval)
 {
    previousMillis=currentMillis;
    if(ledstate==LOW)
    {
      ledstate=HIGH;
      }
      else{
        ledstate=LOW;
        }
       digitalWrite(ledpin,ledstate);
   }
}
