int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int led7 = 9;
int led8 = 10;
int led9 = 11;
int led10 = 12;

int boton = 2;

bool pausa = false;

int ultimoEstado = HIGH;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);

  pinMode(boton, INPUT_PULLUP);
}

void loop() {

  int estado = digitalRead(boton);

  if (estado == LOW && ultimoEstado == HIGH) {

    pausa = !pausa;

    delay(80);
  }

  ultimoEstado = estado;

  if (pausa == false) {

    prenderLed(led1);
    prenderLed(led2);
    prenderLed(led3);
    prenderLed(led4);
    prenderLed(led5);
    prenderLed(led6);
    prenderLed(led7);
    prenderLed(led8);
    prenderLed(led9);
    prenderLed(led10);
  }
}

void prenderLed(int led) {

  int estado = digitalRead(boton);

  if (estado == LOW) {
    pausa = !pausa;
    delay(50);
  }

  if (pausa == false) {

    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
  }
}



