// Simular PWM

/*
Imagina que quieres controlar la intensidad de luz de una linterna, pero en lugar de simplemente encenderla y apagarla, 
quieres que brille más fuerte o más suave. Aquí es donde entra la pulse width modulation (PWM) o Modulación de Ancho de Pulso.
PWM es como una especie de truco que nos permite controlar el brillo de una luz o la velocidad de un motor al encender y apagar muy rápidamente,
como si se tratará de una señal de tipo analógica, nos permiten medir y representar cosas de manera más precisa, como si estuviéramos 
usando una regla que nos da medidas más exactas en lugar de solo números enteros, 
mientras que una señal digital solo puede tener dos estados: encendido o apagado.
*/

int led1 = 9;                // Pin al que está conectado el LED 1
int led2 = 10;               // Pin al que está conectado el LED 2
int led3 = 11;               // Pin al que está conectado el LED 3

void setup() {
  // Establecer pines de los LEDs como salidas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {

  // Porcentaje del ciclo de trabajo (ajustar según sea necesario)
  int cicloTrabajo = 50;  // En este ejemplo, está establecido en 50%
  
  // Calcula el tiempo en milisegundos para el ciclo de trabajo
  int onTime = map(cicloTrabajo, 0, 100, 0, 1000); // La función map ajusta el porcentaje del ciclo de trabajo al rango de 0 a 1000 milisegundos
  int offTime = 1000 - onTime;  // Calcula el tiempo restante (apagado), que es la diferencia entre 1000 milisegundos y el tiempo de encendido

  // Enciende los pines durante el tiempo de ciclo de trabajo
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(onTime);  // Espera el tiempo de encendido.

  // Apaga los pines durante el tiempo restante
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(offTime); // Espera el tiempo restante (apagado)      
}
