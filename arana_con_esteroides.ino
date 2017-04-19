#include <Servo.h>

Servo BFI,BFD,GFI,GFD,CFI,CTI;
Servo BTI,GTI,BTD,GTD,CFD,CTD;

void setup() {
  // put your setup code here, to run once:
  //Base
  BFI.attach(11);
  BFD.attach(8);
  //Giro
  GFI.attach(12);
  GFD.attach(9);
  //Codos
  CFD.attach(10);
  CFI.attach(13);

//Base
  BTI.attach(5);
  BTD.attach(3);
//Giro
   GTI.attach(7);
  GTD.attach(1);
//Codos
 CTI.attach(6);
 CTD.attach(2);

 //seteos
//up-down delanteros
 GFI.write(50);
 GFD.write(110);

 //codo delantero
 CFI.write(60);
 CFD.write(120);

//up-down traseros
 GTI.write(110);
 GTD.write(65);

 //codo delantero
 CTI.write(125);
 CTD.write(50);

//Bases
//Delanteras
BFD.write(50);
BFI.write(125);

//Traseras
BTD.write(120);
BTI.write(55);
}
void loop() {
  // put your main code here, to run repeatedly:
move1();
}

void move1(){
   delay(400);
 BFD.write(100);
 GTI.write(130);
 delay(400);
 GFD.write(130);
 BTI.write(100);
 delay(400);
 BFD.write(50);
 GTI.write(110);
 delay(400);
 GFD.write(110);
 BTI.write(55);
  }
void PataFrontD(){
  delay(400);
 BFD.write(100);
 delay(400);
 GFD.write(130);
 delay(400);
 BFD.write(50);
 delay(400);
 GFD.write(110);
 }
 void PataBackI(){
  delay(400);
  GTI.write(130);
 delay(400);
 BTI.write(100);
 delay(400);
GTI.write(110);
 delay(400);
  BTI.write(55);
 }
