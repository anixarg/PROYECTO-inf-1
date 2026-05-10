int led = 9;

void setup() {

  pinMode(led, OUTPUT);
}

void loop() {

  // Intensidad 1.
  analogWrite(led, 20);
  delay(1000);

  // Intensidad 2..
  analogWrite(led, 80);
  delay(1000);

  // Intensidad 3...
  analogWrite(led, 100);
  delay(1000);

  // Intensidad 4....
  analogWrite(led, 170);
  delay(1000);

  // Intensidad 5.....
  analogWrite(led, 255);
  delay(1000);
}