int forward = 14;
int backward = 15;
int left = 16;
int right = 17;
int rightm1=5;
int leftm1=7;
int rightm2=6;
int leftm2=8;         
void setup()
{
  pinMode(rightm1,OUTPUT);
  pinMode(rightm2,OUTPUT);
  pinMode(leftm1,OUTPUT);
  pinMode(leftm2,OUTPUT);
  pinMode(forward,INPUT);
  pinMode(backward,INPUT);
  pinMode(left,INPUT);
  pinMode(right,INPUT);
}
void loop()
{
 if(digitalRead(forward)){
  digitalWrite(rightm1,HIGH);
  digitalWrite(rightm2,LOW);
  digitalWrite(leftm1,HIGH);
  digitalWrite(leftm2,LOW);
  delay(3000);
  digitalWrite(rightm1,LOW);
  digitalWrite(rightm2,LOW);
  digitalWrite(leftm1,LOW);
  digitalWrite(leftm2,LOW);
 }else if(digitalRead(right)){
  digitalWrite(rightm1,LOW);
  digitalWrite(rightm2,HIGH);
  digitalWrite(leftm1,HIGH);
  digitalWrite(leftm2,LOW);
  delay(3000);
  digitalWrite(rightm1,LOW);
  digitalWrite(rightm2,LOW);
  digitalWrite(leftm1,LOW);
  digitalWrite(leftm2,LOW);
 }else if(digitalRead(backward)){
  digitalWrite(rightm1,LOW);
  digitalWrite(rightm2,HIGH);
  digitalWrite(leftm1,LOW);
  digitalWrite(leftm2,HIGH);
  delay(3000);
  digitalWrite(rightm1,LOW);
  digitalWrite(rightm2,LOW);
  digitalWrite(leftm1,LOW);
  digitalWrite(leftm2,LOW);
 }else if(digitalRead(left)){
  digitalWrite(rightm1,HIGH);
  digitalWrite(rightm2,LOW);
  digitalWrite(leftm1,LOW);
  digitalWrite(leftm2,HIGH);
  delay(3000);
  digitalWrite(rightm1,LOW);
  digitalWrite(rightm2,LOW);
  digitalWrite(leftm1,LOW);
  digitalWrite(leftm2,LOW);
 }
}


