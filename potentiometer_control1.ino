void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{

  int value = analogRead(A0);
  Serial.println(value);
  
  delay(1); // Wait for 1000 millisecond(s)
}
 