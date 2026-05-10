int rojo = 3;
int verde = 5;
int azul = 6;

void setup() {

  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  
  // cian suave
  analogWrite(rojo, 0);
  analogWrite(verde, 80);
  analogWrite(azul, 80);
  delay(500);

  // cian medio
  analogWrite(verde, 150);
  analogWrite(azul, 150);
  delay(500);

  // cian fuerte
  analogWrite(verde, 255);
  analogWrite(azul, 255);
  delay(500);
  
   // rojo suave
  analogWrite(rojo, 80);
  analogWrite(verde, 0);
  analogWrite(azul, 0);
  delay(500);
  
 // rojo medio
  analogWrite(rojo, 150);
  delay(500);

  // rojo fuerte
  analogWrite(rojo, 255);
  delay(500);
 
  // amarillo suave
  analogWrite(rojo, 80);
  analogWrite(verde, 80);
  analogWrite(azul, 0);
  delay(1000);

  // amarillo medio
  analogWrite(rojo, 150);
  analogWrite(verde, 150);
  delay(500);

  // amarillo fuerte
  analogWrite(rojo, 255);
  analogWrite(verde, 255);
  delay(500);
}

