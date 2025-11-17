import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
Arduino arduino;
int led=11;
int pwm=0;

void setup()
{
  arduino=new Arduino(this, Arduino.list()[0], 57600);
  arduino.pinMode(led, Arduino.OUTPUT);
}

void draw()
{
}

void mouseWheel (MouseEvent event)
{
  float rueda=event.getCount();
  if(rueda>0)
  {
    pwm++;
    if(pwm>255)
      pwm=0;
  }
    else
  {
    pwm--;
    if(pwm<0)
      pwm=255;
  }
  arduino.analogWrite(led,pwm);
  println(pwm);
}
