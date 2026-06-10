int PIN_TMP = A0;
int PIN_LDR = A1;
int PIN_ROJO = 9;
int PIN_VERDE = 10;
int PIN_AZUL = 11;

void setup()
{
  Serial.begin(9600);

  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
  pinMode(PIN_AZUL, OUTPUT);
}

void loop()
{
 
  int lecturaTemp = analogRead(PIN_TMP);

  float voltaje = lecturaTemp * (5.0 / 1023.0);
  float temperatura = voltaje * 100.0;

  int lecturaLDR = analogRead(PIN_LDR);
  int porcentajeLuz = map(lecturaLDR, 1023, 0, 0, 70);

  Serial.print("Luz:");
  Serial.print(porcentajeLuz);
  Serial.print("%");

  Serial.print(" Temp:");
  Serial.print(temperatura);
  Serial.println("°C");
  
  digitalWrite(PIN_ROJO, LOW);
  digitalWrite(PIN_VERDE, LOW);
  digitalWrite(PIN_AZUL, LOW);

  if (porcentajeLuz >= 30 && porcentajeLuz <= 70)
  {
    if (temperatura > 90)
    {
      digitalWrite(PIN_ROJO, HIGH);
    }
    else if (temperatura < 18)
    {
      digitalWrite(PIN_AZUL, HIGH);
    }
    else
    {
      digitalWrite(PIN_VERDE, HIGH);
    }
  }

  delay(500);
}