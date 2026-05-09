int led1 = 3;
int led2 = 5;
int buzzer = 6;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {

  // LED 1 encendido
  analogWrite(led1, 255); // brillo máximo
  analogWrite(led2, 0);   // apagado
  analogWrite(buzzer, 100);
  delay(400);

  analogWrite(buzzer, 0);
  delay(400);
  
  // LED 2 encendido
  analogWrite(led1, 0);
  analogWrite(led2, 255);
  analogWrite(buzzer, 100);
  delay(400);
  
  analogWrite(buzzer, 0);
  delay(400);
}