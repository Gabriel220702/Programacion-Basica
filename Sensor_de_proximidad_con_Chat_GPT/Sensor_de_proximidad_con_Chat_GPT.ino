#include <LiquidCrystal.h>

const int trig_pin = 53;
const int echo_pin = 52;
const int buzzer_pin = 7;

int distance_cm;
long duration;

const int rs = 40, en = 41, d4 = 13, d5 = 12, d6 = 11, d7 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int green_led_pin = 4;
const int yellow_led_pin = 3;
const int red_led_pin = 2;

void setup() 
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(buzzer_pin,OUTPUT);
  pinMode(green_led_pin, OUTPUT); 
  pinMode(yellow_led_pin, OUTPUT);
  pinMode(red_led_pin, OUTPUT);
}

void loop() 
{
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin,LOW);
  duration = pulseIn(echo_pin,HIGH);
  distance_cm = (duration*0.034)/2.0;

  if (distance_cm >= 10 || distance_cm <= 0)
  {
    digitalWrite(buzzer_pin, LOW);
    digitalWrite(green_led_pin, HIGH);
    digitalWrite(yellow_led_pin, LOW);
    digitalWrite(red_led_pin, LOW);
    lcd.setCursor(0,0);
    lcd.print("OBJETO NO [>10cm]"); 
    lcd.setCursor(0,1);
    lcd.print("DETECTADO");
    delay(1000);
    lcd.clear();
  }
  else
  {
    if (distance_cm > 10) {
      digitalWrite(buzzer_pin, LOW);
      digitalWrite(green_led_pin, HIGH);
      digitalWrite(yellow_led_pin, LOW);
      digitalWrite(red_led_pin, LOW);
    } 
    else if (distance_cm >= 6) {
      digitalWrite(buzzer_pin, HIGH);
      digitalWrite(green_led_pin, LOW);
      digitalWrite(yellow_led_pin, HIGH);
      digitalWrite(red_led_pin, LOW);
      delay(500);
      digitalWrite(buzzer_pin, LOW);
      digitalWrite(green_led_pin, LOW);
      digitalWrite(yellow_led_pin, LOW);
      digitalWrite(red_led_pin, LOW);
      delay(500);
    } 
    else if (distance_cm <= 5) {
      digitalWrite(buzzer_pin, HIGH);
      digitalWrite(green_led_pin, LOW);
      digitalWrite(yellow_led_pin, LOW);
      digitalWrite(red_led_pin, HIGH);
      delay(100);
      digitalWrite(buzzer_pin, LOW);
      digitalWrite(green_led_pin, LOW);
      digitalWrite(yellow_led_pin, LOW);
      digitalWrite(red_led_pin, LOW);
      delay(100);
    }
    lcd.setCursor(0,0);
    lcd.print("DISTANCIA(cm):");
    lcd.print(distance_cm);
    lcd.setCursor(0,1);
    lcd.print("OBJETO DETECTADO");
    delay(1000);
    lcd.clear();
  }
}
