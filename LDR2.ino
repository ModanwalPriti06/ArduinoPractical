const int sensormin=0;
const int sensormax=600;
void setup() {
 Serial.begin(9600);
}

void loop() {
int analogReading=analogRead(0);
int range=map(analogReading,sensormin,sensormax,0,3);
switch(range){
  case 1:
  Serial.println("Dark");
  break;
   case 2:
  Serial.println("Dim");
  break;
   case 3:
  Serial.println("Midium");
  break;
   case 4:
  Serial.println("Bright");
  break;4
  }

}
