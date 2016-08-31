#include <AFMotor.h>
#include <AHMot.h>

int ardRead = 0;
//int rampMot = 0;
//int rampDir = 0;
//int rampSpeed = 0;
//int rampDelay = 0;
int i;

AF_DCMotor motor1(1, MOTOR12_64KHZ); // create motor #1, 1KHz pwm
AF_DCMotor motor2(2, MOTOR12_64KHZ); // create motor #2, 1KHz pwm
AF_DCMotor motor3(3, MOTOR34_64KHZ); // create motor #3, 1KHz pwm
AF_DCMotor motor4(4, MOTOR34_64KHZ); // create motor #4, 1KHz pwm

void setup()
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
  a_AHMot mot1_fwd;
  a_AHMot mot1_rev;
  a_AHMot mot2_fwd;
  a_AHMot mot2_rev;
  a_AHMot mot3_fwd;
  a_AHMot mot3_rev;
  a_AHMot mot4_fwd;
  a_AHMot mot4_rev;
  
  AHAddMot(&mot1_fwd);
  addmot
  
  
}

void loop()
{
  if (Serial.available() > 0)
  { //Check to see if ardRead
    ardRead = Serial.read();
  }

  switch (ardRead)
  {
    case 'Q':
      rampFunc(1, speed1, delay1);
      break;

    case 'A':
      ramp1(2, speed2, delay2);
      break;

    case 'W':
      ramp2(1, speed3, delay3);
      break;

    case 'S':
      ramp2(2, speed4, delay4);
      break;

    case 'E':
      ramp3(1, speed5, delay5);
      break;

    case 'D':
      ramp3(2, speed6, delay6);
      break;

    case 'R':
      ramp4(1, speed7, delay7);
      break;

    case 'F':
      ramp4(2, speed8, delay8);
      break;

    case 'Z':
      motor1.run(RELEASE);
      motor2.run(RELEASE);
      motor3.run(RELEASE);
      motor4.run(RELEASE);
      break;
  }
}


