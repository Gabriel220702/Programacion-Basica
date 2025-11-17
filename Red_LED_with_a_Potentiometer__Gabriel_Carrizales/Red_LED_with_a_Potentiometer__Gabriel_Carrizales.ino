int led=6;
int pot=A5;
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  int valor=analogRead(pot);
  int brillo=map(valor,0,1023,0,255);
  analogWrite(led,brillo);
  delay(100);
}
