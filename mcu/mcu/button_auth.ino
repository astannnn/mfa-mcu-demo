const int buttonPin = 2;
unsigned long pressStart = 0;
unsigned long pressDuration = 0;

const unsigned long minPress = 2000;
const unsigned long maxPress = 3000;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Ready for button press...");
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    pressStart = millis();
    while (digitalRead(buttonPin) == LOW) {}
    pressDuration = millis() - pressStart;

    Serial.print("Press duration: ");
    Serial.print(pressDuration);
    Serial.println(" ms");

    if (pressDuration >= minPress && pressDuration <= maxPress) {
      Serial.println("✅ Access granted");
    } else {
      Serial.println("❌ Access denied");
    }

    delay(1000);
  }
}
