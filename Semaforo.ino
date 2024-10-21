int ledRojo = 8;
int ledAmarillo = 9;
int ledVerde = 10;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  digitalWrite(ledRojo, HIGH);
  delay(5000);
  digitalWrite(ledRojo, LOW);

  for (int i = 0; i < 5; i++) {  // Parpadeo del amarillo 5 veces
    digitalWrite(ledAmarillo, HIGH);
    delay(500);
    digitalWrite(ledAmarillo, LOW);
    delay(500);
  }

  digitalWrite(ledVerde, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);
}

