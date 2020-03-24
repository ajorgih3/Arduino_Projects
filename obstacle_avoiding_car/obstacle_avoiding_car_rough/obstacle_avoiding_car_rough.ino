#include <Servo.h>

Servo myservo;
#define ENA 5
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11
#define ENB 6
int carspeed = 150;

int trig = A5;
int echo = A4;

void forward() {
  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  }
  
void backward() {
  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  }

void left() {
  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  }

void right() {
  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  }

void halt() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  }

int distance() {
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);

  float duration = pulseIn(echo, HIGH);
  float distance = (duration / 2) * 0.0343;
  return (int)distance;
  }

void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  myservo.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
int middleCollision = distance();
if (middleCollision < 20) {
halt();
delay(500);
myservo.write(0);
delay(1000);
int leftCollision = distance();
delay(500);
myservo.write(90);
delay(1000);
int middleCollision1 = distance();
delay(500);
myservo.write(180);
delay(1000);
int rightCollision = distance();
delay(500);
myservo.write(90);

if (rightCollision < leftCollision) {
  right();
  delay(1000);
  }

if (leftCollision < rightCollision) {
  left();
  delay(1000);
  }

if (leftCollision <= 20 || rightCollision <=20) {
  backward();
  delay(500);
  }

else {
  forward();
  }
}

else {
  forward();
  }
  

}
