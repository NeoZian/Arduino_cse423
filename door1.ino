#include<Servo.h>

Servo motor;

void setup(){
Serial.begin(9600);
pinMode(2,OUTPUT);  //trigger
pinMode(5,INPUT);   //ECHO
  
  pinMode(11,OUTPUT);  //GREEN
  pinMode(12,OUTPUT);   //RED
  
  pinMode(9,INPUT);   // SWITCH
  motor.attach(8);

}

int state = 0;

void loop(){
digitalWrite(2,0);
  delay(10);
  digitalWrite(2,1);
  delay(10);
  digitalWrite(2,0);
  delay(10);

int reading = pulseIn(5,1)/29/5;
  Serial.println(reading);
  
  if(reading<20){
    digitalWrite(11,1);
     digitalWrite(12,0);
    state=1;
    delay(10);
  
  }
  else{
  	
     digitalWrite(11,0);
     digitalWrite(12,1);
    state=0;
    delay(10);
  
  }
  
  if(digitalRead(9) && state){
  
    motor.write(90);
    
  
  }
  else{
      motor.write(0);
  }
  

}