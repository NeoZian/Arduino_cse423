int c=0;
void setup()
{
 Serial.begin(9600);
  pinMode(7,INPUT); 
  pinMode(6,OUTPUT);
}

void loop()
{
	int a = digitalRead(7);
  Serial.println(a);
  if(a == 1){
   	digitalWrite(6,1);
  }else{
  digitalWrite(6,0);
  }
}