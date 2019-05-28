#include <Servo.h>
#define motorBase 12//Declaro el pin de la base


Servo Base;//Declaro el servomotor de la base

void setup() {
  // put your setup code here, to run once:
  Base.attach(motorBase);//Inicializamos el servo
  Base.write(90);
  delay(2000);
  Base.write(0);
  delay(2000);
  Base.write(180);
}

void loop() {
  // put your main code here, to run repeatedly:

}
