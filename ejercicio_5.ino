int rojo1 = 3;
int verde1 = 5;
int azul1 = 6;

int rojo2 = 9;
int verde2 = 10;
int azul2 = 11;

void setup() {

  pinMode(rojo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);

  pinMode(rojo2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);
}

void loop() {

  // -------- ROJO --------
  analogWrite(rojo1, 255);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);

  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);

  // -------- CIAN --------
  analogWrite(rojo1, 0);
  analogWrite(verde1, 255);
  analogWrite(azul1, 255);

  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);

  // -------- VERDE --------
  analogWrite(rojo1, 0);
  analogWrite(verde1, 255);
  analogWrite(azul1, 0);

  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);

  // -------- MAGENTA --------
  analogWrite(rojo1, 255);
  analogWrite(verde1, 0);
  analogWrite(azul1, 255);

  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);

  // -------- AZUL --------
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 255);

  // LED 2 apagado
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);


  // -------- BLANCO --------
  // Rojo + Verde + Azul
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 255);
  analogWrite(azul1, 255);

  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);


  // -------- AMARILLO --------
  // Rojo + Verde
  analogWrite(rojo1, 255);
  analogWrite(verde1, 255);
  analogWrite(azul1, 0);
  
  // LED 2 apagado
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);
  
   // -------- ROJO --------
  // LED 1 prendido en rojo
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);

  // LED 2 apagado
  analogWrite(rojo2, 255);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  delay(1000);


  // -------- CIAN --------
  // Verde + Azul
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);

  // LED 2 apagado
  analogWrite(rojo2, 0);
  analogWrite(verde2, 255);
  analogWrite(azul2, 255);

  delay(1000);


  // -------- VERDE --------
  // LED 1 apagado
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);

  // LED 2 verde
  analogWrite(rojo2, 0);
  analogWrite(verde2, 255);
  analogWrite(azul2, 0);

  delay(1000);


  // -------- MAGENTA --------
  // Rojo + Azul
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);

  analogWrite(rojo2, 255);
  analogWrite(verde2, 0);
  analogWrite(azul2, 255);

  delay(1000);


  // -------- AZUL --------
  // LED 1 azul
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);

  // LED 2 apagado
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 255);

  delay(1000);


  // -------- BLANCO --------
  // Rojo + Verde + Azul
  
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  analogWrite(azul2, 0);

  analogWrite(rojo2, 255);
  analogWrite(verde2, 255);
  analogWrite(azul2, 255);

  delay(1000);


  // -------- AMARILLO --------
  // Rojo + Verde
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  analogWrite(azul1, 0);
  
  // LED 2 apagado
  analogWrite(rojo2, 255);
  analogWrite(verde2, 255);
  analogWrite(azul2, 0);

  delay(1000);
}

  
  
  
 