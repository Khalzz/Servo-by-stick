# Servo por joystick

Este "mini proyecto" es parte de mi estudio de arduino y su función principal es servirme como guia/recordatorio a futuro para hacer proyectos mas grandes con este mismo codigo/funcionalidad.

Importante, el archivo de codigo es el archivo `.ino`

Materiales:
+ arduino
+ protoboard
+ 2 entradas de electricidad (uno de  5 o 9 volts y otro de preferiblemente 5 volts)
+ cables (general, estos pueden variar de los modelos de servos o en su defecto otros tipos de materiales)
+ 1 stick
+ 1 servo motor (en mi caso es un micro servo motor)
---
## Circuito
El circuito no es complejo pero requieres de 2 fuentes de energia, pues la energia que sale del arduino luego de pasar por el mismo no es suficiente para alimentar el mismo, asi que este es un tema a tomar en cuenta y debes recordar que si o si debe haber una "tierra" en el protoboard que esta entre la bateria de 9v y el motor, esta va conectado a alguna entrada de tierra del arduino (cualquiera) sin esto el circuito **no funcionara**
![Image not found](https://github.com/Khalzz/Servo-by-stick/blob/master/arduinoCircuit.jpg)
---
## Cosas a tomar en cuenta

+ podemos cambiar las baterias de 9v por una entrada de 5v como un enchufe usb o el mismo usb de arduino

+ a pesar de tener una entrada de energia (la bateria) debemos usar tambien una entrada de energia al arduino (usb o otro medio)

  + la bateria 9v representa la alimentacion de el motor
  
  + la entrada usb en este caso solo le entregaria energia a el stick
+ entre la tierra de la bateria y la tierra del servo, tenemos una tierra que va conectada al arduino **sin este no funciona**
+ el stick esta conectado solo a el ejeX pero podriamos repetir el proceso con otro servo al ejeY o un led con el boton del stick
+ el codigo esta comentado casi linea por linea pues este esta pensado para gente que no sepa y para "explicarse el mismo"
