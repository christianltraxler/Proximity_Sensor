//www.elegoo.com
//2016.12.08
#include "SR04.h"
#include "pitches.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long a;

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  a = sr04.Distance();
  Serial.print(a);
  Serial.println("cm");

  if (a < 100 || a > 200) {
    int play = 0;
    if (play == 0)
    tone(8, NOTE_C4, 2400);
    delay(2500);
    tone(8, NOTE_C4, 400);
    delay(500);
    tone(8, NOTE_B3, 400);
    delay(500);

    tone(8, NOTE_C4, 2400);
    delay(2500);
    tone(8, NOTE_C4, 400);
    delay(500);
    tone(8, NOTE_B3, 400);
    delay(500);

    tone(8, NOTE_C4, 1200);
    delay(1300);
    tone(8, NOTE_D4, 400);
    delay(500);
    tone(8, NOTE_D4, 1200);
    delay(1300);
    tone(8, NOTE_F4, 400);
    delay(500);

    tone(8, NOTE_F4, 2400);
    delay(2500);
    tone(8, NOTE_E4, 400);
    delay(500);
    tone(8, NOTE_C4, 400);
    delay(500);

    tone(8, NOTE_D4, 1200);
    delay(1300);
    tone(8, NOTE_B3, 400);
    delay(500);
    tone(8, NOTE_G3, 800);
    delay(900);
    tone(8, NOTE_E4, 400);
    delay(500);
    tone(8, NOTE_C4, 400);
    delay(500);

    tone(8, NOTE_D4, 2400);
    delay(2500);
    tone(8, NOTE_A4, 400);
    delay(500);
    tone(8, NOTE_C4, 400);
    delay(500);

    tone(8, NOTE_F4, 1200);
    delay(1300);
    tone(8, NOTE_E4, 400);
    delay(500);
    tone(8, NOTE_E4, 1200);
    delay(1300);
    tone(8, NOTE_D4, 400);
    delay(500);

    tone(8, NOTE_D4, 2400);
    delay(2500);
    tone(8, NOTE_C4, 400);
    delay(500);
    tone(8, NOTE_B3, 400);
    delay(500);

    tone(8, NOTE_C4, 2400);
    delay(2500);
    tone(8, NOTE_C4, 400);
    delay(500);
    tone(8, NOTE_B3, 400);
    delay(500);

    tone(8, NOTE_C4, 2400);
    delay(2500);
    tone(8, NOTE_C4, 400);
    delay(500);
    tone(8, NOTE_B3, 400);
    delay(500);

    tone(8, NOTE_C4, 1200);
    delay(1300);
    tone(8, NOTE_D4, 400);
    delay(500);
    tone(8, NOTE_D4, 1200);
    delay(1300);
    tone(8, NOTE_F4, 400);
    delay(500);

    tone(8, NOTE_F4, 2400);
    delay(2500);
    tone(8, NOTE_E4, 400);
    delay(500);
    tone(8, NOTE_C4, 400);
    delay(500);

    tone(8, NOTE_D4, 1200);
    delay(1300);
    tone(8, NOTE_B3, 400);
    delay(500);
    tone(8, NOTE_G3, 800);
    delay(900);
    tone(8, NOTE_E4, 400);
    delay(500);
    tone(8, NOTE_C4, 400);
    delay(500);

    tone(8, NOTE_C4, 3200);

    ++play;
  }
  delay(100);
}
