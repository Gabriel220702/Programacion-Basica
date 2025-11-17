const int pirPin=3;

void setup() 
{
  for(int i=53;i>=44;i--)
  pinMode(i,OUTPUT);
  pinMode(pirPin, INPUT);
}

void loop() 
{
  int sensorPir=digitalRead(pirPin);
  if(sensorPir==HIGH)
    for(int i=53;i>=44;i--)
      digitalWrite(i,HIGH);
    else
      for(int i=53;i>44;i--)
        digitalWrite(i,LOW); 
  }
