
void setup() {
  // 디지털 핀의 용도를 초기에 설정 (사용할 핀 번호, 모드)
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // 디지털 핀에 값을 쓰기 위한 함수
  // (핀 번호, HIGH or LOW)
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(100); 
  digitalWrite(LED_BUILTIN, LOW);  
  delay(100);  
}
