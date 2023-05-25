int potpin=2;
int ledpin=12;
int val=0;

void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  val=analogRead(potpin);
  digitalWrite(ledpin,HIGH);
  delay(val);
  digitalWrite(ledpin,LOW);
  delay(val);
  Serial.println(val);
}
