// Brillo de un LED PWM

/*
Se muestra como atenuar un LED (como lo hacian las pantallas antiguas al encenderse o apagarse), mediante la función 'analogWrite()'
la cual utiliza la capacidad pulse width modulation (PWM), disponible en algunos pines de las placas Arduino.
Los pines con la capacidad PWM se encuentra representados por el signo "~", como los pines ~3, ~5, ~6, ~9, ~10 y ~11.
*/

int led1 = 9;                // Pin PWM al que está conectado el LED 1
int led2 = 10;               // Pin PWM al que está conectado el LED 2
int led3 = 11;               // Pin PWM al que está conectado el LED 3
int brillo = 0;              // Que tan brillante se encuetran los LEDs
int desvanecimiento = 5;     // Cantidad en que aumenta o reduce el brillo de los LEDs

void setup() {
  // Indicar los pines de los LEDs como salidas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Establecer el brillo de los LEDs
  // La función 'analogWrite()' utiliza la modulación de ancho de pulso (PWM) para controlar la intensidad luminosa del LED.
  analogWrite(led1, brillo);
  analogWrite(led2, brillo);
  analogWrite(led3, brillo);

  // Cambiar el brillo a lo largo de bucle
  brillo = brillo + desvanecimiento;

  // En lugar de aumentar el brillo, ahora se reduce
  if (brillo <= 0 || brillo >= 255) {
    desvanecimiento = -desvanecimiento;
  }
  delay(50);
}
