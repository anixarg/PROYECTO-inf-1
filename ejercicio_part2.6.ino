int led = 9;
int pote = A0;

void setup() {

  pinMode(led, OUTPUT);
}

void loop() {

  int valor = analogRead(pote);

  int tiempo = map(valor, 0, 1023, 10, 200);
  
  analogWrite(led, 255);

  delay(tiempo);

  analogWrite(led, 0);

  delay(tiempo);
}