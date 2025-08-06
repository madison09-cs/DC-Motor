int buttonPin = 2;
int motorPin = 9;

void setup() {
pinMode(buttonPin, INPUT);
pinMode(motorPin, OUTPUT);
  
}

void loop () {
  if (digitalRead(buttonPin) == HIGH) {
    for (int speedLevel = 0; speedLevel <= 55; speedLevel++) {
      analogWrite(motorPin, speedLevel);
      delay(50);
    }
    
    for (int speedLevel = 55; speedLevel >=0; speedLevel--) {
      analogWrite(motorPin, speedLevel);
      delay(50);
    }
  }
}