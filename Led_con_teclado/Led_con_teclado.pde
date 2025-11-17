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
  if(keyPressed)
  arduino.digitalWrite(led,Arduino.HIGH);
  else
  arduino.digitalWrite(led,Arduino.LOW);
}
