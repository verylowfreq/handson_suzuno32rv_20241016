#include <HardwareTimer.h>

HardwareTimer Timer2(TIM2);

void setup() {
  Timer2.pause();
  Timer2.setPrescaleFactor(1440);
  Timer2.setOverflow(2000);
  Timer2.setMode(1, TIMER_OUTPUT_COMPARE_PWM1, PA0);
  Timer2.setCaptureCompare(1, 1500 / 10);
  Timer2.refresh();
  Timer2.resume();

}
void loop() {
  int i = 700;
  for (; i < 2200; i+=1) {
    Timer2.setCaptureCompare(1, i / 10);
    delay(1);
  }
  for (; i > 700; i-=1) {
    Timer2.setCaptureCompare(1, i / 10);
    delay(1);
  }
}
