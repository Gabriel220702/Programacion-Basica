int latchPin = 8;
int clockPin = 12;
int dataPin = 11;
int led = 0;

void setup() {
}
 
void loop() {
  pattern1(2);
  pattern2(2);
  pattern3(2);
  pattern4(2);
}
 
void pattern1(int a) {
  for (int x = 0; x < a; x++) {
    led.setAllHigh();
    delay(300);
    led.setAllLow();
    delay(300);
  }
}
void pattern2(int a) {
  for (int x = 0; x < a; x++) {
    for (int a = 0; a < 8; a++) {
      led.set(a, HIGH);
      delay(100);
      led.set(a, LOW);
    }
    for (int b = 7; b > 0; b--) {
      led.set(b, HIGH);
      delay(100);
      led.set(b, LOW);
    }
  }
}
void pattern3(int a) {
  for (int x = 0; x < a; x++) {
    for (int a = 0; a < 8; a++) {
      led.set(a, HIGH);
      delay(100);
    }
    for (int b = 7; b > 0; b--) {
      led.set(b, LOW);
      delay(100);
    }
  }
}
void pattern4(int a) {
  for (int x = 0; x < a; x++) {
    for (int a = 0; a < 8; a++) {
      led.set(a, LOW);
      delay(100);
      led.set(a, HIGH);
    }
    for (int b = 7; b > 0; b--) {
      led.set(b, LOW);
      delay(100);
      led.set(b, HIGH);
    }
  }
}
