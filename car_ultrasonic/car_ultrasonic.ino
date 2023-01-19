//  Declarations
int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;


float distance, timeduration;
long int startime;

//speed control pins
int ENA = 9;
int ENB = 10;

const int trig = 7;
const int echo = 6;





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (trig, OUTPUT);
  pinMode (echo, INPUT);
  //IN1 and IN2 controls side A while IN3 and IN4 controls side B
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  //ENA & ENB controls the speed on side A & b respectively
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  //switch off all motors
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);



}

void loop() {
  // put your main code here, to run repeatedly:
  getDistance();
  Serial.print(distance);
  Serial.println("cm");

//  if (distance >= 15) {
//    Serial.println("command 1 running");
//    forward(220, 220);
//  }
//    else {
//      backward(80, 220);
//    }
  forward(255, 255);
  if(distance<15){
    Stop();
  }
//  else if(distance<15 && distance-=){
//    backward(220, 220);
//  }





  }
  void test() {
    //side A forward
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    //side A forward
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }

  void forward(int a, int b) {
    digitalWrite (IN1, HIGH);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, HIGH);

    analogWrite(ENA, a);
    analogWrite(ENB, b);
  }

  void backward(int c, int d) {
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, HIGH);
    digitalWrite (IN3, HIGH);
    digitalWrite (IN4, LOW);

    analogWrite(ENA, c);
    analogWrite(ENB, d);
  }



  void spinleft(int c) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    //where n is PWM input
    analogWrite(ENA, c);
    analogWrite(ENB, c);
  }

  void spinright(int d) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    //where n is PWM input
    analogWrite(ENA, d);
    analogWrite(ENB, d);
  }

  void Stop() {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }

  float getDistance() {
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    timeduration = pulseIn(echo, HIGH);
    distance = timeduration * 0.017;

  }
