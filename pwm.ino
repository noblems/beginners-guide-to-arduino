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

void loop()
{
 if(digitalRead(
}
