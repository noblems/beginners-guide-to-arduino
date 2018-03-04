void setup() {
pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
  Serial.println("hello world");
  delay(500);
}
