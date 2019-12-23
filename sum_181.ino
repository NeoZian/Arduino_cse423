#include<Servo.h>

Servo motor;

void setup(){

pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  

  pinMode(3,OUTPUT); //trig
  pinMode(4,INPUT);  //echo
  
  pinMode(A0,INPUT);
  
  motor.attach(7);
  
  pinMode(2,OUTPUT); //AC


}

void loop(){


//lighting 
  
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,0);
  delay(100);
  
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(11,0);
  delay(100);
  
  digitalWrite(13,0);
  digitalWrite(12,0);
  digitalWrite(11,1);
  delay(100);
  
  
//temperature controlling
  
  float tmp = analogRead(A0);
  
  tmp = tmp * .004828814;
  tmp = (tmp - 0.5) * 100;
  
  delay (100);
  
  if(tmp>35){
  
  digitalWrite(2,1); //turning on AC-->here as a light
  
  }
  else {
  
    digitalWrite(2,0);
  }
  
 
  
  
  //ultrasonic 
  
  digitalWrite(3,0);
  delay(100);
  digitalWrite(3,1);
  delay(100);
  digitalWrite(3,0);
  delay(100);

  
    int reading = pulseIn(4,1)/29/2;
  
  if(reading <20){
    motor.write(90);
     }
  else{
    motor.write(0);
  }  
  

}




