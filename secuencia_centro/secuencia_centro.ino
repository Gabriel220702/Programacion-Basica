int pinData=4;
int pinLatch=5;
int pinClock=6;
#define TIEMPO 50

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
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);

  if(analogRead(A0)>50 && analogRead(A0)<400){
    ledWrite(B00011000); delay(TIEMPO);
    } 
   
  if(analogRead(A0)>255 && analogRead(A0)<420){
    ledWrite(B00111100); delay(TIEMPO);
    }
    
  if(analogRead(A0)>510 && analogRead(A0)<460){
    ledWrite(B01111110); delay(TIEMPO);
    }
    
  if(analogRead(A0)>735 && analogRead(A0)<500){
    ledWrite(B11111111); delay(TIEMPO);
    }
    sensorValue<50;
    ledWrite(B00000000); delay(100);
}
