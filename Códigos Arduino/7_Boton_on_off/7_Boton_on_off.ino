// Botón On / Off

// Se activa el LED con un botón y se desactiva con otro

int pinBotonOn = 2;   // Botón para encender (utilizar una resistencia de 10K Ohms)
int pinBotonOff = 3;  // Botón para apagar (utilizar una resistencia de 10K Ohms)
int ledPin = 12;      // Pin al que está conectado el LED (utilizar una resistencia de 220 Ohms)

void setup() {
  pinMode(pinBotonOn, INPUT);
  pinMode(pinBotonOff, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(pinBotonOn) == HIGH) {
    digitalWrite(ledPin, HIGH); // Encender el LED al presionar el botón de inicio
  } else if (digitalRead(pinBotonOff) == HIGH) {
    digitalWrite(ledPin, LOW);  // Apagar el LED al presionar el botón de detener
  }
}
