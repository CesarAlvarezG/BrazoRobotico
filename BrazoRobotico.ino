#include <Servo.h>
#define pinBase 12//Declaro el pin de la base
#define pinDerecha 11//Declaro el pin de la derecha
#define pinIzquierda 10//Declaro el pin de la izquierda
#define pinMano 9//Declaro el pin de la mano

Servo motorBase;//Declaro el servomotor de la base
Servo motorDerecha;//Declaro el servomotor de la derecha
Servo motorIzquierda;//Declaro el servomotor de la izquierda
Servo motorMano;//Declaro el servomotor de la mano


void setup() {
  // put your setup code here, to run once:
  motorBase.attach(pinBase);//Inicializamos el servo Base
  motorDerecha.attach(pinDerecha);//Inicializamos el servo Derecha
  motorIzquierda.attach(pinIzquierda);//Inicializamos el servo Izquierda
  motorMano.attach(pinMano);//Inicializamos el servo Mano
  
  motorBase.write(0);//Posición inicial
  motorDerecha.write(0);//Posición inicial
  motorIzquierda.write(0);//Posición inicial
  motorMano.write(0);//Posición inicial
}

void loop() {
  // put your main code here, to run repeatedly:

}
