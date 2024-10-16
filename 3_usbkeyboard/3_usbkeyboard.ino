#include "TinyUSB_Mouse_and_Keyboard.h"

void setup() {
  Keyboard.begin();
  pinMode(PA0, INPUT_PULLUP);
  pinMode(PA1, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(PA0) == LOW) {
    Keyboard.press('a');
    Keyboard.releaseAll();
  }

  if (digitalRead(PA1) == LOW) {
    Keyboard.print("Hello, world! ");
  }

  delay(50);
}
