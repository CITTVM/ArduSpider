#include <Servo.h>

Servo gfi, gmi, gfd, gmd, gtd, gti;


/*Giro Brazo
gfi 1
gmi 2
gfd 3
gmd 4
gtd 5
gti 6*/


void setup() {
  
 gfi.attach(1);
 gmi.attach(2);
 gfd.attach(3);
 gmd.attach(4);
 gtd.attach(5);
 gti.attach(6);


 gfi.write(90);
 gmi.write(90);
 gfd.write(90);
 gmd.write(90);
 gtd.write(90);
 gti.write(90);

}

void loop() {
  // put your main code here, to run repeatedly:

}
