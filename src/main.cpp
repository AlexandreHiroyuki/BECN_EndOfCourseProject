#include <Arduino.h>

// Sensor de luz com LDR

int ldrPin = PC0;  // LDR no pino analígico 0
int ldrValor = 0;  // Valor lido do LDR

void setup() {
  Serial.begin(9600);    // Inicia a comunicação serial
  Serial.setTimeout(1);  // Define o tempo de timeout da comunicação serial
}

void loop() {
  // ler o valor do LDR
  ldrValor = analogRead(ldrPin);  // O valor lido será entre 0 e 1023

  // imprime o valor lido do LDR no monitor serial
  Serial.println(ldrValor);
  delay(250);
}
