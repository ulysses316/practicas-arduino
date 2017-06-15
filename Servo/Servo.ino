#include <Servo.h>

Servo Servo_1;
int Angulo;

void setup() 
{
   Servo_1.attach(3); 

}

void loop()
{
   for (Angulo=0;Angulo<180;Angulo+=1)
     {
       Servo_1.write(Angulo);
       delay(15);
     }
     delay(500);
        for(Angulo=180;Angulo>=1;Angulo-=1)
          {
            Servo_1.write(Angulo);
            delay(15);
          }
          
delay(500);
}
