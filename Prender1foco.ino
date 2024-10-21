int pinRelay = 7;

void setup() {
  pinMode(pinRelay, OUTPUT);
  digitalWrite(pinRelay, LOW);
}

void loop() {
  digitalWrite(pinRelay, HIGH);
  delay(5000);
}

