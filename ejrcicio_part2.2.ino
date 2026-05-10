int led1 = 2;
int led2 = 3;
int led3 = 5;
int led4 = 6;
int led5 = 9;
int led6 = 10;
int led7 = 11;
int led8 = 12;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop() {

  digitalWrite(led1, LOW);

  analogWrite(led2, 20);

  analogWrite(led3, 40);

  analogWrite(led4, 80);

  analogWrite(led5, 100);

  analogWrite(led6, 150);

  analogWrite(led7, 180);

  digitalWrite(led8, HIGH);

  delay(1000);
}
