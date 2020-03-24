#include <Servo.h>

Servo myservo;



void setup() {
  // put your setup code here, to run once:
  myservo.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(90);
  
  for (int pos = 0; pos <= 180; pos++) {
    myservo.write(pos);
    delay(40);
    }

  for (int pos = 180; pos >= 0; pos--) {
    myservo.write(pos);
    delay(40);
    }
}
