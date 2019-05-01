/*
 * Iwan Cilibur
 * @iwancilibur
 * www,interactiverobotics.club
 */

#include <StepperMotor.h>

StepperMotor motor(10,11,12,13);

void setup(){
  Serial.begin(115200);
  motor.setStepDuration(1);
}

void loop(){
  if(Serial.available()>0){
    char data=Serial.read();
    if(data=='1'){
      motor.step(4500);
    }else if(data=='2'){
      motor.step(-4500);
    }
  }
 // motor.step(4000);
  //delay(2000);
  //motor.step(-4000);
  //delay(2000);
}
