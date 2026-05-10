int rojo = 3;
int verde = 5;
int azul = 6;

int boton = 2;

int color = 0;

int ultimoEstado = HIGH;

void setup() {

  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);

  
  
  pinMode(boton, INPUT_PULLUP);
}

void loop() {

  int estado = digitalRead(boton);

  if (estado == LOW && ultimoEstado == HIGH) {

    color++;

    if (color > 6) {
      color = 0;
    }

    delay(200); 
  }

  ultimoEstado = estado;

  // ROJO
  if (color == 0) {

    analogWrite(rojo, 255);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
  }

  // CIAN
  if (color == 1) {

    analogWrite(rojo, 0);
    analogWrite(verde, 255);
    analogWrite(azul, 255);
  }

  // VERDE
  if (color == 2) {

    analogWrite(rojo, 0);
    analogWrite(verde, 255);
    analogWrite(azul, 0);
  }

  // MAGENTA
  if (color == 3) {

    analogWrite(rojo, 255);
    analogWrite(verde, 0);
    analogWrite(azul, 255);
  }

  // AZUL
  if (color == 4) {

    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 255);
  }

  // BLANCO
  if (color == 5) {

    analogWrite(rojo, 255);
    analogWrite(verde, 255);
    analogWrite(azul, 255);
  }

  // AMARILLO
  if (color == 6) {

    analogWrite(rojo, 255);
    analogWrite(verde, 255);
    analogWrite(azul, 0);
  }
}