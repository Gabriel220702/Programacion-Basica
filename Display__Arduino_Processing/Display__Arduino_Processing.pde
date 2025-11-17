import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
import controlP5.*;
int segA=0;
int segB=0;
int segC=0;
int segD=0;
int segE=0;
int segF=0;
int segG=0;


ControlP5 GUI;
Arduino arduino;

void setup()
{
  arduino=new Arduino(this,Arduino.list()[0],57600);
  size(270,240);
  noStroke();
  GUI=new ControlP5(this);
  GUI.addButton("B_A")
    .setColorBackground(#FFFFFF)
    .setPosition(100,10)
    .setColorCaptionLabel(#FFFFFF)
    .setSize(70,10)
    ;
  GUI.addButton("B_B")
    .setColorBackground(#FFFFFF)
    .setPosition(180,25)
    .setColorCaptionLabel(#FFFFFF)
    .setSize(10,70)
    ;
  GUI.addButton("B_C")
    .setColorBackground(#FFFFFF)
    .setPosition(180,120)
    .setColorCaptionLabel(#FFFFFF)
    .setSize(10, 70)
    ;
  GUI.addButton("B_D")
    .setColorBackground(#FFFFFF)
    .setPosition(100,200)
    .setColorCaptionLabel(#FFFFFF)
    .setSize(70,10)
    ;
  GUI.addButton("B_E")
    .setColorBackground(#FFFFFF)
    .setPosition(80,120)
    .setColorCaptionLabel(#FFFFFF)
    .setSize(10, 70)
    ;
  GUI.addButton("B_F")
    .setColorBackground(#FFFFFF)
    .setPosition(80,25)
    .setColorCaptionLabel(#FFFFFF)
    .setSize(10,70)
    ;
  GUI.addButton("B_G")
    .setColorBackground(#FFFFFF)
    .setPosition(100,100)
    .setColorCaptionLabel(#FFFFFF)
    .setSize(70,10)
    ;
    
    arduino.pinMode(3,Arduino.OUTPUT);
    arduino.pinMode(4,Arduino.OUTPUT);
    arduino.pinMode(5,Arduino.OUTPUT);
    arduino.pinMode(6,Arduino.OUTPUT);
    arduino.pinMode(7,Arduino.OUTPUT);
    arduino.pinMode(8,Arduino.OUTPUT);
    arduino.pinMode(9,Arduino.OUTPUT);
}


void draw()
{
    background(1);
}

public void B_A()
{
  if(segA==0)
  {
  arduino.digitalWrite(9,1);
  GUI.getController("B_A").setColorBackground(#FF0000);
  GUI.getController("B_A").setColorCaptionLabel(#FF0000);
  segA=segA+1;
  }
  else
  {
    arduino.digitalWrite(9,0);
    GUI.getController("B_A").setColorBackground(#FFFFFF);
    GUI.getController("B_A").setColorCaptionLabel(#FFFFFF);
    segA=0;
  }
}

public void B_B()
{
  if(segB==0)
  {
  arduino.digitalWrite(8,1);
  GUI.getController("B_B").setColorBackground(#FF0000);
    GUI.getController("B_B").setColorCaptionLabel(#FF0000);
  segB=segB+1;
  }
  else
  {
    arduino.digitalWrite(8,0);
    GUI.getController("B_B").setColorBackground(#FFFFFF);
      GUI.getController("B_B").setColorCaptionLabel(#FFFFFF);
    segB=0;
  }
}

public void B_C()
{
  if(segC==0)
  {
  arduino.digitalWrite(7,1);
  GUI.getController("B_C").setColorBackground(#FF0000);
    GUI.getController("B_C").setColorCaptionLabel(#FF0000);
  
  segC=segC+1;
  }
  else
  {
    arduino.digitalWrite(7,0);
    GUI.getController("B_C").setColorBackground(#FFFFFF);
      GUI.getController("B_C").setColorCaptionLabel(#FFFFFF);
    segC=0;
  }
}

public void B_D()
{
  if(segD==0)
  {
  arduino.digitalWrite(6,1);
  GUI.getController("B_D").setColorBackground(#FF0000);
    GUI.getController("B_D").setColorCaptionLabel(#FF0000);
  
  segD=segD+1;
  }
  else
  {
    arduino.digitalWrite(6,0);
    GUI.getController("B_D").setColorBackground(#FFFFFF);
      GUI.getController("B_D").setColorCaptionLabel(#FFFFFF);
    segD=0;
  }
}

public void B_E()
{
  if(segE==0)
  {
  arduino.digitalWrite(3,1);
  GUI.getController("B_E").setColorBackground(#FF0000);
    GUI.getController("B_E").setColorCaptionLabel(#FF0000);
  segE=segE+1;
  }
  else
  {
    arduino.digitalWrite(3,0);
    GUI.getController("B_E").setColorBackground(#FFFFFF);
      GUI.getController("B_E").setColorCaptionLabel(#FFFFFF);
    segE=0;
  }
}

public void B_F()
{
  if(segF==0)
  {
  arduino.digitalWrite(5,1);
  GUI.getController("B_F").setColorBackground(#FF0000);
    GUI.getController("B_F").setColorCaptionLabel(#FF0000);
  
  segF=segF+1;
  }
  else
  {
    arduino.digitalWrite(5,0);
    GUI.getController("B_F").setColorBackground(#FFFFFF);
      GUI.getController("B_F").setColorCaptionLabel(#FFFFFF);
    segF=0;
  }
}

public void B_G()
{
  if(segG==0)
  {
  arduino.digitalWrite(4,1);
  GUI.getController("B_G").setColorBackground(#FF0000);
    GUI.getController("B_G").setColorCaptionLabel(#FF0000);
  segG=segG+1;
  }
  else
  {
    arduino.digitalWrite(4,0);
    GUI.getController("B_G").setColorBackground(#FFFFFF);
      GUI.getController("B_G").setColorCaptionLabel(#FFFFFF);
    segG=0;
  }
}
