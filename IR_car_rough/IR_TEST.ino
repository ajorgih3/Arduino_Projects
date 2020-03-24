#include <IRremote.h>

const int RECV_PIN = 12;
const int ENA = 5;
const int ENB = 6;
const int IN1 = 7;
const int IN2 = 8;
const int IN3 = 9;
const int IN4 = 11;
const int carspeed = 150;
#define F 16736925 
#define B 16754775
#define L 16720605
#define R 16761405
#define S 16712445
#define UNKNOWN_F 5316027
#define UNKNOWN_B 2747854299
#define UNKNOWN_L 1386468383
#define UNKNOWN_R 553536955
#define UNKNOWN_S 3622325019
long preMillis;

IRrecv irrecv(RECV_PIN);
decode_results results;

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


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    preMillis = millis();
    switch (results.value) {
      case F:
      case UNKNOWN_F: forward(); break;
      case B:
      case UNKNOWN_B: backward(); break;
      case L:
      case UNKNOWN_L: left(); break;
      case R:
      case UNKNOWN_R: right(); break;
      case S:
      case UNKNOWN_S: halt(); break;
      default: break;
      }
    }

    else {
      if (millis() - preMillis > 500) {
        halt();
        preMillis = millis();
        }
      }
}
