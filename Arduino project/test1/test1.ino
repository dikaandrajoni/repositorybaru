int a=3;
int b=4;

void setup() {
pinMode(a,OUTPUT);
pinMode(b, OUTPUT);

//add new line

}

void loop() {
  digitalWrite(a,1);
  delay(250);
  digitalWrite(a,0);
  delay(250);

  digitalWrite(b,1);
  delay(250);
  digitalWrite(b,0);
  delay(250);
}
