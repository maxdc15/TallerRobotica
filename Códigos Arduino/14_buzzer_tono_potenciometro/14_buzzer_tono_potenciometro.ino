// Tono de un buzzer Potenciómetro

// Se controla el tono de un buzzer mediante la señal analógica de un potenciómetro y se muestra en el monitor serial

int buzzerPin = 9;  // Pin digital PWM conectado al buzzer
int potPin = A0;    // Pin analógico conectado al potenciómetro
float potValor = 0;   // Variable para almacenar el valor analógico del potenciómetro

void setup() {
  pinMode(buzzerPin, OUTPUT);   // Configurar el pin del buzzer como salida
  Serial.begin(9600); // Iniciar la comunicación serial para ver los datos en el monitor serial
}

void loop() {
  potValor = analogRead(potPin);  // Leer el valor analógico del potenciómetro (rango: 0-1023)
  float frecuencia = map(potValor, 0, 1023, 100, 1000);  // Mapear el valor del potenciómetro (0-1023) al rango de frecuencia del tono (100-1000 Hz)
  tone(buzzerPin, frecuencia);  // Generar un tono en el buzzer con la frecuencia calculada

  Serial.print("Valor del Potenciometro = "); // Imprimir un mensaje indicando que se está mostrando el valor del potenciómetro
  Serial.println(potValor); // Imprimir el valor analógico del potenciómetro, seguido de un salto de línea
  Serial.print("Frecuencia del tono = "); // Imprimir un mensaje indicando que se muestra el tono de la frecuencia emitida
  Serial.println(frecuencia);  // Imprimir el valor analógico de la frecuencia, seguido de un salto de línea

  delay(100); // Pequeña pausa para evitar lecturas demasiado rápidas
}
