int potPin=5;
int val=0;


void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  val=analogRead(potPin);
  Serial.print(val);
  Serial.write(10);
  delay(100);
}
