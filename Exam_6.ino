int score = 15;

void setup() {
    Serial.begin(115200);

    if (score >= 0) {
        Serial.println("Positive");
    } else if (score <= 0) {
        Serial.println("Negative");
    } else if (score = 0) {
        Serial.println("Zero");
    }
}

void loop() {
}