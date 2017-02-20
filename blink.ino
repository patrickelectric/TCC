/*
  Blink
  Liga o LED por um segundo e desativa por um segundo, repetitivamente.
 */

void setup() {
	// Inicializa o pino digital como saida.
	// Pino 13 conectado com o LED:
	pinMode(13, OUTPUT);
}

void loop() {
	digitalWrite(13, HIGH);   // Liga o LED
	delay(1000);              // Espera por um segundo
	digitalWrite(13, LOW);    // Desativa o LED
	delay(1000);              // Espera por um segundo
}
