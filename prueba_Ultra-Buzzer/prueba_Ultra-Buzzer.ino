#include <Ultrasonic.h>

Ultrasonic ultrasonic(10,11); // (Trig PIN,Echo PIN)
int buzzer = 3;

void setup() {
  
  pinMode(buzzer, OUTPUT);   // sets the pin as output

}

void loop() {
 if (ultrasonic.Ranging(CM)<5){

  
     analogWrite(buzzer,128); //emite sonido
     delay(500); //espera medio segundo
     digitalWrite(buzzer, LOW); //deja de emitir
     delay(500);//espera medio segundo
 }
 delay(1000);

}
