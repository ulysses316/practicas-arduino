int pinArray []={2,3,4,5,6,7,8,9,10,11,12};
int controlLed=13;
int waitNextLed=100;

int tailLength=4;

int lineSize=11;


void setup() 
{
  int i;
  pinMode(controlLed,OUTPUT);
    for(i=0;i<lineSize;i++)
    {
      pinMode(pinArray[i],OUTPUT);
    }
}

void loop() 
{
  int i;

  int tailCounter=tailLength;

  digitalWrite(controlLed,HIGH);
    for(i=0;i<lineSize;i++)
    {
      digitalWrite(pinArray[i],HIGH);

      delay(waitNextLed);
        if (tailCounter==0)
          {

            digitalWrite(pinArray[i-tailLength],LOW);
          }
          else
            if(tailCounter>0)
               tailCounter--;
          }
           for(i=(lineSize-tailLength);i<lineSize;i++)
             {
                digitalWrite(pinArray[i],LOW);
                delay(waitNextLed);
           }
}
