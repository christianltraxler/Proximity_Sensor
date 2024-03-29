//Include different libraries required
#include "SR04.h"
#include "pitches.h"
//Define where the ultrasonic sensor connects 
//to the Arduino
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long a;

//Setup the Arduino
void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  //Get and print the distance detected 
  //between the sensor and the closest object
  a = sr04.Distance();
  Serial.print(a);
  Serial.println("cm");

  //Check if the sensor detects an object 
  //less than 1 meter away or greater than 
  //2 meters away which can appear when an 
  //object is detected and the sensor
  //malfunctioned
  if (a < 100 || a > 200) {
    //Play the Jurassic Park theme
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
    }
  }
  //Delay the repeat of the program for 0.1 seconds
  delay(100);
}
