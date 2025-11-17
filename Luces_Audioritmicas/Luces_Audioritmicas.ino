#include <SD.h>

File dataFile;

int pinData;
int pinLatch;
int pinClock;

int pinSequence;
int pinOther;

int sensorValue = analogRead(A0);
#define Time 50

void ledWrite(int Led)
{
  shiftOut(pinData, pinClock,  LSBFIRST, Led);
  digitalWrite(pinLatch, HIGH);
  digitalWrite(pinLatch, LOW);
}

void setup()
{
  Serial.begin(9600);
  Serial.print(F("Initializing SD..."));
  if (!SD.begin(10))
  {
    Serial.println(F("Failed to start"));
    return;
  }
    Serial.println(F("Successfully started"));

dataFile=SD.open("sound2.txt"); 

  if (dataFile)
    {
      pinData=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';
      pinLatch=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';
      pinClock=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';
      pinSequence=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';
      pinOther=dataFile.read()-'0';

        Serial.println(pinData);
        Serial.println(pinLatch);
        Serial.println(pinClock);
        Serial.println(pinSequence);
        dataFile.close();
    
        pinMode(pinData,OUTPUT);
        pinMode(pinLatch,OUTPUT);
        pinMode(pinClock,OUTPUT);
        
  }
  else
  {
    Serial.println(F("Error opening file"));
  }
}

void loop()
{
  switch (pinSequence)
  {
    
  case 1:
        if(analogRead(A0)>50 && analogRead(A0)<400){
          ledWrite(B00000011); delay(Time);
          } 
         
        if(analogRead(A0)>255 && analogRead(A0)<420){
          ledWrite(B00001111); delay(Time);
          }
          
        if(analogRead(A0)>510 && analogRead(A0)<460){
          ledWrite(B00111111); delay(Time);
          }
          
        if(analogRead(A0)>735 && analogRead(A0)<500){
          ledWrite(B11111111); delay(Time);
          }
          sensorValue<50;
          ledWrite(B00000000); delay(10); 
  break;

  case 2:
        if(analogRead(A0)>50 && analogRead(A0)<400){
          ledWrite(B00011000); delay(Time);
          } 
         
        if(analogRead(A0)>255 && analogRead(A0)<420){
          ledWrite(B00111100); delay(Time);
          }
          
        if(analogRead(A0)>510 && analogRead(A0)<460){
          ledWrite(B01111110); delay(Time);
          }
          
        if(analogRead(A0)>735 && analogRead(A0)<500){
          ledWrite(B11111111); delay(Time);
          }
          sensorValue<0;
          ledWrite(B00000000); delay(10);

  break;

  case 3:
        if(analogRead(A0)>50 && analogRead(A0)<400){
          ledWrite(B11000000); delay(Time);
          } 
         
        if(analogRead(A0)>255 && analogRead(A0)<420){
          ledWrite(B11110000); delay(Time);
          }
          
        if(analogRead(A0)>510 && analogRead(A0)<460){
          ledWrite(B11111100); delay(Time);
          }
          
        if(analogRead(A0)>735 && analogRead(A0)<500){
          ledWrite(B11111111); delay(Time);
          }
          sensorValue<50;
          ledWrite(B00000000); delay(10);
   break;
 }
}
