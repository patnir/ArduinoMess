const int ledPin = 13;
const int button = 2;
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   if (digitalRead(button) == 1) {
      digitalWrite(ledPin, LOW);
   }
   delay(30);
   if (digitalRead(button) == 0) {
    digitalWrite(ledPin, HIGH);
   }
   delay(30);
}
