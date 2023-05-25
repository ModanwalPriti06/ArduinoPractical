void setup() {
Serial.begin(9600);
for(int i=2;i<6;i++)
{
pinMode(i,OUTPUT);
}
}
void loop()
{
if(Serial.available>0)
{
  int intBte=Serial.read();
  Switch(intByte)
  {
    case 'a':
    digitalWrite(2,HIGH);
    break;
    case 'b':
    digitalWrite(3,HIGH);
    break;
    case 'c':
    digitalWrite(4,HIGH);
    break;
    case 'd':
    digitalWrite(5,HIGH);
    break;
    default:
    for(i=2;i<6;i++){
      digitalWrite(i,LOW);
      }
    }
  } 
}
