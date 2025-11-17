
int const btn=9;

byte digitos [10][7]={{1,1,1,1,1,1,0},//0
                      {0,1,1,0,0,0,0},//1
                      {1,1,0,1,1,0,1},//2
                      {1,1,1,1,0,0,1},//3
                      {0,1,1,0,0,1,1},//4
                      {1,0,1,1,0,1,1},//5
                      {1,0,1,1,1,1,1},//6
                      {1,1,1,0,0,0,0},//7
                      {1,1,1,1,1,1,1},//8
                      {1,1,1,0,0,1,1}};//9
                      

void setup() {
  Serial.begin(9600);
  pinMode(btn,INPUT);
  for(int i=2;i<=8;i++)
  {
    pinMode(i,OUTPUT);

  }
  randomSeed(analogRead(A0));
}
void loop() {
 int valor= digitalRead(btn);
 
  if(btn==LOW)
  {
    int number = random(1,10);
    for(int j=0;j<=6;j++)
   {
    digitalWrite(j+2,digitos[valor][j]);
   }
    delay(500);
  }
 
}
