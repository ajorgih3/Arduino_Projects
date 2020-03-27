#define yellowLED1 4
#define yellowLED2 5
#define yellowLED3 6
#define yellowLED4 7
#define yellowLED5 8
#define greenLED1 9
#define greenLED2 10
#define greenLED3 11
#define greenLED4 12
#define greenLED5 13

void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED1, OUTPUT);
  pinMode(yellowLED2, OUTPUT);
  pinMode(yellowLED3, OUTPUT);
  pinMode(yellowLED4, OUTPUT);
  pinMode(yellowLED5, OUTPUT);
  pinMode(greenLED1, OUTPUT);
  pinMode(greenLED2, OUTPUT);
  pinMode(greenLED3, OUTPUT);
  pinMode(greenLED4, OUTPUT);
  pinMode(greenLED5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(greenLED1, 0);
  analogWrite(greenLED2, 0);
  analogWrite(greenLED3, 0);
  analogWrite(greenLED4, 0);
  analogWrite(greenLED5, 0);
   
   int yellow1 = 0;
   int yellow2 = 0;
   int yellow3 = 0;
   int yellow4 = 0;

   int green1 = 0;
   int green2 = 0;
   int green3 = 0;
   int green4 = 0;
   int green5 = 0;
  
  for (int i = 0; i < 255; i++) {
    yellow1++;
    delay(1);
    analogWrite(yellowLED2, yellow1);
    }

  for (int i = 0; i < 255; i++) {
    yellow1--;
    delay(1);
    analogWrite(yellowLED2, yellow1);
    }

  for (int i = 0; i < 255; i++) {
    yellow2++;
    delay(1);
    analogWrite(yellowLED3, yellow2);
    }

  for (int i = 0; i < 255; i++) {
    yellow2--;
    delay(1);
    analogWrite(yellowLED3, yellow2);
    }
  for (int i = 0; i < 255; i++) {
    green1++;
    delay(1);
    analogWrite(greenLED1, green1);
    }
    for (int i = 0; i < 255; i++) {
    green1--;
    delay(1);
    analogWrite(greenLED1, green1);
    }

     for (int i = 0; i < 255; i++) {
    green2++;
    delay(1);
    analogWrite(greenLED2, green2);
    }
    for (int i = 0; i < 255; i++) {
    green2--;
    delay(1);
    analogWrite(greenLED2, green2);
    }

     for (int i = 0; i < 255; i++) {
    green3++;
    delay(1);
    analogWrite(greenLED3, green3);
    }
    for (int i = 0; i < 255; i++) {
    green3--;
    delay(1);
    analogWrite(greenLED3, green3);
    }

}
