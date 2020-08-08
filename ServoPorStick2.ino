#include <Servo.h> 
  
Servo servo; 
int stickX = 0; //esta variable la toma como "punto base" del stick

int servoEstado = 90;
  
int joystick; //determinamos el "angullo del servo motor" a un valor nulo por ahora
  
void setup() 
{
  servo.attach(3); //el servo.attach nos permite adjuntar el servo a un pin
}
  
void loop()
{
  
  //antes de continuar, recuerden que los valores de stick van desde 0 hasta 1023
  //el servo tiene como valor minimo 0 y maximo 180 (por lo menos el que uso yo para este proyecto
  
  joystick = analogRead(stickX);
  
  //estado neutral de stick
  if (joystick > 400  && joystick < 600){
    servoEstado = servoEstado;
  }
  
  //estado de stick (cuando este aumenta)
  if(joystick <= 450){
     servoEstado = servoEstado + 3;
  }
  
  //estado de stick (cuanddo este disminuye)
  else if(joystick >= 550){
     servoEstado = servoEstado - 3;
  }
  
  //estad0 maximo de servo
  if (servoEstado >= 180){
    servoEstado = 180;
  }
  
  //estado minimo de servo
  else if (servoEstado <= 0){
    servoEstado = 0;
  }
  
  servo.write(servoEstado);
  delay(15);
}
