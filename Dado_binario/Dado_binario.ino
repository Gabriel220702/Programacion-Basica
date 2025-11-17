// Binary Dice

// Variable declaration
int const d1 = 2;
int const d2 = 4;
int const d3 = 6;
int const d4 = 8;
int const btn = 12;
int const led = 9;

// aleatory number variable
int number = 0; 

void setup() {
  Serial.begin(9600);

  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(btn, INPUT_PULLUP); // Set input with pullup resistor

  randomSeed(analogRead(0)); // Inicialize random number generator

}

void loop() {
  
  // Start with all leds on.
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(led, HIGH);
  
  
  // Read buttom state
  if (digitalRead(btn) == LOW) {
    delay(20);

    if (digitalRead(btn) == LOW) {
      number = random(7);         // Generate a random number between 0 and 6.
      
      if (digitalRead(btn)==LOW){
        digitalWrite(d4, HIGH);
        delay(1000);

       digitalWrite(d4, LOW); 
        }
      }
    }
  }

  // Switch case structure allows to take an action depends number value. Every case represent a binary number using leds.
  switch (number) {
    case 0:
      break;

    case 1:
      digitalWrite(d1, HIGH);
      digitalWrite(d2, LOW);
      digitalWrite(d3, LOW);
      delay(5000);
      break;

    case 2:
      digitalWrite(d1, LOW);
      digitalWrite(d2, HIGH);
      digitalWrite(d3, LOW);
      delay(5000);
      break;

    case 3:
      digitalWrite(d1, HIGH);
      digitalWrite(d2, HIGH);
      digitalWrite(d3, LOW);
      delay(5000);
      break;

    case 4:
      digitalWrite(d1, LOW);
      digitalWrite(d2, LOW);
      digitalWrite(d3, HIGH);
      delay(5000);
      break;

    case 5:
      digitalWrite(d1, HIGH);
      digitalWrite(d2, LOW);
      digitalWrite(d3, HIGH);
      delay(5000);
      break;

    case 6:
      digitalWrite(d1, LOW);
      digitalWrite(d2, HIGH);
      digitalWrite(d3, HIGH);
      delay(5000);
      break;

    default:
      break;
    
  }

  number = 0; 

  delay(250);
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  delay(250);

}
