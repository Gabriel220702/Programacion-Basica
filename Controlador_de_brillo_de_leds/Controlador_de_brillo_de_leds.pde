import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
import controlP5.*;
 
int pwm10;
int pwm11;

ControlP5 GUI;
Arduino arduino;


void setup() 
{
  size(400, 200);
  noStroke();
  arduino=new Arduino(this,Arduino.list()[0],57600);
  GUI = new ControlP5(this);
  GUI.addSlider("pwm_pin10")
     .setPosition(100,50)
     .setSize(40,100)
     .setRange(0,255)
     .setNumberOfTickMarks(5)
     ;
  GUI.addSlider("pwm_pin11")
     .setPosition(250, 50)
     .setSize(40, 100)
     .setRange(0,255)
     ;
  arduino.pinMode(10,Arduino.OUTPUT);
  arduino.pinMode(11,Arduino.OUTPUT);
}

void draw()

{
  background(1);
}

void pwm_pin10(int pwm10)
{
  arduino.analogWrite(10,pwm10);
}

void pwm_pin11(int pwm11)
{
  arduino.analogWrite(11,pwm11);
}
