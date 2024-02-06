// Buzzer con botón

/*
Se hace sonar un buzzer con un botón pulldown, es decir que mientras se presiona el botón
el buzzer emitirá un tono, y si el botón no se presiona el buzzer permanecera en silencion
*/

int buzzerPin = 12;   // El pin al que está conectado el buzzer
int boton = 2;  // El pin al que está conectado el botón

void setup() {
  pinMode(boton, INPUT);  // Se define al botón como una entrada ya que recibe una señal
  pinMode(buzzerPin, OUTPUT);   // Se define al buzzer como salida ya que emite una señal
}

void loop() {
  if (digitalRead(boton) == HIGH) {
    // Se utiliza la función tone que requiere del pin del buzzer y la frecuencia del tono a emitir
    tone(buzzerPin, 1000); // Se emite un tono de 1000 Hz cuando se presiona el botón
  }
  else {
    noTone(buzzerPin); // Se apaga el buzzer (no emite ningún tono) cuando el botón está en reposo
  }
}
