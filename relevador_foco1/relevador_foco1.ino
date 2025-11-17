const int pinRele=2;
const int pinFoto=0;

void setup()
{
  pinMode(pinRele, OUTPUT);
}

void loop()
{
  if (analogRead(pinFoto)>470)
  {
    digitalWrite(pinRele,LOW);
  }
  else
  {
    digitalWrite(pinRele,HIGH);
  }
}
