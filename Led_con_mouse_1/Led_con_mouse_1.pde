import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
Arduino arduino;
int led=11;

void setup()
{
  arduino=new Arduino(this, Arduino.list()[0], 57600);
  arduino.pinMode(led, Arduino.OUTPUT);
}

void draw()
{
  if(mousePressed &&(mouseButton==LEFT))
  arduino.digitalWrite(led,Arduino.LOW);
  if(mousePressed &&(mouseButton==RIGHT))
  arduino.digitalWrite(led,Arduino.HIGH);
}
