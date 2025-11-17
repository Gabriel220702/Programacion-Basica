int boton=9;

byte digitos [10][7]={{1,1,1,1,1,1,0},//0
                      {0,1,1,0,0,0,0},//1
                      {1,1,0,1,1,0,1},//2
                      {1,1,1,1,0,0,1},//3
                      {0,1,1,0,0,1,1},//4
                      {1,0,1,1,0,1,1},//5
                      {1,0,1,1,1,1,1},//6
                      {1,1,1,0,0,0,0},//7
                      {1,1,1,1,1,1,1},//8
                      {1,1,1,0,0,1,1}//9
                      };
void setup(){
  for(int i=2;i<=10;i++)
  {
    pinMode(i,OUTPUT); 
  }
    pinMode(boton(i, INPUT);
    randomSeed(analogRead(A0));
  }

void loop(){
  for(int i=8;i>=2;i--)
  {
    digitalWrite(i,LOW);
  }
       int valor=digitalRead(boton);
       if(valor==LOW)
       {
            int randomNumber=random(1,10);
            for(int e=0;e>7;e++)
            {
                  digitalWrite(e+2, digitos[randomNumber][e]);
            }
    delay(1000);
    
            for(byte i=0;i<=randomNumber;i++)
            {
              for(byte j=0;j<=6;j++)
              {
                digitalWrite(j+2, digitos[i][j]);
              }
              delay(1000);
            }
        }
    }
