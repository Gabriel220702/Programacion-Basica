import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;
import controlP5.*;
 
ControlP5 cp5;
Arduino arduino;
CheckBox checkbox;

void setup() 
{
  size(800, 400);
  smooth();
  cp5 = new ControlP5(this);
  checkbox = cp5.addCheckBox("checkBox")
                .setPosition(100, 200)
                .setSize(40, 40)
                .setItemsPerRow(3)
                .setSpacingColumn(30)
                .setSpacingRow(20)
                .addItem("0", 0)
                .addItem("50", 50)
                .addItem("100", 100)
                .addItem("150", 150)
                .addItem("200", 200)
                .addItem("255", 255)
                ;
}

void keyPressed() {
  if (key==' ') {
    checkbox.deactivateAll();
  } 
  else {
    for (int i=0;i<6;i++) {
      if (keyCode==(48 + i)) { 
        checkbox.toggle(i);
        println("toggle "+checkbox.getItem(i).getName());
      }
    }
  }
}

void draw() {
  background(170);
  pushMatrix();
  translate(width/2 + 200, height/2);
  stroke(255);
  strokeWeight(2);
  fill(myColorBackground);
  ellipse(0,0,200,200);
  popMatrix();
}

void controlEvent(ControlEvent theEvent) {
  if (theEvent.isFrom(checkbox)) {
    myColorBackground = 0;
    print("got an event from "+checkbox.getName()+"\t\n");
    println(checkbox.getArrayValue());
    int col = 0;
    for (int i=0;i<checkbox.getArrayValue().length;i++) {
      int n = (int)checkbox.getArrayValue()[i];
      print(n);
      if(n==1) {
        myColorBackground += checkbox.getItem(i).internalValue();
      }
    }
    println();    
  }
}

void checkBox(float[] a) {
  println(a);
}
