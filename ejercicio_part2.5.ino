int rojo = 3;
int verde = 5;
int azul = 6;

int poteRojo = A0;
int poteVerde = A1;
int poteAzul = A2;

void setup() {

  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {

  int valorRojo = analogRead(poteRojo);
  int valorVerde = analogRead(poteVerde);
  int valorAzul = analogRead(poteAzul);

  valorRojo = map(valorRojo, 0, 1023, 0, 255);
  valorVerde = map(valorVerde, 0, 1023, 0, 255);
  valorAzul = map(valorAzul, 0, 1023, 0, 255);

  analogWrite(rojo, valorRojo);
  analogWrite(verde, valorVerde);
  analogWrite(azul, valorAzul);
}