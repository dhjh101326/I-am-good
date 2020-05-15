#include <Servo.h>
Servo c;
int a;
void setup() {
  for (int i; i < 100; i++) {
    a = a + analogRead(A0);
    delay(50);
  }
  a = a / 100 - 5;
  Serial.println("Game Star");
}

void loop() {
  if (analogRead(A0) < a) {
    c.write(62);
    delay(85);
    c.write(80);
    delay(50);
  }
}
