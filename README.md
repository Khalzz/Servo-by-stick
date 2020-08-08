# Servo por joystick

Este "mini proyecto" es parte de mi estudio de arduino y su función principal es servirme como guia/recordatorio a futuro para hacer proyectos mas grandes con este mismo codigo/funcionalidad.

**Importante, hay mas de 1 archivo de código, ambos tienen distintas formas de funcionar,pero estos 2 requieren de el mismo tipo de conexión, los archivos de código son los archivos `.ino`**

Materiales:
+ arduino
+ protoboard
+ 2 entradas de electricidad (uno de  5 o 9 volts y otro de preferiblemente 5 volts)
+ cables (general, estos pueden variar de los modelos de servos o en su defecto otros tipos de materiales)
+ 1 stick
+ 1 servo motor (en mi caso es un micro servo motor)
---
## Circuito
![Image not found](https://github.com/Khalzz/Servo-by-stick/blob/master/arduinoCircuit.jpg)
---
## Cosas a tomar en cuenta

+ podemos cambiar las baterias de 9v por una entrada de 5v como un enchufe usb o otros

+ a pesar de tener una entrada de energia (la bateria) debemos usar tambien una entrada de energia al arduino (usb o otro medio)

  + la bateria 9v representa la alimentacion de el motor
  
  + la entrada usb en este caso solo le entregaria energia a el stick
+ entre la tierra de la bateria y la tierra del servo, tenemos una tierra que va conectada al arduino **sin este no funciona**
+ el stick esta conectado solo a el ejeX pero podriamos repetir el proceso con otro servo al ejeY o un led con el boton del stick
+ el codigo esta comentado casi linea por linea pues este esta pensado para gente que no sepa y para "explicarse el mismo"
