// Contador con dos botones

/*
Cambian la secuencia de LEDs que se están encendidos y apagados  
con base en el botón que se ha presionado de alguno de los dos,
donde uno incrementa el contador y otro lo decrementa
*/

// Los pines a los que están conectados los LEDs
int led1 = 4;
int led2 = 5;
int led3 = 6;
// Los pines a los que están conectados los botones
int botonSig = 2; // Botón para incrementar el contador
int botonAnt = 3; // Botón para decrementar el contador
// Contador que llevará el cálculo de incrementos y decrementos
int contador = 0;

void setup() {
  pinMode(botonSig, INPUT);
  pinMode(botonAnt, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  if (digitalRead(botonSig) == HIGH) {
    contador++;   // Incrementar el contador al presionar el botón
    cambiarSec(); // Cambiar la secuencia de LEDs encendidos/apagados
    delay(500);   // Esperar 0.5 segundos para evitar múltiples incrementos por un solo botón
  }

  if (digitalRead(botonAnt) == HIGH) {
    contador--;   // Decrementar el contador al presionar el botón
    cambiarSec(); // Cambiar la secuencia de LEDs encendidos/apagados
    delay(500);   // Esperar 0.5 segundos para evitar múltiples incrementos por un solo botón
  }
}

void cambiarSec() {
  // Se comienza con todos los LEDs apagados
  
  // Asegurarse de que el contador no sea negativo
  if (contador < 0) {
    contador = 0;
  }

  // Determinar la nueva secuencia de LEDs basado en el contador
  int sec = contador % 5; // Dividir el contador por 5 para obtener 5 combinaciones diferentes

  if (sec == 1) {
    // Se enciende solo el led del pin 2
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } else if (sec == 2) {
    // Se enciende solo el led del pin 3
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  } else if (sec == 3) {
    // Se enciende solo el led del pin 4
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  } else if (sec == 4) {
    // Se encienden todos los LEDs
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    // Se apagan todos los LEDs y se reinicia el contador
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
