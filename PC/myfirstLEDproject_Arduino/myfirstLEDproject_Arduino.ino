#define LED1 13

#define LED2 53

int mls = 100;

int b[] {LED1,LED2};

void setup()

{
  pinMode(b[0], OUTPUT);
  
  pinMode(b[1], OUTPUT);
}

void loop()

{
  digitalWrite(b[0], HIGH);   // turn the LED on (HIGH is the voltage level)  
  
  delay(mls);
  
  digitalWrite(b[0],LOW);   // turn the LED on (HIGH is the voltage level)
  
  delay(mls);
  
  digitalWrite(b[1], HIGH);   // turn the LED on (HIGH is the voltage level)
   
  delay(mls);
  
  digitalWrite(b[1],LOW);   // turn the LED on (HIGH is the voltage level)
  
  delay(mls);
  
}
