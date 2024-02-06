// Secuencias de LED

// Programar varios LEDs conectados al Arduino Uno mediante una protoboard para crear una secuencia de luces

// Definición de pines para los LEDs conectados del pin 2 al 4
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;

void setup() {
  // Configurar los pines de los LEDs como salidas
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  // Encender los LEDs en secuencia
  
  digitalWrite(pin2, HIGH);
  delay(200);  // Cambiar el valor para ajustar la velocidad
  digitalWrite(pin2, LOW);

  digitalWrite(pin3, HIGH);
  delay(200);
  digitalWrite(pin3, LOW);

  digitalWrite(pin4, HIGH);
  delay(200);
  digitalWrite(pin4, LOW);
  

  // Apagar los LEDs en secuencia

  digitalWrite(pin4, HIGH);
  delay(200);
  digitalWrite(pin4, LOW);

  digitalWrite(pin3, HIGH);
  delay(200);
  digitalWrite(pin3, LOW);
  
  digitalWrite(pin2, HIGH);
  delay(200);
  digitalWrite(pin2, LOW);
}
