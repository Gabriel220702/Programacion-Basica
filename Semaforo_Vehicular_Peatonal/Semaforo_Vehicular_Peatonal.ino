// C++ code
//
int autoRojo=12;
int autoAmarillo=11;
int autoVerde=10;
int peatonRojo=9;
int peatonVerde=8;
int boton=2;
int tiempoCruce=5000;
unsigned long cambioTiempo;

void setup()
{
  pinMode(peatonVerde, OUTPUT);
  pinMode(peatonRojo, OUTPUT);
  pinMode(boton, INPUT);
  pinMode(autoVerde, OUTPUT);
  pinMode(autoAmarillo, OUTPUT);
  pinMode(autoRojo, OUTPUT);
  digitalWrite(autoVerde, HIGH);
  digitalWrite(peatonRojo, HIGH);  
}

void loop()
{
  int estado=digitalRead(boton);
  if (estado==HIGH &&(millis()-cambioTiempo)>5000)
  {
    cambiarLuces();
  }
}

void cambiarLuces()
{
  digitalWrite(autoVerde, LOW);
  digitalWrite(autoAmarillo, HIGH);
  delay(2000);
  
  digitalWrite(autoAmarillo, LOW);
  digitalWrite(autoRojo, HIGH);
  delay(1000);
  
  digitalWrite(peatonRojo, LOW);
  digitalWrite(peatonVerde, HIGH);  
  delay(tiempoCruce);
  
  for (int i=0; i<10; i++)
  {
    digitalWrite(peatonVerde, HIGH);
    delay(250);
    digitalWrite(peatonVerde, LOW);
    delay(250);
  }
  digitalWrite(peatonRojo, HIGH);
  delay(500);
  
  digitalWrite(autoAmarillo, HIGH);
  digitalWrite(autoRojo, LOW);
  delay(1000);
  digitalWrite(autoVerde, HIGH);  
  digitalWrite(autoAmarillo, LOW);
  cambioTiempo=millis();  
}
