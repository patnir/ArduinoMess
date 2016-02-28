const int ledPin = 13;
const int button = 2;
void setup() {
  // put your setup code here, to run once:
  // Uses the pin as output
  pinMode(ledPin, OUTPUT);
  // button is used as input
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // if the button is not pressed, turn the light off
   if (digitalRead(button) == 1) {
      digitalWrite(ledPin, LOW);
   }
   //delay to improve consistency
   delay(30);
   // if the button is pressed, turn the light off
   if (digitalRead(button) == 0) {
    digitalWrite(ledPin, HIGH);
   }
   delay(30);
}
