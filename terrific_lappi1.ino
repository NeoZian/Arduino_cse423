#include<Servo.h>

Servo motor;

void setup()
{
  pinMode(7, OUTPUT);   //trig
  pinMode(6, INPUT);   //echo
  pinMode(A0, INPUT);
  motor.attach(5);
  Serial.begin(9600);
}

void loop()
{

  int pht = analogRead(A0);

  int mpht = map(pht,6,679,255,0);
Serial.println(mpht);
  
  if(mpht < 100){
      
digitalWrite(7,0);
delay(10);  
digitalWrite(7,1);
delay(10);
digitalWrite(7,0);
delay(10);

int reading= pulseIn(6,1)/29/2 ;
  
  Serial.println(reading);
  
  if(reading < 20){
  
    motor.write(90);
  }
  else{
      motor.write(0);
  }


  
    
  
  }
  
}