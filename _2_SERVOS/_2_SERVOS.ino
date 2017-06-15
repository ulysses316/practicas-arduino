#include <Servo.h>
Servo Servo_1;
Servo Servo_2;
int Angulo=0;
int Angulo_2=0;

void setup()
{
  Servo_1.attach(2);
  Servo_2.attach(3);

}

void loop() 
{
  for(Angulo=0;Angulo<180;Angulo+=1)
    {
      Servo_1.write(Angulo);
      delay(10);
    }
   for(Angulo_2=0;Angulo_2<100;Angulo_2+=1)
     {
        Servo_2.write(Angulo_2);
        delay(20);
     }
    for(Angulo=180;Angulo>=1;Angulo-=1)
      {
        Servo_1.write(Angulo);
        delay(16);
      }
     for(Angulo_2=100;Angulo_2>=1;Angulo_2-=1)
       {
        Servo_2.write(Angulo_2);
        delay(12);
       }

}
