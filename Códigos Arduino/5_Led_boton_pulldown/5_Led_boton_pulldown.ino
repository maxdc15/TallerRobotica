// Led + Botón pulldown

/*
Con un botón pulldown, cuando el circuito está en reposo (el botón no está presionado),
el voltaje que llegará al LED será de 0V (LOW), mientras que si pulsamos el botón, habrá corriente
y el voltaje que llegará al LED será de 5V (HIGH)
*/

// Definir el número de pin al que están conectados tanto el LED como el botón
int led = 12;   // El pin al que está conectado el LED (utilizar una resistencia de 220 Ohms)
int boton = 2;  // El pin al que está conectado el botón (utilizar una resistencia de 10K Ohms)

void setup() {
  pinMode(boton, INPUT);  // Se define al botón como una entrada ya que recibe una señal
  pinMode(led, OUTPUT);   // Se define al LED como salida ya que emite una señal
}

void loop() {
  if (digitalRead(boton) == HIGH) {
    digitalWrite(led, HIGH); // Si el botón está precionado (HIGH), enciende el LED
  }
  else {
    digitalWrite(led, LOW); // Si el botón no está precionado (LOW), apaga el LED
  }
}
