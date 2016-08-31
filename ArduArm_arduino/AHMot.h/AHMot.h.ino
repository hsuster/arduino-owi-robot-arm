typedef struct AHMot
{
  int mot;
  int dir;
  int spd;
  int del;
} a_AHMot;

void AHAddMot(a_AHMot *addmot *adddir *addspd *adddel)
{
  addmot->mot
  adddir->dir
  addspd->spd
  adddel->del
}

void rampFunc(int rampMotor, int rampDirection, int rampSpeed, int rampDelay)
{
  switch (rampMotor)
  {
    case 1:
      if (rampDirection == 1)
      {
        motor1.run(FORWARD);
      }
      if (rampDirection == 2);
      {
        motor1.run(BACKWARD);
      }
      if (rampDirection == 3)
      {
        motor1.run(RELEASE);
      }
      for (i = 0; i < rampSpeed; i++)
      {
        motor1.setSpeed(i);
        delay(rampDelay);
      }
      for (i = rampSpeed; i != 0; i--)
      {
        motor1.setSpeed(i);
        delay(rampDelay);
      }
      break;

    case 2:
      if (rampDirection == 1)
      {
        motor2.run(FORWARD);
      }
      if (rampDirection == 2);
      {
        motor2.run(BACKWARD);
      }
      if (rampDirection == 3)
      {
        motor2.run(RELEASE);
      }
      for (i = 0; i < rampSpeed; i++)
      {
        motor2.setSpeed(i);
        delay(rampDelay);
      }
      for (i = rampSpeed; i != 0; i--)
      {
        motor2.setSpeed(i);
        delay(rampDelay);
      }
      break;

    case 3:
      if (rampDirection == 1)
      {
        motor3.run(FORWARD);
      }
      if (rampDirection == 2);
      {
        motor3.run(BACKWARD);
      }
      if (rampDirection == 3)
      {
        motor3.run(RELEASE);
      }
      for (i = 0; i < rampSpeed; i++)
      {
        motor3.setSpeed(i);
        delay(rampDelay);
      }
      for (i = rampSpeed; i != 0; i--)
      {
        motor3.setSpeed(i);
        delay(rampDelay);
      }
      break;

    case 4:
      if (rampDirection == 1)
      {
        motor4.run(FORWARD);
      }
      if (rampDirection == 2);
      {
        motor4.run(BACKWARD);
      }
      if (rampDirection == 3)
      {
        motor4.run(RELEASE);
      }
      for (i = 0; i < rampSpeed; i++)
      {
        motor4.setSpeed(i);
        delay(rampDelay);
      }
      for (i = rampSpeed; i != 0; i--)
      {
        motor4.setSpeed(i);
        delay(rampDelay);
      }
      break;
  }
}

