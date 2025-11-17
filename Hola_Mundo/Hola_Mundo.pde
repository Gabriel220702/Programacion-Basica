import controlP5.*;
ControlP5 GUI;
Textlabel etiqueta;
void setup()
{
  size(200,150);
  GUI=new ControlP5(this);
  etiqueta =GUI.addTextlabel("etiqueta")
               .setText("Hola Mundo")
               .setPosition(50,50)
               .setColorValue(0x000000)
               .setFont(createFont("Georgia",20))
               ;
               
etiqueta.draw(this);
}

void draw()
{
  
}
