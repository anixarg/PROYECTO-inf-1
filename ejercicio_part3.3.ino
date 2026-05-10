int rojo1 = A1;
int verde1 = A3;
int azul1 = A2;
int rojo2 = A4;
int verde2 = 3;
int azul2 = A5;
int rojo3 = 4;
int verde3 = 6;
int azul3 = 5;
int rojo4 = 7;
int verde4 = 9;
int azul4 = 8;
int verde5 = 12;
int azul5 = 11;
int rojo6 = 13;
int azul6 = 10;
int boton = 2;
int pote = A0;

bool iniciar = false;

// Guardando estado anterior del boton
int ultimoEstado = HIGH;

void setup()
{
  pinMode(rojo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);

  pinMode(rojo2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);

  pinMode(rojo3, OUTPUT);
  pinMode(verde3, OUTPUT);
  pinMode(azul3, OUTPUT);

  pinMode(rojo4, OUTPUT);
  pinMode(verde4, OUTPUT);
  pinMode(azul4, OUTPUT);

  pinMode(verde5, OUTPUT);
  pinMode(azul5, OUTPUT);

  pinMode(rojo6, OUTPUT);
  pinMode(azul6, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
}

void loop() {

  int estado = digitalRead(boton);

  if (estado == LOW && ultimoEstado == HIGH) {

    iniciar = !iniciar;

    delay(200);
  }

  ultimoEstado = estado;

  int valor = analogRead(pote);

  int tiempo = map(valor, 0, 1023, 10, 300);

  if (iniciar == true) {

    digitalWrite(rojo1, HIGH);

    delay(tiempo);

    apagarTodo();

    digitalWrite(verde2, HIGH);

    delay(tiempo);

    apagarTodo();

    digitalWrite(azul3, HIGH);

    delay(tiempo);

    apagarTodo();

    digitalWrite(rojo4, HIGH);
    digitalWrite(verde4, HIGH);

    delay(tiempo);

    apagarTodo();

    digitalWrite(verde5, HIGH);
    digitalWrite(azul5, HIGH);

    delay(tiempo);

    apagarTodo();

    digitalWrite(rojo6, HIGH);
    digitalWrite(azul6, HIGH);

    delay(tiempo);

    apagarTodo();
  }
}

void apagarTodo() {

  // LED 1
  digitalWrite(rojo1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(azul1, LOW);

  // LED 2
  digitalWrite(rojo2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(azul2, LOW);

  // LED 3
  digitalWrite(rojo3, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(azul3, LOW);

  // LED 4
  digitalWrite(rojo4, LOW);
  digitalWrite(verde4, LOW);
  digitalWrite(azul4, LOW);

  // LED 5
  digitalWrite(verde5, LOW);
  digitalWrite(azul5, LOW);

  // LED 6
  digitalWrite(rojo6, LOW);
  digitalWrite(azul6, LOW);
}