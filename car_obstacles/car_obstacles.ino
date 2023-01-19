#include <NewPing.h>

const int TRIG_PIN = 7;
const int ECHO_PIN = 6;
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5; //declare your pins

NewPing sonar (TRIG_PIN, ECHO_PIN, 200);


void setup() {
  // put your setup code here, to run once:
  pinMode (TRIG_PIN, OUTPUT);
  pinMode (ECHO_PIN, INPUT);
  pinMode (IN1 , OUTPUT);
  pinMode (IN2 , OUTPUT);
  pinMode (IN3 , OUTPUT);
  pinMode (IN4 , OUTPUT);
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.print("Distance: ");
  Serial.print(sonar.ping_cm());
  Serial.print(" cm");
  if (sonar.ping_cm() >= 10)
  {
    forward();
  }
  else  {
    Stop();
    delay(500);
    backward();
    delay(700);
    Stop();
    delay(300);
    right();
    delay(1800);
  }
}


void forward() {
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
}

void backward() {
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);

}

void right() {
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);

}

void left() {
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);

}

void spin() {
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
}

void Stop() {
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
}
