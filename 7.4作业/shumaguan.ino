int income;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(4,HIGH);
  delay(10);

}


void loop()
{
  int a=Serial.read();
 if(Serial.available()>0)
 {
   income=a;
   income=income-'0';
   digitalWrite(0,income&1);
   digitalWrite(1,(income>>1)&1);
   digitalWrite(0,(income)&1);
   digitalWrite(0,income&1);
 }
}
