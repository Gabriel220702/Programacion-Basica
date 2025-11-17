int pinRojo = 12;
int pinAzul = 11;
int pinVerde = 10;

void setup()
{
    pinMode (pinRojo, OUTPUT);
    pinMode (pinAzul, OUTPUT);
    pinMode (pinVerde, OUTPUT);
}

void loop()
{
  //LED en Rojo
  analogWrite (pinRojo, 225);
  analogWrite (pinVerde, 0);
  analogWrite (pinAzul, 0);
  delay (1500);
  
  //LED en Verde 
  digitalWrite (pinRojo, LOW);
  digitalWrite (pinVerde, HIGH);
  digitalWrite (pinAzul, LOW); 
  delay (1500);
   
  //LED en Azul
  digitalWrite (pinRojo, LOW);
  digitalWrite (pinVerde, LOW);
  digitalWrite (pinAzul, HIGH);
  delay (1500);
   
}
