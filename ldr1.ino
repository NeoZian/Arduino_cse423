void setup()
{
  pinMode(9, OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{

  int val= analogRead(A0);
  
  int b = map(val,6,679,255,0);
  Serial.println(val);
  
  
  analogWrite(9,b);
  

  
}