int rojo = 3;
int verde = 5;
int azul = 6;
int boton = 2;
int pote = A0;

bool encendido = false;

int ultimoEstado = HIGH;

void setup() {

  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
}

void loop() 
{
  int estado = digitalRead(boton);

  if (estado == LOW && ultimoEstado == HIGH) {

    encendido = !encendido;

    delay(200);
  }

  ultimoEstado = estado;

  if (encendido == true) 
  {

    int valor = analogRead(pote);

    int color = map(valor, 0, 1023, 0, 2);

    if (color == 0) {

      analogWrite(rojo, 255);
      analogWrite(verde, 0);
      analogWrite(azul, 0);
    }

    if (color == 1) {

      analogWrite(rojo, 0);
      analogWrite(verde, 255);
      analogWrite(azul, 0);
    }

    if (color == 2) {

      analogWrite(rojo, 0);
      analogWrite(verde, 0);
      analogWrite(azul, 255);
    }
  }

  else {

    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
  }
}