const int ledPIN=2;

void setup() {
  Serial.begin(9600);
  pinMode(ledPIN, OUTPUT);

}

void loop() {
  digitalWrite(ledPIN, HIGH);


}
