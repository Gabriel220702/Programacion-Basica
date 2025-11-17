int potPin=A5;

void setup() 
{
  for(int i=13;i>=4;i--)
    pinMode(i,OUTPUT);
}

void loop() 
{
    int i,velocidad;
    velocidad=analogRead(A5);

    
    for(i=13;i>=4;i--)
    {
    digitalWrite(i,HIGH);
    delay(velocidad);
    digitalWrite(i,LOW); 
    }
    
    for(i=4;i<=13;i++)
    {
    digitalWrite(i,HIGH);
    delay(velocidad);
    digitalWrite(i,LOW);
    }
}
