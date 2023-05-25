const int buzzer=8;
void setup() {
  pinMode(buzzer,OUTPUT);

}

void loop() {
digitalWrite(buzzer,HIGH);
delay(3000);
digitalWrite(buzzer,LOW);
delay(1000);

}
