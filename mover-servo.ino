#include <Servo.h> 
  
Servo servo; 
int stickX = 0; //esta variable la toma como "punto base" del stick
  
int servoVal; //determinamos el "angullo del servo motor" a un valor nulo por ahora
  
void setup() 
{
  servo.attach(3); //el servo.attach nos permite adjuntar el servo a un pin
}
  
void loop()
{
  
  servoVal = analogRead(stickX); //el valor de la lectura del analogo se adiere a la variable servoVal
  
 //la funcion map() se divide en 5 valores 
 //(Variable, valor minimo de la variable, valor maximo de la variable, dato minimo que nos devolvera, valor maximo que nos devolvera)
  servoVal = map(servoVal, 0, 1023, 0, 180); //en este caso mapeamos los datos del servo
 
 /*
 (valor minimo de servo 0 nos entrega el valor 0)
 (valor maximo servo 1023 nos entrega el valor 180)
 */
  
  servo.write(servoVal); //escribir en el servo el nuevo valor del analogo
  delay(15);
}
