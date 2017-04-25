#include <Servo.h>

Servo gfi, gmi, gfd, gmd, gtd, gti;
Servo bfi,bfd,bmd,bmi, btd, bti;
/*GF: Giro frontal
  GM: Giro medio
  GT: Giro trasero*/
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

 bfd.attach(8);
 bfi.attach(9);
 bmd.attach(10);
 bmi.attach(11);
 btd.attach(13);
 bti.attach(12);

 
//Posicion inicio
//para todos los servos de giro
 gfi.write(90);
 gmi.write(90);
 gfd.write(90);
 gmd.write(90);
 gtd.write(40);
 gti.write(130);

//Posicion inicio
//para todos los servos 
}

void loop() {
  // put your main code here, to run repeatedly:

 
//prepararGiro();
//prepararBrazos();
//pruebaBrazos();
//pruebaGiro();
avanzarDer();
avanzarIzq();

//caminar();



}

//movimiento por lado Der
void avanzarDer(){
 delay(500);
  bfd.write(80);
  bmi.write(100);
  btd.write(70);
  delay(500);
  gfd.write(125);
  gmi.write(60);
  gtd.write(100);
  delay(500);
  /*
 */
  delay(500);
  bfd.write(90);
  bmi.write(90);
  btd.write(90);
  delay(500);
  gfd.write(90);
  gmi.write(85);
  gtd.write(40);
  delay(500);
  }


//movimiento por lado IZQ
void avanzarIzq(){
  
  bfi.write(115);
  bmd.write(75);
  bti.write(100);
  delay(500);
  
  gfi.write(60);
  gmd.write(125);
  gti.write(80);
  delay(500);
  /*
 */

  bfi.write(95);
  bmd.write(90);
  bti.write(80);
  delay(500);
  
  gfi.write(100);
  gmd.write(90);
  gti.write(130);
  delay(500);
  
  }
void caminar(){
  
  bfd.write(80);
  bmi.write(100);
  btd.write(80);
  delay(200);
  gfd.write(125);
  gmi.write(60);
  gtd.write(100);
  delay(200);
  /*
 */

  bfd.write(90);
  bmi.write(90);
  btd.write(90);
  delay(200);
  gfd.write(90);
  gmi.write(85);
  gtd.write(40);
  delay(200);





  bfi.write(115);
  bmd.write(75);
  bti.write(100);
  delay(200);
  gfi.write(60);
  gmd.write(125);
  gti.write(80);
  delay(200);
  /*
 */
 
  bfi.write(95);
  bmd.write(90);
  bti.write(80);
  delay(200);
  gfi.write(100);
  gmd.write(90);
  gti.write(130);
  delay(200);
  
}

 //proceso preparacion motores brazos
void prepararBrazos(){
 bfi.write(90);
  delay(15);
 bfd.write(100);
  delay(15);
 bmi.write(90);
  delay(15);
 bmd.write(90);
  delay(15);
 bti.write(100);
  delay(15);
 btd.write(80); 
 delay(15);
  }

//proceso preparacion motores giro
void prepararGiro(){
 gfi.write(60);
 gfd.write(115);
 gmi.write(85);
 gmd.write(90);
 gti.write(140);
 gtd.write(40); 
  }

/*void pruebaGiro(){
  int t =20;
  int pos =0;
  for(t=0;t<=20;t--){
    for (pos = 0; pos <= 140; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
   gfi.write(pos);
   gmi.write(pos);
   gfd.write(pos);
   gmd.write(pos);
   gtd.write(pos);
   gti.write(pos);         
    delay(15);                   
  }
  for (pos = 140; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
   gfi.write(pos);
   gmi.write(pos);
   gfd.write(pos);
   gmd.write(pos);
   gtd.write(pos);
   gti.write(pos);          
    delay(15);                       
   }    
  }
}*/

/*void pruebaBrazos(){
  int t =5;
  int pos =0;
  for(t=0;t<=5;t--){
    for (pos = 0; pos <= 130; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
   bfi.write(pos);
   bmi.write(pos);
   bfd.write(pos);
   bmd.write(pos);
   btd.write(pos);
   bti.write(pos);         
    delay(15);                   
  }
  for (pos = 130; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
   bfi.write(pos);
   bmi.write(pos);
   bfd.write(pos);
   bmd.write(pos);
   btd.write(pos);
   bti.write(pos);          
    delay(15);                       
   }    
  }
}*/


void baile(){
  
  bfd.write(80);
  bmi.write(100);
  btd.write(80);
  delay(200);
  gfd.write(125);
  gmi.write(60);
  gtd.write(100);
  delay(200);
gfd.write(90);
  gmi.write(85);
  gtd.write(40);
  delay(200);
bfd.write(90);
  bmi.write(90);
  btd.write(90);
  

   delay(200);
  bfi.write(115);
  bmd.write(75);
  bti.write(100);
  delay(200);
  gfi.write(60);
  gmd.write(125);
  gti.write(80);
  delay(200);
  gfi.write(100);
  gmd.write(90);
  gti.write(130);
  delay(200);
  /*
 */
 
  bfi.write(95);
  bmd.write(90);
  bti.write(80);
  delay(200);
  
  delay(500);



}

