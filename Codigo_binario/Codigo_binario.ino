int bit0=4;
int bit1=5;
int bit2=6;
int bit3=7;
int num=0;

void setup() 
{
  pinMode (bit0, OUTPUT);
  pinMode (bit1, OUTPUT);
  pinMode (bit2, OUTPUT);
  pinMode (bit3, OUTPUT);
}

void loop() 
{
  digitalWrite (bit3, LOW);
  digitalWrite (bit2, LOW);
  digitalWrite (bit1, LOW);
  digitalWrite (bit0, LOW);
  delay (1000);
  num++;//num=num+1;
  if(num==16)
    num=1;
int  tempNum=num;
  
  if ((num%2)==1)
    digitalWrite (bit0, HIGH);
  else
    digitalWrite (bit0, LOW);
  num=num/2;
  
   if ((num%2)==1)
    digitalWrite (bit1, HIGH);
  else
    digitalWrite (bit1, LOW);
  num=num/2;

   if ((num%2)==1)
    digitalWrite (bit2, HIGH);
  else
    digitalWrite (bit2, LOW);
  num=num/2;

   if ((num%2)==1)
    digitalWrite (bit3, HIGH);
  else
    digitalWrite (bit3, LOW);
  delay(1000);
   num=tempNum;
  
  
}
