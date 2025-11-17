import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
import controlP5.*;
 
ControlP5 cp5;
Arduino arduino;
CheckBox checkbox;

void setup() 
{
  arduino=new Arduino(this,Arduino.list()[0],57600);
  size(200, 200);
  cp5 = new ControlP5(this);
  checkbox = cp5.addCheckBox("checkBox")
                .setPosition(50, 25)
                .setSize(30, 30)
                .setItemsPerRow(1)
                .setSpacingRow(5)
                .addItem("led_11", 0)
                .addItem("led_12", 0)
                ;
  arduino.pinMode(11,Arduino.OUTPUT);
  arduino.pinMode(12,Arduino.OUTPUT);
  arduino.digitalWrite(11,0);
  arduino.digitalWrite(12,0);
}

void draw()
{
}

void controlEvent(ControlEvent theEvent)
{
  if(theEvent.isFrom(checkbox))
  {
    if((int)checkbox.getArrayValue()[0]==1)
      arduino.digitalWrite(11,1);
    else
      arduino.digitalWrite(11,0);
    if((int)checkbox.getArrayValue()[1]==1)
      arduino.digitalWrite(12,1);
    else
      arduino.digitalWrite(12,0);
  }
}
