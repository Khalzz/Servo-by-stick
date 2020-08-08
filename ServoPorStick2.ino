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
  
  joystick = analogRead(stickX);
  
  if (joystick > 400  && joystick < 600){
    servoEstado = servoEstado;
  }
  
  if(joystick <= 450){
     servoEstado = servoEstado - 3;
  }
  
  else if(joystick >= 550){
     servoEstado = servoEstado + 3;
  }
  
  if (servoEstado >= 180){
    servoEstado = 180;
  }
  
  else if (servoEstado <= 0){
    servoEstado = 0;
  }
  
  servo.write(servoEstado);
  delay(15);
}
