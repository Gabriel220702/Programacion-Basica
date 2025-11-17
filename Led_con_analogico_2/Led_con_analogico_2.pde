import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
Arduino arduino;
int pin_analogico=0;

void setup()
{
  arduino=new Arduino(this, Arduino.list()[0], 57600);
  
}

void draw()
{
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
