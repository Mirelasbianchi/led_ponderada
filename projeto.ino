// --- Projeto: LED Pisca-Pisca Interno ---
// Este código utiliza o LED interno do Arduino Uno (geralmente conectado ao pino 13)
// para criar o efeito de pisca-pisca, acendendo e apagando o LED em intervalos de 1 segundo.

// A função setup() é executada apenas uma vez,
// logo que o Arduino é ligado ou reiniciado.
void setup() {
  // Define o LED interno (LED_BUILTIN) como uma saída digital (OUTPUT),
  // permitindo que o programa envie sinais elétricos para controlá-lo.
  pinMode(LED_BUILTIN, OUTPUT);
}

// A função loop() é executada repetidamente em um ciclo infinito.
// Aqui, o LED será aceso e apagado continuamente.
void loop() {
  // Envia um sinal ALTO (HIGH) para o LED interno,
  // fazendo-o acender.
  digitalWrite(LED_BUILTIN, HIGH);

  // Mantém o LED aceso por 1 segundo (1000 milissegundos).
  delay(1000);

  // Envia um sinal BAIXO (LOW) para o LED interno,
  // apagando o LED.
  digitalWrite(LED_BUILTIN, LOW);

  // Mantém o LED apagado por 1 segundo antes de repetir o ciclo.
  delay(1000);
}
