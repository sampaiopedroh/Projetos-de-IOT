int led = 10;
void setup(){
pinMode(led, OUTPUT);
}
void loop(){
for (int x=0; x<3; x++) {
digitalWrite(led, HIGH);
delay(150);
digitalWrite(led, LOW);
delay(100);
}
delay(100);
for (int x=0; x<3; x++) {
digitalWrite(led, HIGH);
delay(400);
digitalWrite(led, LOW);
delay(100);
}
delay(100);
for (int x=0; x<3; x++) {
digitalWrite(led, HIGH); 
delay(150); 
digitalWrite(led, LOW); 
delay(100);
}
delay(5000);
}