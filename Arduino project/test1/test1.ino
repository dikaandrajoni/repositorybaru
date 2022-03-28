int a=3;
void setup() {
pinMode(a,OUTPUT);
}

void loop() {
  digitalWrite(a,1);
  delay(250);
  digitalWrite(a,0);
  delay(250);
}
