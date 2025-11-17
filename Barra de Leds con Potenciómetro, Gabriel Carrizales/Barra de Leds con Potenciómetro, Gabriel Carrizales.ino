int pot=A0;

void setup() 
{
  for(int i=13;i>=4;i--)
  pinMode(i,OUTPUT);
}

void loop() 
{
    int i;
    for(i=13;i>=4;i--)
    {
    int valor=analogRead(pot);
    digitalWrite(i,HIGH);
    delay(valor);
    digitalWrite(i,LOW);

    
    }
    for(i=4;i<=13;i++)
  {
    int valor=analogRead(pot);
    digitalWrite(i,HIGH);
    delay(valor);
    digitalWrite(i,LOW);

    }
 

}
