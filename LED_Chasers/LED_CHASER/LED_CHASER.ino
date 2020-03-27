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
digitalWrite(yellowLED1, HIGH);
delay(100);
digitalWrite(yellowLED2, HIGH);
delay(100);
digitalWrite(yellowLED3, HIGH);
delay(100);
digitalWrite(yellowLED4, HIGH);
delay(100);
digitalWrite(yellowLED5, HIGH);
delay(100);
digitalWrite(greenLED1, HIGH);
delay(100);
digitalWrite(greenLED2, HIGH);
delay(100);
digitalWrite(greenLED3, HIGH);
delay(100);
digitalWrite(greenLED4, HIGH);
delay(100);
digitalWrite(greenLED5, HIGH);
delay(100);
digitalWrite(yellowLED1, LOW);
delay(100);
digitalWrite(yellowLED2, LOW);
delay(100);
digitalWrite(yellowLED3, LOW);
delay(100);
digitalWrite(yellowLED4, LOW);
delay(100);
digitalWrite(yellowLED5, LOW);
delay(100);
digitalWrite(greenLED1, LOW);
delay(100);
digitalWrite(greenLED2, LOW);
delay(100);
digitalWrite(greenLED3, LOW);
delay(100);
digitalWrite(greenLED4, LOW);
delay(100);
digitalWrite(greenLED5, LOW);
delay(100);
}
