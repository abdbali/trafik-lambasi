int k=5;
int s=6;
int y=7;
void setup()
{
 pinMode(k,OUTPUT);
 pinMode(s,OUTPUT);
 pinMode(y,OUTPUT);
}
void loop() 
{
 do
 {
 digitalWrite(k,HIGH);
 delay(5000);
 digitalWrite(k,LOW);
 digitalWrite(s,HIGH);
 delay(1000);
 digitalWrite(s,LOW);
 digitalWrite(y,HIGH);
 delay(3000);
 digitalWrite(y,LOW);
 }
 while(1==1);
}