#include <Stepper.h>

// 2048:한바퀴(360도)
const int stepsPerRevolution = 2048; 

//스텝 모터의 자석 위상과 핀 번호를 확인 필요
Stepper stepper(stepsPerRevolution,11,9,10,8);       

void setup() {
  stepper.setSpeed(10); 
}
void loop() {
  // 시계 반대 방향으로 한바퀴 회전
  stepper.step(stepsPerRevolution);
  delay(500);

  // 시계 방향으로 한바퀴 회전
  stepper.step(-stepsPerRevolution);
  delay(500);
}
