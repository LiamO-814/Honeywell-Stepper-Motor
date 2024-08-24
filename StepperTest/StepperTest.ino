#include <Stepper.h>                    //load library

#define STEPS 512                       //establish number of steps

Stepper stepper(STEPS, 23, 19, 22, 18);

void setup() 
{
  // put your setup code here, to run once:

  stepper1.setSpeed(10);                   //set speed of motor
  //stepper2.setSpeed(10);
}

void loop() 
{
  // put your main code here, to run repeatedly:

  stepper1.step(-128);                      //tell stepper motor to step.
}