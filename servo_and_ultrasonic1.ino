#include<Servo.h>

Servo motor;


void setup(){
  Serial.begin(9600);

pinMode(2,OUTPUT);
pinMode(3,INPUT);

motor.attach(4);


}

void loop(){

digitalWrite(2,0);
delay(10);  
digitalWrite(2,1);
delay(10);
digitalWrite(2,0);
delay(10);

int reading= pulseIn(3,1)/29/2 ;
  
  Serial.println(reading);
  
  if(reading > 20){
  
    motor.write(90);
  }
  else{
      motor.write(180);
  }


}