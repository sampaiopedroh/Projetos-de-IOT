#define led 6
#define btn 7
#define led2 3
#define btn2 4
int btnLigado = 0;
int btnDesligado = 0; 
#define maximo 250
#define minimo 0

void trocaLed() {
  if(digitalRead(led2) == HIGH) {
    digitalWrite(led2, LOW);
  }
  else {
    digitalWrite(led2, HIGH); 
  }
}

void keyup() {
  if((btnLigado == 1) and (btnDesligado == 1)) {
    btnLigado = 0;
    btnDesligado = 0;
    trocaLed();
  }
}

void setup() {
  pinMode(13, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  digitalWrite(13, LOW);
  if(digitalRead(btn) == HIGH) {
    for (int i = minimo; i < maximo; i++) {
     analogWrite(led, i);
   }
  }
  else {
    digitalWrite(led, LOW);
  }

  if(digitalRead(btn2) == HIGH) {
    btnLigado = 1;
    btnDesligado = 0;  
  }
  else {
    btnDesligado = 1;  
  }
  keyup();
}