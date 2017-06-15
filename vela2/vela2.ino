int ledPin = 9;   
int val = 0; 
int delayval = 0; 


void setup() 
{
  randomSeed(0); 
  pinMode(ledPin, OUTPUT); 
}

void loop() 
{
  val = random(100,255); 
  analogWrite(ledPin, val); 
  delayval = random(50,150); 
  delay(delayval);   
}
