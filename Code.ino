/*------ Arduino Fire Fighting Robot Code----- */

 

#include <Servo.h>

Servo myservo;

 

int pos = 0;    

boolean fire = false;

 

/-------defining Inputs------/

#define Left_S 12      // left sensor  9
#define Forward_S 13 //forward sensor   8
#define Right_S 2      // right sensor  10

/-------defining Outputs------/

#define LM1 4       // left motor   2

#define LM2 5       // left motor   3

#define RM1 6      // right motor   4

#define RM2 7      // right motor   5

#define ENA 10       // left motor   2

#define ENB 11       // left motor   3

#define pump 3  //  6

 

void setup()

{

  pinMode(Left_S, INPUT);

  pinMode(Right_S, INPUT);

  pinMode(Forward_S, INPUT);

  pinMode(LM1, OUTPUT);

  pinMode(LM2, OUTPUT);

  pinMode(RM1, OUTPUT);

  pinMode(RM2, OUTPUT);

  pinMode(pump, OUTPUT);

  pinMode(ENA, OUTPUT);
 
  pinMode(ENB, OUTPUT);

  digitalWrite(pump,HIGH);

  myservo.attach(9);    //11

  myservo.write(90);

}

 void mspd(){

  analogWrite(ENA, 50);
    analogWrite(ENB, 50);
   }
 void mspd1(){

  analogWrite(ENA, 150);
    analogWrite(ENB, 150);
   }

void put_off_fire()

{

    delay (500);

 
      mspd();
    digitalWrite(LM1, HIGH);

    digitalWrite(LM2, HIGH);

    digitalWrite(RM1, HIGH);

    digitalWrite(RM2, HIGH);

   

   digitalWrite(pump, LOW); delay(500);

   

    for (pos = 50; pos <= 130; pos += 1) {

    myservo.write(pos);

    delay(10);  

  }

  for (pos = 130; pos >= 50; pos -= 1) {

    myservo.write(pos);

    delay(10);

  }

 

  digitalWrite(pump,HIGH);

  myservo.write(90);

 

  fire=false;

}

 

void loop()

{

   myservo.write(90); //Sweep_Servo();  

 

    if (digitalRead(Left_S) ==1 && digitalRead(Right_S)==1 && digitalRead(Forward_S) ==1) //If Fire not detected all sensors are zero

    {

    //Do not move the robot


      mspd();


    digitalWrite(LM1, HIGH);

    digitalWrite(LM2, HIGH);

    digitalWrite(RM1, HIGH);

    digitalWrite(RM2, HIGH);

    }

   

    else if (digitalRead(Forward_S) ==0) //If Fire is straight ahead

    {

    //Move the robot forward


     mspd();

    digitalWrite(LM1, HIGH);

    digitalWrite(LM2, LOW);

    digitalWrite(RM1, HIGH);

    digitalWrite(RM2, LOW);

    fire = true;

    }

   

    else if (digitalRead(Left_S) ==0) //If Fire is to the left

    {

    //Move the robot left

    mspd1();

    digitalWrite(LM1, HIGH);

    digitalWrite(LM2, LOW);

 //   digitalWrite(RM1, HIGH);

 //   digitalWrite(RM2, HIGH);


      digitalWrite(RM1, LOW);
      digitalWrite(RM2, HIGH);
   

    fire = true;

    }

   

    else if (digitalRead(Right_S) ==0) //If Fire is to the right

    {

    //Move the robot right

      mspd1();

  // digitalWrite(LM1, HIGH);

 //   digitalWrite(LM2, HIGH);

    digitalWrite(RM1, HIGH);

    digitalWrite(RM2, LOW);



      digitalWrite(LM1, LOW);
      digitalWrite(LM2, HIGH);

 
    fire = true;

    }

   

delay(300); //Slow down the speed of robot

 

     while (fire == true)

     {

      put_off_fire();

     }

}
