const int ledPin = 13;

const int ldrPin = A5;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 0) {

digitalWrite(ledPin, HIGH);

Serial.print("Its DARK, please put me in the sunlight.");

Serial.println(ldrStatus);
delay(1000);
}
if (ldrStatus >= 5)
{
  digitalWrite(ledPin, HIGH);

  Serial.print("Its TOO BRIGHT, please stop.");

  Serial.println(ldrStatus);
  delay(1000);
}
if (ldrStatus >= 3 && ldrStatus <= 4) {

digitalWrite(ledPin, LOW);

Serial.print("This is perfect, thank you.");

Serial.println(ldrStatus);
delay(1000);
}

}
