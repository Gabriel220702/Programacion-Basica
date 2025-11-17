import controlP5.*;
import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
ControlP5 GUI;
Arduino arduino;

void setup()
{
  arduino=new Arduino(this, Arduino.list()[0],57600);
  size(200,200);
  noStroke();
  GUI=new ControlP5(this);
  GUI.addButton("ON_11")
     .setColorBackground(#FFFF00)
     .setPosition(50,10)
     .setSize(50,20)
     ;
  GUI.addButton("OFF_11")
     .setColorBackground(#0000FF)
     .setPosition(100,10)
     .setSize(50,20)
     ;
     arduino.pinMode(11,Arduino.OUTPUT);
}

void draw()
{
}

public void OFF_11()
{
  arduino.digitalWrite(11,1);
  GUI.getController("OFF_11").setColorBackground(#00FF00);
  GUI.getController("ON_11").setColorBackground(#FFFFFF);
}

public void ON_11()
{
  arduino.digitalWrite(11,0);
  GUI.getController("OFF_11").setColorBackground(#FF0000);
  GUI.getController("ON_11").setColorBackground(#FFFFFF);
}
