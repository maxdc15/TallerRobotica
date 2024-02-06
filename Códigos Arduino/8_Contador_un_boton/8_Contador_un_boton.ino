// Contador con un botón

/*
Cambian la secuencia de LEDs que se están encendidos y apagados  
con base en el número de veces que se ha presionado un botón
*/

// Los pines a los que están conectados los LEDs
int led1 = 3;
int led2 = 4;
int led3 = 5;
// El pin al que está conectado el botón
int boton = 2;   
// Contador que llevará el número de veces que se ha presiona el botón 
int contador = 0;

void setup() {
  pinMode(boton, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  if (digitalRead(boton) == HIGH) {
    contador++;   // Incrementar el contador al presionar el botón
    cambiarSec(); // Cambiar la secuencia de LEDs encendidos/apagados
    delay(500);   // Esperar 0.5 segundos para evitar múltiples incrementos por un solo botón
  }
}

void cambiarSec() {
  // Se comienza con todos los LEDs apagados
  
  // Determinar la nueva secuencia de LEDs basado en el contador
  int sec = contador % 5; // Dividir el contador por 5 para obtener 5 combinaciones diferentes

  if (sec == 1) {
    // Si el botón se presiona una vez, se enciende solo el led del pin 2
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } else if (sec == 2) {
    // Si el botón se presiona dos veces, se enciende solo el led del pin 3
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  } else if (sec == 3) {
    // Si el botón se presiona tres veces, se enciende solo el led del pin 4
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  } else if (sec == 4) {
    // Si el botón se presiona cuatro veces, se encienden todos los LEDs
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    // Si el botón se presiona cinco veces, se apagan todos los LEDs y se reinicia el contador
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
