const int MOTER_PIN_A = 5;
const int MOTER_PIN_B = 6;

void setup() {
  pinMode(MOTER_PIN_A, OUTPUT);
  pinMode(MOTER_PIN_B, OUTPUT);
}

void loop() {
  int readValue = digitalRead(4);

  if(readValue == LOW) {
    analogWrite(MOTER_PIN_A, 255);
    analogWrite(MOTER_PIN_B, 0);
  }
  else {
    analogWrite(MOTER_PIN_A, 0);
    analogWrite(MOTER_PIN_B, 255);
  }
}
