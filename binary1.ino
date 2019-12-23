// The pins to which we've wired each of the LEDs 
int ledPins[] = {8,9,10,11};
byte count=0;
void setup()
{
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
}

void loop()
{

    dispBinary(count++);
  delay(500);
  
  
}

void dispBinary(byte n)
{
  for (byte i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], n & 1);
    n /= 2;
  }
}
