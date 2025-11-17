// C++ code
//
const int trigPin=22;
const int echoPin=23;
const int piezoPin=A0;
long duracion;
int distancia;

void setup()
{
  for(int i=44;i<=53;i++)
    pinMode(i,OUTPUT);
  pinMode(trigPin,OUTPUT); 
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duracion=pulseIn(echoPin,HIGH);
  distancia=0.01723*duracion;
  Serial.print("Distancia: ");
  Serial.println(distancia);
  
  int numLEDs=map(distancia,10,100,10,1);
  
  for(int n=44;n<=53;n++)
  {
    digitalWrite(n,LOW);
  }
 
  if((numLEDs>=1)&&(numLEDs<=10))
  {
    tone(piezoPin,500*numLEDs);
    Serial.print("# de LEDs: ");
    Serial.println(numLEDs);
    for(int n=44;n<=(44+numLEDs-1);n++)
    {
      digitalWrite(n,HIGH);
    }
  }
  else
  {
    noTone(piezoPin);
  }
}
