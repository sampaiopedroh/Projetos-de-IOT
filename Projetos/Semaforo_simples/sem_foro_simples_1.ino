#define ledRed  10
#define ledYew  9
#define ledGre  8
#define maximo 250
#define minimo 0

void setup() {
  pinMode(1, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

void fechado(int tmp) {
  for (int i = minimo; i < maximo; i++) {
    analogWrite(10, i);
  }  
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(tmp);
}

void aberto(int tmp) {
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(tmp);
}

void atencao(int tmp) {
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(tmp);
}

void loop() {
  fechado(5000);
  aberto(5000);
  atencao(3000);
}