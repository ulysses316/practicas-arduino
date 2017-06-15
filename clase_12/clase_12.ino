int ledPin1=8;
int ledPin2=7;
int ledPin3=6;
int inPin=1;

void turn_off(){
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
}

void setup() 
{
   pinMode(ledPin1,OUTPUT);
   pinMode(ledPin2,OUTPUT);
   pinMode(ledPin3,OUTPUT);
   turn_off();
}

void loop() 
{
   int val;
   val=analogRead(inPin);
   turn_off();
   if(val>=256)digitalWrite(ledPin1,HIGH);
   if(val>=512)digitalWrite(ledPin2,HIGH);
   if(val>=768)digitalWrite(ledPin3,HIGH);
}
