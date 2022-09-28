/Motor A Connections
int enA = 9;
int in1 = 8;
int in2 = 7;
//Motor B Connections
int enB = 3;
int in3 = 5;
int in4 = 4;
//buttons
int forward=10;
int backward=11;
int right=12;
int left=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(forward,INPUT);
  pinMode(backward,INPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);
  digitalWrite(forward,LOW);
  digitalWrite(backward,LOW);
  digitalWrite(right,LOW);
  digitalWrite(left,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(forward)==HIGH)
  {
    digitalWrite(in1,HIGH);
  digitalWrite(in4,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  }
  delay(100);
  if(digitalRead(backward)==HIGH)
  {
    digitalWrite(in1,LOW);
  digitalWrite(in4,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  }
  delay(100);
  if(digitalRead(right)==HIGH)
  {
    digitalWrite(in1,HIGH);
  digitalWrite(in4,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  }
  delay(100);
  if(digitalRead(left)==HIGH)
  {
    digitalWrite(in1,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  }
  delay(100);
}
