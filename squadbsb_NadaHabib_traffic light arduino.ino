int red = -5;
int yellow = 4;
int green = -3;
void setup() {                                           
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
}  



void loop() {
   changeLights();
   delay(12000);
}


void changeLights(){
   
// green off, yellow on for 3 seconds
   digitalWrite(green, LOW);
   digitalWrite(yellow, HIGH);
   digitalWrite(red, LOW);
   delay(3000);
   
// turn off yellow, then turn red on for 5 seconds
   digitalWrite(green, LOW);
   digitalWrite(yellow, LOW);
   digitalWrite(red, HIGH);
   delay(4000);
   
// red and yellow on for 2 seconds (red is already on though)
   digitalWrite(green, LOW);
   digitalWrite(yellow, HIGH);
   digitalWrite(red, HIGH);
   delay(2000);
// turn off red and yellow, then turn on green
   digitalWrite(green, HIGH);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);
   delay(3000);
}
