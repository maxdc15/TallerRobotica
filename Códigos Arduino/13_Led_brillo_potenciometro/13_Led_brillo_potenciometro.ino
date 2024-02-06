// Brillo de un LED con Potenciómetro

// Se controla el brillo de un LED (conectado a un pin digital PWM) mediante la señal analógica de un potenciómetro y se muestra en el monitor serial

int ledPin = 9;   // Pin digital PWM conectado al LED
int potPin = A0;  // Pin analógico conectado al potenciómetro
float potValor = 0; // Variable para almacenar el valor analógico del potenciómetro

void setup() {
  pinMode(ledPin, OUTPUT);  // Configurar el pin del LED como salida
  Serial.begin(9600); // Iniciar la comunicación serial para ver los datos en el monitor serial
}

void loop() {
  potValor = analogRead(potPin);  // Leer el valor analógico del potenciómetro (rango: 0-1023)
  // La función map() es utilizada para ajustar el rango de entrada al rango de salida deseado.
  int brillo = map(potValor, 0, 1023, 0, 255);  // Mapear el valor del potenciómetro (0-1023) al rango de brillo del LED (0-255)
  analogWrite(ledPin, brillo);  // Aplicar el brillo calculado al LED

  Serial.print("Valor del Potenciometro = "); // Imprimir un mensaje indicando que se está mostrando el valor del potenciómetro
  Serial.println(potValor); // Imprimir el valor analógico del potenciómetro, seguido de un salto de línea
  Serial.print("Valor del Brillo = "); // Imprimir un mensaje indicando que se está mostrando la intensidad de brillo del LED
  Serial.println(brillo);  // Imprimir el valor analógico del brillo, seguido de un salto de línea

  delay(100); // Pequeña pausa para evitar lecturas demasiado rápidas
}
