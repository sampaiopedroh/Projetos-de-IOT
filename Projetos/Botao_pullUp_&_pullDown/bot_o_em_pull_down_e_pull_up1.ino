#define led 4
#define btn 3
#define led2 6
#define btn2 5

void setup(){
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn2, INPUT);
}

void loop(){
  if(digitalRead(btn) == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
  	digitalWrite(led, LOW);
  }
  if(digitalRead(btn2) == HIGH){
    digitalWrite(led2, HIGH);
  }
  else{
  	digitalWrite(led2, LOW);
  }
}