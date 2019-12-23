void setup()
{
  pinMode(9, OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
 int v = analogRead(A0);
  Serial.println(v);
  
  int m = map(v,6,679,255,0);
  
  analogWrite(9,m);
  
  
}