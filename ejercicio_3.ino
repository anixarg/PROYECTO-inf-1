void setup()
{
  // Configuramos los pines como salidas
  pinMode(1, OUTPUT); // LED impar 1
  pinMode(2, OUTPUT); // LED par 1 
  pinMode(3, OUTPUT); // LED impar 2
  pinMode(4, OUTPUT); // LED par 2
  pinMode(5, OUTPUT); // LED impar 3
  pinMode(6, OUTPUT); // LED par 3
  pinMode(7, OUTPUT); // LED impar 4
  pinMode(8, OUTPUT); // LED par 4
  pinMode(9, OUTPUT); // LED impar 5
  pinMode(10, OUTPUT); // LED par 5
}

void loop()
{
  
  // Encender los LED impares
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  delay(2000); // esperar 2 segundos

  // Apagar los LED impares
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);

  // Encender los LED pares
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(2000); // esperar 2 segundos

  // Apagar los LED pares
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
}