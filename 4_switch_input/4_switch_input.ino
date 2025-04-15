// これはSuzuno32RVでは必要
#include <Adafruit_TinyUSB.h>

void setup() {
  Serial.begin(115200);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(4) == LOW) {
    Serial.print("[ 4 ]");
  }
  if (digitalRead(5) == LOW) {
    Serial.print("[ 5 ]");
  }
  Serial.println();
  delay(100);
}
