int a=3;
int b=4;

void setup() {
pinMode(A1,INPUT);
pinMode(a,OUTPUT);
pinMode(b, OUTPUT);

//add new line
}
//pujicobacoba
//semangat arin

void loop() {
  int data = analogRead(A1);
  digitalWrite(a,1);
  delay(250);
  digitalWrite(a,0);
  delay(250);

  digitalWrite(b,1);
  delay(250);
  digitalWrite(b,0);
  delay(250);
}
