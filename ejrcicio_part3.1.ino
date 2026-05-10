int rojo = 3;
int azul = 5;
int buzzer = 9;

void setup() {

  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {

  analogWrite(rojo, 255);
  analogWrite(azul, 0);

  analogWrite(buzzer, 255);

  delay(200);
  
  analogWrite(rojo, 0);
  analogWrite(azul, 255);

  analogWrite(buzzer, 100);

  delay(200);
}