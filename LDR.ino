const int sensormin=0;
const int sensormax=600;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorReading=analogRead(0);
  int range=map(sensorReading,sensormin,sensormax,0,3);
  switch(range){
    case 0:
    Serial.println("Dark");
    break;
    case 1:
    Serial.println("Dim");
    break;
    case 2:
    Serial.println("medium");
    break;
    case 3:
    Serial.println("Bright");
    break;
    delay(500);
    }
}
