# Servo por joystick

Este "mini proyecto" es parte de mi estudio de arduino y su función principal es servirme como guia/recordatorio a futuro para hacer proyectos mas grandes con este mismo codigo/funcionalidad.
---
## Circuito

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
