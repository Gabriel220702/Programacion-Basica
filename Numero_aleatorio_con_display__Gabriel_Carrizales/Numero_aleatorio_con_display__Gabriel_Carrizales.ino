int const btn=9;

byte digitos[10][7]={{0,0,0,0,0,0,1},     //0
                     {1,0,0,1,1,1,1},     //1
                     {0,0,1,0,0,1,0},     //2
                     {0,0,0,0,1,1,0},     //3
                     {1,0,0,1,1,0,0},     //4
                     {0,1,0,0,1,0,0},     //5
                     {0,1,0,0,0,0,0},     //6
                     {0,0,0,1,1,1,1},     //7
                     {0,0,0,0,0,0,0},     //8
                     {0,0,0,1,1,0,0}};    //9
                      

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
    delay(1000);
  }
 
}
