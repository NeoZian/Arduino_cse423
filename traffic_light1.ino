int green=13;
int yellow=12;
int red=11;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  
}


void changeLight(){

//green off yellow on
  digitalWrite(green,0);
  digitalWrite(yellow,1);
  delay(3000);
  
//yellow off red on
  digitalWrite(yellow,0);
  digitalWrite(red,1);
  delay(5000);  
  
//red off yellow on
  digitalWrite(red,0);
  digitalWrite(yellow,1);
  delay(2000);
  
//yellow off green on
  digitalWrite(yellow,0);
  digitalWrite(green,1);

  
}

void loop()
{
  
  changeLight();
  delay(12000);

}
