// Leer datos de un Potenciómetro

/*
Se hace uso de uno de los pines analógicos de la placa Arduino para leer y mostrar en el monitor serial el valor analógico 
proveniente de un potenciómetro conectado a dicho pin.
Los pines analógicos se identifican por sus nombres A0, A1, A2, A3, A4 y A5 en la placa Arduino.
*/

int potPin = A0; // Pin analógico al que está conectado el potenciómetro (ajustar según sea necesario)

void setup() {
  Serial.begin(9600); // Iniciar la comunicación serial para ver los datos en el monitor serial
}

void loop() {
  float potValor = analogRead(potPin); // Leer el valor analógico del potenciómetro (rango: 0-1023) y guardarlo en una variable
  
  Serial.print("Valor del Potenciómetro = "); // Imprimir un mensaje indicando que se está mostrando el valor del potenciómetro
  Serial.println(potValor); // Imprimir el valor analógico del potenciómetro, seguido de un salto de línea

  delay(100); // Pequeña pausa para evitar lecturas demasiado rápidas
}