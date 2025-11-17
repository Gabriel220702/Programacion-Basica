const int trigPin=22;
const int echoPin=23;
long duration;
int distance;
int buzzerPin=A0;
int cmPin=0;

void setup() {
  for(int i=53;i>=44;i--)
  pinMode (i,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);

  
}

void loop() 
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(.034*duration)/2;
  distance=constrain(distance,10,100);
  int numLeds=map(distance,10,100,10,1);
  for(int i=44;i<=(44+numLeds-1);i++)
    digitalWrite(i,HIGH);
    delay(20);

     for(int i=44;i<=(44+numLeds-1);i++)
    digitalWrite(i,LOW);

      if(cmPin<70)
     {
      analogWrite(buzzerPin,128);
      delay(100);
      digitalWrite(buzzerPin,LOW);
      delay(100);
     }
     
      else
      {
        digitalWrite(buzzerPin,LOW);
      }
}
