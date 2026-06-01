#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int rojo = 9;
int verde = 10;
int azul = 6;
int buzzer = 8;
int pir = 7;
int tempPin = A0;
int ldrPin = A1;
int trigPin = 13;
int echoPin = A2;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(pir, INPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
  lcd.begin(16, 2);

  Serial.println("Sistema iniciado");
}

void loop()
{
  int lecturaTemp = analogRead(tempPin);

  float voltaje = lecturaTemp * (5.0 / 1023.0);
  float temperatura = voltaje * 100.0;

  int movimiento = digitalRead(pir);

  int lecturaLuz = analogRead(ldrPin);

  int porcentajeLuz = map(lecturaLuz, 0, 1023, 0, 100);

  if (porcentajeLuz < 0)
    porcentajeLuz = 0;

  if (porcentajeLuz > 100)
    porcentajeLuz = 100;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duracion = pulseIn(echoPin, HIGH);

  float distancia = -1;

  if (duracion > 0)
  {
    distancia = duracion * 0.034 / 2;
  }

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  Serial.print("Luz: ");
  Serial.print(porcentajeLuz);
  Serial.println("%");

  Serial.print("Movimiento: ");
  Serial.println(movimiento);

  Serial.print("Distancia: ");

  if (distancia < 0)
    Serial.println("Sin lectura");
  else
  {
    Serial.print(distancia);
    Serial.println(" cm");
  }
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print((int)temperatura);
  lcd.print("C");

  lcd.setCursor(8, 0);
  lcd.print("L:");
  lcd.print(porcentajeLuz);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("D:");

  if (distancia < 0)
    lcd.print("error");
  else
    lcd.print((int)distancia);

  if (porcentajeLuz < 20)
  {
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 255);

    if (movimiento == HIGH || temperatura > 39)
    {
      analogWrite(rojo, 255);
      analogWrite(verde, 0);
      analogWrite(azul, 0);

      tone(buzzer, 1000, 300);

      lcd.clear();
      lcd.print("ALARMA");
    }
  }
  
  else
  {
    if (distancia > 0 && distancia < 100)
    {
      analogWrite(rojo, 255);
      analogWrite(verde, 0);
      analogWrite(azul, 0);

      tone(buzzer, 1000, 200);
      delay(300);

      tone(buzzer, 1000, 200);

      lcd.clear();
      lcd.print("dist < 1m");
    }
    else if (movimiento == HIGH)
    {
      analogWrite(rojo, 255);
      analogWrite(verde, 255);
      analogWrite(azul, 0);

      tone(buzzer, 800, 150);

      lcd.clear();
      lcd.print("MOVIMIENTO");
    }
    else if (temperatura > 39)
    {
      analogWrite(rojo, 255);
      analogWrite(verde, 0);
      analogWrite(azul, 0);

      tone(buzzer, 1200, 200);

      lcd.clear();
      lcd.print("temp > 39C");
    }
    else
    {
      analogWrite(rojo, 0);
      analogWrite(verde, 255);
      analogWrite(azul, 0);
    }
  }

  delay(1000);
}
