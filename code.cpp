const int powerLatch = 5;
const int ledPin = 4;

void setup() {
  pinMode(powerLatch, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(powerLatch, HIGH);  // Keep power ON
  digitalWrite(ledPin, HIGH);      // LED ON

  delay(10000);                    // Wait 10 seconds

  digitalWrite(ledPin, LOW);       // LED OFF
  digitalWrite(powerLatch, LOW);   // Power OFF
}

void loop() {
  // This won't run. Arduino turns off before loop starts again.
}