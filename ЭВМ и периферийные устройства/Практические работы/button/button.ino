void setup() {
  pinMode(D1, INPUT);
  pinMode(D0, OUTPUT);
}

void loop() {
  digitalWrite(D0, !digitalRead(D1));
}