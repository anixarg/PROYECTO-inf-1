int rojo1 = 3;
int verde1 = 5;
int azul1 = 6;

int rojo2 = 9;
int verde2 = 10;
int azul2 = 11;

int pote = A0;

void setup() {

  pinMode(rojo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);

  pinMode(rojo2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);
}

void loop() {
  
  int valor = analogRead(pote);

  int tiempo = map(valor, 0, 1023, 10, 200);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 0);
  analogWrite(azul1, 255);

  analogWrite(rojo2, 255);
  analogWrite(verde2, 255);
  analogWrite(azul2, 0);

  delay(tiempo);

  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);

  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(tiempo);
}

