#include <Servo.h>
#include <Ultrasonic.h>

Ultrasonic ultrasonic(8,7); //Creacion del Objeto ultrasonico para el uso del sensor SR04

Servo gfi, gmi, gfd, gmd, gtd, gti,bfi,bfd,bmd,bmi, btd, bti; //Creacion de los objetos correspondientes a cada motor




void setup() {
   //Setteos de cada motor a un puerto de comunicacion (Digitales como Analogos tambien)
  // g = Giro  b= Brazo f=Frontal  m=Medio t=Trasero i=Izquierdo d=Derecho
  
 gfi.attach(1);
 gmi.attach(2);
 gfd.attach(3);
 gmd.attach(4);
 gtd.attach(5);
 gti.attach(A2);

 bfd.attach(A3);
 bfi.attach(9);
 bmd.attach(10);
 bmi.attach(11);
 btd.attach(13);
 bti.attach(12);
 
}


void loop() {
 //aqui utilizamos el sensor de ultrasonido
 // donde si es mayor a 15cm que reconoce el mismo camina en caso contrario
 // si es menor, este girara a la izquierda
  int i=0;  
 if (ultrasonic.Ranging(CM)>15){
  caminar();
 }else{
  for(i=0;i<7;i++){
    girarIzquiera();
  }
 }
 delay(200);
}



//metodo encargado de la secuencia de caminata o de movimiento de la araña
void caminar(){
  
//subir  izquierdo
 bfi.write(115);
 bmd.write(75);
 bti.write(40);
 delay(200);

 //avance izquierdo
 gfi.write(60);
  gmd.write(125);
  gti.write(80);
  delay(200);

//bajar izquierdo
 bfi.write(95);
 bmd.write(90);
 bti.write(65);
 delay(200);
 
  //retroceso izquierdo
 gfi.write(100);
  gmd.write(90);
  gti.write(130);
  delay(200);

  //subir Derecha
  bfd.write(60);
  bmi.write(120);
  btd.write(110);
  delay(200);

//avance Derecha
  gfd.write(125);
  gmi.write(60);
  gtd.write(90);
  delay(200);

  //bajar Derecha
  bfd.write(90);
  bmi.write(90);
  btd.write(90);
  delay(200);

  //retroceso Derecha
  gfd.write(90);
  gmi.write(85);
  gtd.write(50);
  delay(200);
  
}

//metodo utilizado para hacer girar la araña en el momento 
//de que el sensor de ultrasonido detecte una distancia menor a 15cm,
// se utiliza este metodo para poder realizar el giro pertiente y continuar el camino
void girarIzquiera(){

 //subir Derecha
  bfd.write(60);
  bmi.write(120);
  btd.write(110);
  delay(200);

//avance Derecha
  gfd.write(125);
  gmi.write(60);
  gtd.write(90);
  delay(200);

  //bajar Derecha
  bfd.write(90);
  bmi.write(90);
  btd.write(90);
  delay(200);

  //retroceso Derecha
  gfd.write(90);
  gmi.write(85);
  gtd.write(50);
  delay(200);

   
//subir  izquierdo
 bfi.write(115);
 bmd.write(75);
 bti.write(40);
 delay(200);

  //retroceso izquierdo
 gfi.write(100);
  gmd.write(90);
  gti.write(130);
  delay(200);

//bajar izquierdo
 bfi.write(95);
 bmd.write(90);
 bti.write(65);
 delay(200);
 
 
  //avance izquierdo
 gfi.write(60);
  gmd.write(125);
  gti.write(80);
  delay(200);

  
}

