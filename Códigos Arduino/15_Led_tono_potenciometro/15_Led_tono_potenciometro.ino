// Tono / Color de un LED RGB mediante un potenciómetro

// Se controla el color de un LED RGB (con sus patas conectadas a pines digitales PWM) mediante la señal analógica de un potenciómetro y se muestra en el monitor serial

int potPin = A0;    // Pin analógico para el potenciómetro
int redPin = 9;     // Pin digital PWM para la componente roja del LED RGB
int greenPin = 10;  // Pin digital PWM para la componente verde del LED RGB
int bluePin = 11;   // Pin digital PWM para la componente azul del LED RGB
float potValor = 0;   // Variable para almacenar el valor del potenciómetro

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  potValor = analogRead(potPin);
  float tono = map(potValor, 0, 1023, 0, 255);
  cambiarColor(tono);   // Llamada a la función para cambiar el color del LED RGB según la posición del potenciómetro
  
}

// Función para cambiar el color del LED RGB según la posición del potenciómetro
// se recibe un parámetro (variable numérica), pero no regresa nada
void cambiarColor(float tono) {
  if (potValor >= 0 && potValor <= 341) {
    // Cambiar a rojo
    analogWrite(redPin, tono);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  } else if (potValor > 341 && potValor <= 682) {
    // Cambiar a verde
    analogWrite(redPin, 0);
    analogWrite(greenPin, tono);
    analogWrite(bluePin, 0);
  } else {
    // Cambiar a azul
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, tono);
  }

  Serial.print("Valor del Potenciometro = "); // Imprimir un mensaje indicando que se está mostrando el valor del potenciómetro
  Serial.println(potValor); // Imprimir el valor analógico del potenciómetro, seguido de un salto de línea
  Serial.print("Valor del tono = "); // Imprimir un mensaje indicando que se está mostrando la intensidad del tono del LED
  Serial.println(tono);  // Imprimir el valor analógico del tono, seguido de un salto de línea

  delay(100);
}
