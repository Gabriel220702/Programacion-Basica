int piezo=A5;

void setup()
{
  Serial.begin(9600);
  for(int i=4;i<=13;i++)
    pinMode(i,OUTPUT);
}

void loop()
{
  int lectura=analogRead(piezo);
  Serial.println(lectura);
  int numLEDS=(10*lectura)/20;
  if(numLEDS>10)
    numLEDS=10;
  for(int i=4;i<=(4+numLEDS-1);i++)
    digitalWrite(i,HIGH);
  delay(10);
  for(int i=4;i<=(4+numLEDS-1);i++)
    digitalWrite(i,LOW);    
}
