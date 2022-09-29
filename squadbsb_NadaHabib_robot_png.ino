#include<SoftwareSerial.h>
SoftwareSerial myserial(10,11); //blutooth: tx:10, rx:11
//Motor A Connections
int enA = 5;
int in1 = 2;
int in2 = 3;
//Motor B Connections
int enB = 6;
int in3 = 4;
int in4 = 7;
//ultrasonic
int trigPin=9;
int echoPin=8;
float duration,cm;
void setup() {
  myserial.begin(9600);
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  //setting enables high
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);
  //defin inputs and outputs
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
void loop() {
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //distance to an object = ((speed of sound in the air)*time)/2
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;
  if(cm<=100)
  {
  //stops at distance less than or equal to 100:
  digitalWrite(in1,LOW);
  digitalWrite(in4,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  }
  if(myserial.available())
  {
  //forward motion
  if(myserial.read()=="forward")
  {
    digitalWrite(in1,HIGH);
  digitalWrite(in4,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  }
  //backward motion
  if(myserial.read()=="backward")
  {
    digitalWrite(in1,LOW);
  digitalWrite(in4,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  }
  //right
  if(myserial.read()=="right")
  {
    digitalWrite(in1,HIGH);
  digitalWrite(in4,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  }
  //left
  if(myserial.read()=="left")
  {
    digitalWrite(in1,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  }
  delay(100);
  }
}
