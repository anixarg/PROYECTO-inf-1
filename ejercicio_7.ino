int rojo1 = 3;
int verde1 = 5;
int azul1 = 6;

int rojo2 = 9;
int verde2 = 10;
int azul2 = 11;

int rojo3 = 12;
int verde3 = 13;
int azul3 = 4;

int boton = 2;

int ledActivo = 1;

int ultimoEstado = HIGH;

void setup() {

  pinMode(rojo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);

  pinMode(rojo2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);

  pinMode(rojo3, OUTPUT);
  pinMode(verde3, OUTPUT);
  pinMode(azul3, OUTPUT);

  pinMode(boton, INPUT_PULLUP);
}

void loop() {

  int estado = digitalRead(boton);

  if (estado == LOW && ultimoEstado == HIGH) {

    ledActivo++;

    if (ledActivo > 3) {
      ledActivo = 1;
    }

    delay(100);
  }

  ultimoEstado = estado;

  apagarTodo();

  if (ledActivo == 1) {

    digitalWrite(rojo1, HIGH);
  }

  if (ledActivo == 2) {

    digitalWrite(verde2, HIGH);
  }

  if (ledActivo == 3) {

    digitalWrite(azul3, HIGH);
  }
}

void apagarTodo() {

  digitalWrite(rojo1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(azul1, LOW);

  digitalWrite(rojo2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(azul2, LOW);

  digitalWrite(rojo3, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(azul3, LOW);
}


