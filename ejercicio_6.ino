int boton = 2;
int buzzer = 9;

void setup() {

  pinMode(boton, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}

void loop() {

  int estado = digitalRead(boton);

  if (estado == LOW) {

    analogWrite(buzzer, 30);
    delay(300);

    analogWrite(buzzer, 0);
    delay(300);

    analogWrite(buzzer, 100);
    delay(300);

    analogWrite(buzzer, 0);
    delay(300);
  }

  else 
  {
    analogWrite(buzzer, 0);
  }
}