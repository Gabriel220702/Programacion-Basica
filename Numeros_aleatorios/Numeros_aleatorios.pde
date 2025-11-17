import controlP5.*;
import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
ControlP5 GUI;
Textfield A0, A1, A2, A3, A4, A5;
Arduino arduino;
void setup()
{
  arduino=new Arduino(this, Arduino.list()[0],57600);
  size(200,200);
  GUI=new ControlP5(this);
  campo_valores();
  mostrar_texto();
}

void draw()
{
  actualizar_lista();
  delay(1000);
}

void campo_valores()
{
  A0=GUI.addTextfield("A0")
        .setPosition(150,20)
        .setColorBackground(0xffffffff)
        .setColorValue(0x000000)
        .setSize(45,15)
        ;
        
  A1=GUI.addTextfield("A1")
        .setPosition(150,40)
        .setColorBackground(0xffffffff)
        .setColorValue(0x000000)
        .setSize(45,15)
        ;
        
  A2=GUI.addTextfield("A2")
        .setPosition(150,60)
        .setColorBackground(0xffffffff)
        .setColorValue(0x000000)
        .setSize(45,15)
        ;
          
  A3=GUI.addTextfield("A3")
        .setPosition(150,80)
        .setColorBackground(0xffffffff)
        .setColorValue(0x000000)
        .setSize(45,15)
        ;
        
  A4=GUI.addTextfield("A4")
        .setPosition(150,100)
        .setColorBackground(0xffffffff)
        .setColorValue(0x000000)
        .setSize(45,15)
        ;
        
  A5=GUI.addTextfield("")
        .setPosition(150,120)
        .setColorBackground(0xffffffff)
        .setColorValue(0x000000)
        .setSize(45,15)
        ;
}

void mostrar_texto()
{
  fill(0,0,0);
  text("Entrada analogica A0",15,33);
  text("Entrada analogica A1",15,53);
  text("Entrada analogica A2",15,73);
  text("Entrada analogica A3",15,93);
  text("Entrada analogica A4",15,113);
  text("Entrada analogica A5",15,133);
}

void actualizar_lista()
{
  A0.clear();
  A1.clear();
  A2.clear();
  A3.clear();
  A4.clear();
  A5.clear();
  A0.setText(str(arduino.analogRead(0)));
  A1.setText(str(arduino.analogRead(1)));
  A2.setText(str(arduino.analogRead(2)));
  A3.setText(str(arduino.analogRead(3)));
  A4.setText(str(arduino.analogRead(4)));
  A5.setText(str(arduino.analogRead(5)));
}
