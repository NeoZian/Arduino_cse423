/*

int state=0;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{

  int instate=digitalRead(2);
  
  if(state){
     
    digitalWrite(9,1);
    state=1;
    delay(10);

  
  }
  else{
  	digitalWrite(9,0);
    state=0;
    delay(10);
    
  }
  
 
}



*/
int state = 0;

void setup()
{
    pinMode(2, INPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
  /*  int button_value = digitalRead(2);

    if (button_value) {
      if (state) {
        digitalWrite(9, 0);
        state = 0;
        delay(10); // To avoid debouncing problem
      } else {
        digitalWrite(9, 1);
        state = 1;
        delay(10); // To avoid debouncing problem
      }
    }  
    
    */
  int btn = digitalRead(2);
  if(btn){
    if(state==0){
  
    digitalWrite(9,1);
  delay(100);
      state=1; 
    }
      else{
   digitalWrite(9,0);
         delay(100);
  state=0;
      }
  
  }
}