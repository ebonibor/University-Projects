void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, INPUT);
}

PinStatus lastVal = HIGH;
int i = 0;

void loop() {
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);

  PinStatus curVal = digitalRead(D3);

  if (curVal != lastVal) {
    lastVal = curVal;
    i = (i + !curVal) % 3;
  }
  
  digitalWrite(i, HIGH);
  delay(50);
}
