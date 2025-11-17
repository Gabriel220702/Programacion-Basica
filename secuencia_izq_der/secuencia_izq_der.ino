int pinData=4;
int pinLatch=5;
int pinClock=6;
#define TIEMPO 40

void ledWrite(int Led){
  shiftOut(pinData, pinClock,  LSBFIRST, Led);
  digitalWrite(pinLatch, HIGH);
  digitalWrite(pinLatch, LOW);
}

void setup() {
  pinMode(pinData, OUTPUT);
  pinMode(pinLatch, OUTPUT);
  pinMode(pinClock, OUTPUT);
 
  Serial.begin(9600);
}


void loop() {
ledWrite(B00000000);
  int sensorValue = analogRead(A8);
  
  Serial.println(sensorValue);

  if(analogRead(A8)>50 && analogRead(A8)<400){
    ledWrite(B11000000); delay(TIEMPO);
    } 
   
  if(analogRead(A8)>255 && analogRead(A8)<420){
    ledWrite(B11110000); delay(TIEMPO);
    }
    
  if(analogRead(A8)>510 && analogRead(A8)<460){
    ledWrite(B11111100); delay(TIEMPO);
    }
    
  if(analogRead(A8)>735 && analogRead(A8)<500){
    ledWrite(B11111111); delay(TIEMPO);
    }
    sensorValue<50;
    ledWrite(B00000000); delay(100);
}
