#include <LiquidCrystal.h>
#include <TimerOne.h>

#define sensor 8              // Define el pin 8 para el sensor
#define lcd_rs 12
#define lcd_en 11
#define lcd_d4 5
#define lcd_d5 4
#define lcd_d6 3
#define lcd_d7 2

LiquidCrystal lcd(lcd_rs, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7);

unsigned long voltas, periodo;
unsigned long rpm;
bool L_sensor = 0;            // Variable para la lectura actual del sensor
bool LA_sensor = 0;           // Variable para la lectura anterior del sensor
unsigned long tiempoAnterior = 0;

void setup() {
  Timer1.initialize(1000);                   // Configura TimerOne para interrupciones cada 1 segundo
  Timer1.attachInterrupt(Timer);             // TimerOne está asociado a la función Timer()
  pinMode(sensor, INPUT);                   // Configura el pin del sensor como entrada
  Serial.begin(9600);                       // Inicia la comunicación serial
  lcd.begin(16, 2);                         // Inicializa la pantalla LCD de 16x2
  lcd.print("  Calibrando...");        // Muestra un mensaje en la pantalla LCD
}

void loop() {
  // Realiza la lectura del sensor y asigna ese valor a la variable L_sensor
  L_sensor = digitalRead(sensor);
  
  // Si L_sensor y LA_sensor son iguales a 1, haz lo siguiente
  if (L_sensor == 1 && LA_sensor == 1) {
    LA_sensor = 0;                                  // Establece LA_sensor en 0
    voltas++;                                       // Incrementa el contador de vueltas
    unsigned long tiempoActual = micros(); // Obtén el tiempo actual en microsegundos
    unsigned long tiempoTranscurrido = tiempoActual - tiempoAnterior;
    
    if (tiempoTranscurrido > 0) {
      rpm = 60000000UL / tiempoTranscurrido;  // Calcula las RPM en función del tiempo transcurrido
    }
    
    lcd.clear();                                    // Limpia la pantalla LCD
    lcd.setCursor(0, 0);
    lcd.print("Vueltas: ");
    lcd.print(voltas);
    lcd.setCursor(0, 1);
    lcd.print("RPM: ");
    lcd.print(rpm);
    
    tiempoAnterior = tiempoActual;
    periodo = 0;                                    // Restablece la variable de período a 0
  }

  // Si L_sensor y LA_sensor son iguales a 0, haz lo siguiente
  if (L_sensor == 0 && LA_sensor == 0)
    LA_sensor = 1;                                  // Establece LA_sensor en 1
  delay(10);                                        // Pequeño retardo para evitar bloqueos del Arduino
}

void Timer() {
  periodo++;                                         // Incrementa el valor actual del período
}
