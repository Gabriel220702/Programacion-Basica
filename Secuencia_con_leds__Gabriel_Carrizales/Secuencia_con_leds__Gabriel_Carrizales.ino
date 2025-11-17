int latchPin = 8;
int clockPin = 12;
int dataPin = 11;

byte leds = 0;

void setup() 
{
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

void loop() 
{
  led=0;
  updateShiftRegister();
  int i, velocidad;
  
  for (i=8;i>=0;i--)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }


  for (i=0;i<=6;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
   }


  for (i<=8;i>=0;i--)
   {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+2,LOW);
   }

   
  for (i=0;i<=8;i++)
   {
    digitalWrite(i,HIGH);
    digitalWrite(i+3,HIGH);
    digitalWrite(i+2,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
    }
      {
    bitSet(leds, i);
    updateShiftRegister();
    delay(500);
  }
}

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
}
