#define SegA 2
#define SegB 3
#define SegC 4
#define SegD 5
#define SegE 6
#define SegF 7
#define SegG 8

int count=0;
void setup() {
 for(int i=2;i<9;i++){
  pinMode(i,OUTPUT);
  }
}
void loop() {
 switch (count)
 {
  case 0:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,HIGH);
      digitalWrite(SegE,HIGH);
       digitalWrite(SegF,HIGH);
        digitalWrite(SegG,LOW);
        break;
         case 1:
  digitalWrite(SegA,LOW);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,LOW);
      digitalWrite(SegE,LOW);
       digitalWrite(SegF,LOW);
        digitalWrite(SegG,LOW);
        break;
         case 2:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,LOW);
     digitalWrite(SegD,HIGH);
      digitalWrite(SegE,HIGH);
       digitalWrite(SegF,LOW);
        digitalWrite(SegG,HIGH);
        break;
         case 3:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,HIGH);
      digitalWrite(SegE,LOW);
       digitalWrite(SegF,LOW);
        digitalWrite(SegG,HIGH);
        break;
         case 4:
  digitalWrite(SegA,LOW);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,LOW);
      digitalWrite(SegE,LOW);
       digitalWrite(SegF,HIGH);
        digitalWrite(SegG,HIGH);
        break;
         case 5:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,LOW);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,HIGH);
      digitalWrite(SegE,LOW);
       digitalWrite(SegF,HIGH);
        digitalWrite(SegG,HIGH);
        break;
              case 6:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,LOW);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,HIGH);
      digitalWrite(SegE,HIGH);
       digitalWrite(SegF,HIGH);
        digitalWrite(SegG,HIGH);
        break;
case 7:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,LOW);
      digitalWrite(SegE,LOW);
       digitalWrite(SegF,LOW);
        digitalWrite(SegG,LOW);
        break;
          case 8:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,HIGH);
      digitalWrite(SegE,HIGH);
       digitalWrite(SegF,HIGH);
        digitalWrite(SegG,HIGH);
        break;
          case 9:
  digitalWrite(SegA,HIGH);
   digitalWrite(SegB,HIGH);
    digitalWrite(SegC,HIGH);
     digitalWrite(SegD,HIGH);
      digitalWrite(SegE,LOW);
       digitalWrite(SegF,HIGH);
        digitalWrite(SegG,HIGH);
        break;  
  }
  if(count<10)
  {
    count++;
    delay(1000);
    }
    if(count==10){
      count=0;
      delay(1000);
      }
}
