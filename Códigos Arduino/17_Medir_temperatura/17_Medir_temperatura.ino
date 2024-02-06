// Medir temperatura

// Se lee el valor analógico de un sensor de temperatura y se muestra en el monitor serial como un valor en grados Celsius

int sensorPin = A0;     // Pin analógico conectado al sensor de temperatura
float temperatura = 0;  // Variable para almacenar el valor capturado por el sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensorValor = analogRead(sensorPin);  // Leer el valor analógico del sensor
  temperatura = (sensorValor / 1023.0) * 500; // Fórmula aproximada para convertir el valor analógico a temperatura en grados Celsius
  // Impresión de la temperatura en el monitor serial
  Serial.print("Temperatura = ");
  Serial.print(temperatura);
  Serial.println(" °C");
  delay(1000);
}
