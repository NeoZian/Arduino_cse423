void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
  	   
  //	char c = Serial.read();
    int n=Serial.parseInt();
    // int n=Serial.parseInt(); //to read integer value
    
  //	Serial.println(c);
    Serial.println(n);
    
 /*   if((c=='p') || (n==1)){
    	digitalWrite(13,1);
    
    }
    else if((c=='q') || (n==0)){
    	
      	digitalWrite(13,0);
      
    }
    
 */
  
    
    if((n==1)){
    	digitalWrite(13,1);
    
    }
    else if((n==0)){
    	
      	digitalWrite(13,0);
      
    
    }
    
  
  
  }
  
}