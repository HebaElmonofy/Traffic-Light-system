// C++ code
//
int red = 13;  
int yellow = 8; 
int green = 7; 
int ON = 1000; 
int OFF = 1000;
void setup()
{
  pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);  
}

void loop()
{
  digitalWrite(red, HIGH); // set the  Red LED on
delay(ON); // wait for time “ON” (ms)
  digitalWrite(red, LOW); delay(OFF);
digitalWrite(yellow,HIGH); 
delay(ON);
 digitalWrite(yellow,LOW);
delay(ON);
digitalWrite(yellow,HIGH); 
delay(ON);
 digitalWrite(yellow,LOW);
delay(ON);
  digitalWrite(yellow,HIGH); 
delay(ON);
 digitalWrite(yellow,LOW);
delay(ON);
digitalWrite(green, HIGH); delay(ON);
  digitalWrite(green, LOW); delay(OFF);
}