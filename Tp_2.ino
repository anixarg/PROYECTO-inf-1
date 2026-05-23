int rojo = 9;
int verde = 10;
int azul = 11;
int potTiempo = A0;
int potRojo = A1;
int potVerde = A2;
int potAzul = A3;
int boton = 2;
int buzzer = 8;

bool encendido = false;

bool estadoBoton;
bool estadoAnterior = HIGH;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  estadoBoton = digitalRead(boton);

  if (estadoBoton == LOW && estadoAnterior == HIGH)
  {
    encendido = !encendido;

    delay(200);
  }

  estadoAnterior = estadoBoton;

  if (encendido == true)
  {
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);

    return;
  }

  int lecturaTiempo = analogRead(potTiempo);

  int valorRojo = (analogRead(potRojo) * 255) / 1023;
  int valorVerde = (analogRead(potVerde) * 255) / 1023;
  int valorAzul = (analogRead(potAzul) * 255) / 1023;

  int tiempo = map(lecturaTiempo, 0, 1023, 0, 3000);

  Serial.print("Tiempo: ");
  Serial.println(tiempo / 1000.0);

  Serial.print("R:");
  Serial.println(valorRojo);

  Serial.print("G:");
  Serial.println(valorVerde);

  Serial.print("B:");
  Serial.println(valorAzul);

  Serial.println();

  for (int i = 0; i < 5; i++)
  {
    analogWrite(rojo, valorRojo);
    analogWrite(verde, valorVerde);
    analogWrite(azul, valorAzul);

    delay(100);

    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);

    delay(100);
  }

  tone(buzzer, 1000, 100);

  analogWrite(rojo, valorRojo);
  analogWrite(verde, valorVerde);
  analogWrite(azul, valorAzul);

  delay(tiempo);
}
