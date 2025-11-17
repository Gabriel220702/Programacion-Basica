int pinData  = 4;
int pinLatch = 5;
int pinClock = 6;
#define TIEMPO 650

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

   ledWrite(B10000000); delay(TIEMPO);
   ledWrite(B01000000); delay(TIEMPO);
   ledWrite(B00100000); delay(TIEMPO);
   ledWrite(B00010000); delay(TIEMPO);
   ledWrite(B00001000); delay(TIEMPO);
   ledWrite(B00000100); delay(TIEMPO);
   ledWrite(B00000010); delay(TIEMPO);
   ledWrite(B00000001); delay(TIEMPO);
   ledWrite(B00000011); delay(TIEMPO);
   ledWrite(B00000110); delay(TIEMPO);
   ledWrite(B00001100); delay(TIEMPO);
   ledWrite(B00011000); delay(TIEMPO);
   ledWrite(B00110000); delay(TIEMPO);
   ledWrite(B01100000); delay(TIEMPO);
   ledWrite(B11000000); delay(TIEMPO);
   ledWrite(B11100000); delay(TIEMPO);
   ledWrite(B01110000); delay(TIEMPO);
   ledWrite(B00111000); delay(TIEMPO);
   ledWrite(B00011100); delay(TIEMPO);
   ledWrite(B00001110); delay(TIEMPO);
   ledWrite(B00000111); delay(TIEMPO);
   ledWrite(B00001111); delay(TIEMPO);
   ledWrite(B00011110); delay(TIEMPO);
   ledWrite(B00111100); delay(TIEMPO);
   ledWrite(B01111000); delay(TIEMPO);
   ledWrite(B11110000); delay(TIEMPO);
   ledWrite(B11100000); delay(TIEMPO);
   ledWrite(B11000000); delay(TIEMPO);
   ledWrite(B10000000); delay(TIEMPO);
   

   
}
