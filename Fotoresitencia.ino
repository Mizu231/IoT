int pinLDR = A0;
int pinLED = 8;
int umbral = 500;

void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(pinLDR, INPUT);
}

void loop() {
  int valor = analogRead(pinLDR);
  serial.print(valor);

  if (valor < umbral) {
    digitalWrite(pinLED, HIGH);
  } else {
    digitalWrite(pinLED, LOW);
  }

  delay(500);
}

