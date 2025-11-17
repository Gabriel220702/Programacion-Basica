const int analogPin = A5;   
const int ledCount = 10;    
int ledPins[] = {4, 5, 6, 7, 8, 9, 10, 11,12,13}; 

void setup() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) 
    pinMode(ledPins[thisLed], OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(analogPin);
  int ledLevel = map(valor, 0, 1023, 0, ledCount);
  int a=0;
  while(a<ledCount)
  {
    if(a<ledCount)
    {
      if (a < ledLevel) 
          digitalWrite(ledPins[a], HIGH);
    
      else 
          digitalWrite(ledPins[a], LOW);
    }
    else
      continue;
    a=a+2;
  } 
}
