// Encender LED de arduino (blink)

// Para interactuar con LED incorporado de la placa Arduino Uno, conectado al pin digital 13, 
// se utiliza la constante 'LED_BUILTIN'

// En la función 'setup' se ejecuta una vez cuando la placa Arduino se enciende o se reinicia
// Es el lugar donde se realizan configuraciones iniciales
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Inicializar el pin del LED incorporado en la placa como salida
}

// Después de que la función setup se ejecuta, la función loop se ejecuta continuamente en un bucle
// Todo lo que está dentro de esta función se repite una y otra vez
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Encender el LED incorporado
  delay(1000);                      // Esperar 1000 milisegundos (1 segundo)
  digitalWrite(LED_BUILTIN, LOW);   // Apagar el LED incorporado
  delay(1000);                      // Esperar 1000 milisegundos (1 segundo)
}
