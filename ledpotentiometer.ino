const int analogpin=0;
const int ledpin=9;
int inputvalue=0;
int outputvalue=0;
void setup()
{
 Serial.begin(9600);
}
void loop() 
{
inputvalue=analogRead(analogpin);
Serial.print("Input: ");
Serial.println(inputvalue);
outputvalue=map(inputvalue,0,1023,0,255);
Serial.print("Output ");
Serial.println(outputvalue);
analogWrite(ledpin,outputvalue);
delay(1000);
}
