int LED1_R = 3;
int LED2_R = 5;
int LED2_G = 6;
int LED3_G = 9;
int LED2_B = 2;
int LED3_B = 10;
int Buz_zer = 11;

void setup()
{
  pinMode(LED1_R, OUTPUT);
  pinMode(LED2_R, OUTPUT);
  pinMode(LED2_G, OUTPUT);
  pinMode(LED3_G, OUTPUT);
  pinMode(LED2_B, OUTPUT);
  pinMode(LED3_B, OUTPUT);
  pinMode(Buz_zer, OUTPUT);
}

void loop()
{
  analogWrite(LED1_R, 255);
  analogWrite(Buz_zer, 0);
  delay(1000);


  analogWrite(LED1_R, 0);
  delay(100);

  analogWrite(Buz_zer, 100);
  delay(100);
  analogWrite(Buz_zer, 0);

  digitalWrite(LED2_R, HIGH);
  digitalWrite(LED2_B, HIGH);
  delay(1000);

  digitalWrite(LED2_R, LOW);
  digitalWrite(LED2_B, LOW);

  analogWrite(Buz_zer, 100);
  delay(100);
  analogWrite(Buz_zer, 0);

  analogWrite(LED3_B, 200);
  analogWrite(LED3_G, 200);
  delay(1000);

  digitalWrite(LED3_B, LOW);
  digitalWrite(LED3_G, LOW);

  analogWrite(Buz_zer, 100);
  delay(100);
}