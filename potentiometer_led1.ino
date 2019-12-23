void setup()
{
  pinMode(11, OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{

  int a = analogRead(A0);
  Serial.println(a);
  
  int value = map(a ,0,1023,0,255);
  analogWrite(11,value);
  
  
  
  
  
}