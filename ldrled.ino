const int ledpin=13;
const int ldrpin=A0;
void setup() {
 Serial.begin(9600);
 pinMode(ledpin,OUTPUT);
  pinMode(ldrpin,INPUT);
 

}

void loop() {
  int ldrpin=analogRead(ldrpin);
  if(ldrpin<=400){
    digitalWrite(ledpin,HIGH);
    Serial.println("Dark , LED ON");
    delay(2000);
    
    }
else{
  digitalWrite(ledpin,LOW);
    Serial.println("Dim , LED OFF");
    delay(1000);
  }
}
