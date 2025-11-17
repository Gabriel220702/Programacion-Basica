int pinData  = 11;
int pinLatch = 8;
int pinClock = 12;
#define TIEMPO 150

void ledWrite(int Led){
   shiftOut(pinData, pinClock, LSBFIRST, Led);
   digitalWrite(pinLatch, HIGH);
   digitalWrite(pinLatch, LOW);
}

void setup(){
   pinMode(pinData, OUTPUT);
   pinMode(pinLatch, OUTPUT);
   pinMode(pinClock, OUTPUT);
}

void loop(){
   ledWrite(B00000000); delay(TIEMPO);
   ledWrite(B10000000); delay(TIEMPO);
   ledWrite(B11000000); delay(TIEMPO);
   ledWrite(B11100000); delay(TIEMPO);
   ledWrite(B11110000); delay(TIEMPO);
   ledWrite(B11111000); delay(TIEMPO);
   ledWrite(B11111100); delay(TIEMPO);
   ledWrite(B11111110); delay(TIEMPO);
   ledWrite(B11111111); delay(TIEMPO);
   ledWrite(B01111111); delay(TIEMPO);
   ledWrite(B00111111); delay(TIEMPO);
   ledWrite(B00011111); delay(TIEMPO);
   ledWrite(B00001111); delay(TIEMPO);
   ledWrite(B00000111); delay(TIEMPO);
   ledWrite(B00000011); delay(TIEMPO);
   ledWrite(B00000001); delay(TIEMPO);
   ledWrite(B00000000); delay(TIEMPO);

   delay(1000);
}
