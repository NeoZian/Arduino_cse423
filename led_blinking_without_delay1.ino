int interval =1000;
int prevMill=0;
int ledstate=0;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  
int curMill=millis();
  if((curMill - prevMill)>interval){
  
    prevMill = curMill;
    
    if(ledstate==0){
      ledstate=1;
    }
    else{
    	ledstate=0;
    }
      
    digitalWrite(13,ledstate);
  
  }
    
  
}