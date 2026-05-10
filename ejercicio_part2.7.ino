int buzzer = 9;
int pote = A0;

void setup() {

  pinMode(buzzer, OUTPUT);
}

void loop() {

  int valor = analogRead(pote);
  
  int sonido = map(valor, 0, 1023, 0, 255);

  analogWrite(buzzer, sonido);

  delay(10);
}