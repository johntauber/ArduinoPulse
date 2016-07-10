const int buttonPin = 7;    // the pin that the pushbutton is attached to
const int ledPin = 12;       // the pin that the LED is attached to

int pulseNum = 7; // defines the number 


void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {

  if (digitalRead(buttonPin) == HIGH) {
    for (int i = 1; i <= 7; i++) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(200);
    }
  }
}
