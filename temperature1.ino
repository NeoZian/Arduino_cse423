void setup(){
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(9,OUTPUT);

}

void loop(){

float tmp = analogRead(A0);
 tmp = tmp * .004828814;
 // tmp = tmp * .48828135;
  
tmp=(tmp-.5)* 100;
  
  int val = map(tmp,0,50,255,0);
 // analogWrite(9,val);
  Serial.println(tmp);
  delay(1000);
  if(tmp > 45){
     digitalWrite(9,1);
  }
  


}