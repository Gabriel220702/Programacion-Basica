void setup() 
{
  for(int i=13;i>=4;i--)
  pinMode (i,OUTPUT);

}

void loop() 
{
  int i, velocidad;
  
  for (i=13;i>=4;i--)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }


  for (i=4;i<=11;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
   }


  for (i<=13;i>=4;i--)
   {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+2,LOW);
   }

   
  for (i=4;i<=13;i++)
   {
    digitalWrite(i,HIGH);
    digitalWrite(i+3,HIGH);
    digitalWrite(i+2,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
    }
}
