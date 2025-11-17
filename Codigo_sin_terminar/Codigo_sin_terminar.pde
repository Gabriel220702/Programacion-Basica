import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
Arduino arduino;
int entradas-analogicas[]={0,0,0,0,0,0};

void setup()
{
  arduino=new Arduino(this, Arduino.list()[0], 57600);
  for(byte i=0;i<6;i++)
    entradas_analogicas[i]=arduino.analogRead(i);
  printArray(entradas_analogicas);
}

void draw()
{
  for(byte i=0;i<6;i++)
    entradas_analogicas[i]=arduino.analogRead(i);
  printArray(entradas_analogicas);
}

void keyPressed()
{
  if(keyCode==LEFT)
  {
    pin_analogico--;
    if(pin_analogico<0)
    pin_analogico=5;
  }
  else
    if(keyCode==RIGHT)
  {
    pin_analogico++;
    if(pin_analogico>5)
    pin_analogico=0;
  }
  println("pin A"+pin_analogico+"valor"+arduino.analogRead(pin_analogico));
}
