void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // acende
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW); // apaga
  delay(1000);
}
