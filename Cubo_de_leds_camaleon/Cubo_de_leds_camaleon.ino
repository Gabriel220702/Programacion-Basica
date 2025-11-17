int layer[4] = {A3, A2, A1, A0}; // Inicialización y declaración de las capas de LED
int column[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4}; // Inicialización y declaración de las columnas de LED

int time = 250; // Tiempo de encendido de cada capa

void setup() {
  // Configurar los pines de las capas de LED como salidas
  for (int i = 0; i < 4; i++) {
    pinMode(layer[i], OUTPUT);
  }

  // Configurar los pines de las columnas de LED como salidas
  for (int i = 0; i < 16; i++) {
    pinMode(column[i], OUTPUT);
  }
}

void loop() {
  // Encender todos los LED durante 45 segundos
  for (int i = 0; i < 16; i++) {
    digitalWrite(column[i], HIGH);
  }
  for (int i = 0; i < 4; i++) {
    analogWrite(layer[i], 255); // Establecer el brillo máximo (LED encendido)
  }
  delay(45000); // 45 segundos

  // Apagar todos los LED
  for (int i = 0; i < 16; i++) {
    digitalWrite(column[i], LOW);
  }
  for (int i = 0; i < 4; i++) {
    analogWrite(layer[i], 0); // Establecer el brillo mínimo (LED apagado)
  }
  delay(1000); // 1 segundo
}
