int pinRojo = 10;
int pinAzul = 9;
int pinVerde = 8;

int pinSwitch1 = 4;
int pinSwitch2 = 5;
int pinSwitch3 = 6;
  
void setup()
{
    pinMode (pinRojo, OUTPUT);
    pinMode (pinAzul, OUTPUT);
    pinMode (pinVerde, OUTPUT);
    pinMode (pinSwitch1, INPUT);
    pinMode (pinSwitch2, INPUT);
    pinMode (pinSwitch3, INPUT);
}


void loop(){
  {
    //LED en Rojo
    if 
    (digitalRead(pinSwitch1) == HIGH && digitalRead(pinSwitch2) != HIGH && digitalRead(pinSwitch3) != HIGH){
    
     digitalWrite (pinRojo, HIGH);
     digitalWrite (pinVerde, LOW);
     digitalWrite (pinAzul, LOW);
    }
     else { 
     digitalWrite (pinRojo, LOW);
    }
  }

  {
     //LED en Verde 
     if 
     (digitalRead(pinSwitch2) == HIGH && digitalRead(pinSwitch1) != HIGH && digitalRead(pinSwitch3) != HIGH){ 
  
      digitalWrite (pinRojo, LOW);
      digitalWrite (pinVerde, HIGH);
      digitalWrite (pinAzul, LOW); 
     }
      else {
      digitalWrite (pinVerde, LOW);
    }
  }

  {
      //LED en Azul
      if 
      (digitalRead(pinSwitch3) == HIGH && digitalRead(pinSwitch1) != HIGH && digitalRead(pinSwitch2) != HIGH){
  
     digitalWrite (pinRojo, LOW);
     digitalWrite (pinVerde, LOW);
     digitalWrite (pinAzul, HIGH);
  }
     else {
     digitalWrite (pinAzul, LOW);
 }
}
}
