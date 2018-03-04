void setup() {
pinMode(13,OUTPUT);
pinMode(A0,INPUT);
}

void loop() {
  if(digitalRead(2)){
   digitalWrite(13,HIGH);
   delay(500);
   digitalWrite(13,LOW);
   delay(500);
  }
}
