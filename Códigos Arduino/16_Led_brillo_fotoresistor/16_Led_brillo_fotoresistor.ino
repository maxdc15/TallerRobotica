// Brillo de un LED mediante una fotoresistencia

// Se controla el brillo de un LED (conectado a un pin digital PWM) mediante la señal analógica de una fotoresistencia

int ledPin = 9;               // Pin digital PWM conectado al LED  
int fotoresistorPin = A0;     // Pin analógico conectado al fotoresistor
float fotoresistorValor = 0;  // Variable para almacenar el valor de la fotoresistencia

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  fotoresistorValor = analogRead(fotoresistorPin);        // Lectura del valor analógico de la fotoresistencia
  float brillo = map(fotoresistorValor, 0, 1023, 0, 255);
  ledBrillo(brillo);
  
}

void ledBrillo(float brillo) {
  analogWrite(ledPin, brillo);  // Aplicar el brillo calculado al LED

  Serial.print("Valor del Fotoresistor = "); // Imprimir un mensaje indicando que se está mostrando el valor del fotoresistor
  Serial.println(fotoresistorValor); // Imprimir el valor analógico del fotoresistor, seguido de un salto de línea
  Serial.print("Valor del Brillo = "); // Imprimir un mensaje indicando que se está mostrando la intensidad de brillo del LED
  Serial.println(brillo);  // Imprimir el valor analógico del brillo, seguido de un salto de línea

  delay(100);
}
