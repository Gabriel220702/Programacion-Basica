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
  arduino.digitalWrite(led,Arduino.HIGH);
  delay(1000);
  arduino.digitalWrite(led,Arduino.LOW);
  delay(1000);
}
