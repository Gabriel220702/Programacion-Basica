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

void setup() 
{
  for(int i=3;i<=9;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() 
{
  for(byte i=11;i>=2;i--)
  {
    for(byte j=0;j<=7;j++)
    {
      digitalWrite(j+2,digitos[i-1][j]);
    }
    delay(1000);
  }

for(byte i=11;i>=2;i--)
  {
    for(byte j=0;j<=7;j++)
    {
      digitalWrite(j+2,digitos[i-1][j]);
    }
    delay(1000);
  }
 }
