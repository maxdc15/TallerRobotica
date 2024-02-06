// Led + Botón pullup

/*
Con un botón pullup, cuando el circuito está en reposo (el botón no está presionado), habrá corriente y
el voltaje que llegará al LED será de 5V (HIGH), mientras que si pulsamos el botón, el voltaje que
llegará al LED será de 0V (LOW)
*/

// Definir el número de pin al que están conectados tanto el LED como el botón
int led = 12;   // El pin al que está conectado el LED (utilizar una resistencia de 220 Ohms)
int boton = 2;  // El pin al que está conectado el botón (utilizar una resistencia de 10K Ohms)

void setup() {
  pinMode(boton, INPUT_PULLUP);  // Se define al botón como una entrada con una resistencia interna ya que recibe una señal 
  pinMode(led, OUTPUT);   // Se define al led como salida ya que muestra una señal
}

void loop() {
  if (digitalRead(boton) == HIGH) {
    digitalWrite(led, HIGH); // Si el botón no está precionado (HIGH), enciende el LED
  }
  else {
    digitalWrite(led, LOW); // Si el botón está precionado (LOW), apaga el LED
  }
}
