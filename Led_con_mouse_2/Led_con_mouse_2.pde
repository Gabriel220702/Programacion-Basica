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
}

void mousePressed ()
{
  arduino.digitalWrite(led,Arduino.HIGH);
}

void mouseReleased ()
{
  arduino.digitalWrite(led,Arduino.LOW);
}
