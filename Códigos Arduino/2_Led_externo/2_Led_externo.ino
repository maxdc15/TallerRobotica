// Encender un led externo de arduino

// A diferencia del programa Blink, aquí se define un pin digital distinto al cual 
// esté conectado (mediante una resistencia de alrededor de 220 Ohms) el LED externo

// Definir el número de pin donde está conectado el LED externo
const int ledPin = 9; // Cambia el número del pin digital según tu conexión (utilizar una resistencia de 200 Ohms)


void setup() {
  pinMode(ledPin, OUTPUT);     // Configurar el pin del LED externo como una salida
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Encender el LED externo
  delay(1000);                 // Esperar 1000 milisegundos (1 segundo)
  digitalWrite(ledPin, LOW);   // Apagar el LED externo
  delay(1000);                 // Esperar 1000 milisegundos (1 segundo)
}
