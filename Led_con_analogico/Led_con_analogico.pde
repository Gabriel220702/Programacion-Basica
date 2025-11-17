import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
Arduino arduino;
int pin_analogico=0;

void setup()
{
  arduino=new Arduino(this, Arduino.list()[0], 57600);
  print("pin A"+pin_analogico+"="+arduino.analogRead(pin_analogico));
}

void draw()
{
  print("pin A"+pin_analogico+"="+arduino.analogRead(pin_analogico));
}
