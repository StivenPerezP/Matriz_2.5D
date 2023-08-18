#include <Servo.h>
Servo myServo;
#define PIN_SERVO (9)
int data;
const int RELE4 = 13;

void SetStrokePerc(float strokePercentage)
{
  if ( strokePercentage >= 0.0 && strokePercentage <= 100.0 )
  {
    int usec = 1000 + strokePercentage * ( 2000 - 1000 ) / 100.0 ;
    myServo.writeMicroseconds( usec );
  }
}


void SetStrokeMM(int strokeReq,int strokeMax)
{
  SetStrokePerc( ((float)strokeReq) / strokeMax );
}

void setup() {
  // put your setup code here, to run once:
  SetStrokePerc(10);
  Serial.begin(9600);
  pinMode(RELE4, OUTPUT);
  myServo.attach(PIN_SERVO);
}

void loop() {

  

  if(Serial.available()){
    data = Serial.read();


    if(data=='A'){
      digitalWrite(RELE4, HIGH);
    } else if(data=='B') {
      digitalWrite(RELE4, LOW);
    }
    delay(50);

    if(data=='C'){
    int d = 10;
    int delayMS = 1500;
    int i = 0;
    SetStrokePerc(5);
    } else if(data=='D') {
    int d = 10;
    int delayMS = 1500;
    int i = 0;
    SetStrokePerc(29);
    } else if(data=='E') {
    int d = 10;
    int delayMS = 1500;
    int i = 0;
    SetStrokePerc(17);
    } else if(data=='F') {
    int d = 10;
    int delayMS = 1500;
    int i = 0;
    SetStrokePerc(42);
    }
  }

  // int d = 10;
  // int delayMS = 1500;
  // int i = 0;
/*
  for ( i = 1; i < 99; i += d )
  {
    SetStrokePerc(i);
    delay(delayMS);
  }
  for ( i = 99; i > 1;  i -= d )
  {
    SetStrokePerc(i);
    delay(delayMS);
  }
  */
  //  SetStrokePerc(5); // Se programa dentro de esta función el porcentaje de elevación del vástago.

  
}

