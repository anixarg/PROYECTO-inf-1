# PROYECTO-inf-1
Tp_Museo - Sistema de Alarma Inteligente

Datos del Alumno:
Nombre y Apellido: Anabella Flores Quispe
Correo: anabellajk200@gmail.com
Curso y División: 4°1

Docente:

Profesor: Gonzalo Consorti
correo: consor92@gmail.com

Materia:
Programacion de Sistemas Electrónicos con Arduino.

Organización de la Branch

La branch contiene una carpeta llamada igual que el Tp_3.

### Contenido

Tp_3.ino: codigo fuente del proyecto Arduino.
Tp_3.png: imagen o captura del circuito realizado.
README.md: documentacion y descripcion del trabajo.

Consigna:
Desarrollar un sistema de alarma inteligente para proteger una obra de arte dentro de un museo utilizando distintos sensores.

El sistema debe utilizar:
Sensor de temperatura.
Sensor de movimiento (PIR).
Sensor de luz (LDR).
Sensor de distancia (HC-SR04).
LED RGB.
Buzzer.
Pantalla LCD.

Funcionamiento:
Sensor de temperatura:
Cuando la temperatura supera los 39 °C
LED RGB rojo.
Sonido de advertencia mediante buzzer.

Sensor de movimiento:
Cuando se detecta movimiento
LED RGB amarillo.
Sonido breve de advertencia.

Monitoreo nocturno:
Cuando la luz ambiente es menor al 20%:
El sistema entra en modo nocturno.
Si ademas detecta movimiento o temperatura elevada, se activa la alarma completa.

Control de proximidad:

Durante el dia:
Si una persona se acerca a menos de 1 metro de la obra de arte:
LED RGB rojo.
Secuencia de alarmas mediante buzzer.

Monitoreo en tiempo real:
La pantalla LCD muestra continuamente:
Temperatura.
Nivel de luz.
Distancia detectada.
Ademas, los datos se muestran por el monitor serial para facilitar el monitoreo por parte del personal de seguridad.

Comentarios y Complicaciones:

Las principales dificultades que tuve fueron:
Calibracion del sensor de temperatura no sabia que estaba mal siempre me maracaba como que no habia nada y asi.
Configuracion del sensor ultrasnico para obtener mediciones exactas tuve complicaciones de por que no me andaba, me fije cada parte y el tema eran los cables no me habia dado cuenta que estaban mal colocacodos.
Organizacin de las alertas visuales y sonoras para evitar falsas alarmas tuve demasiado complicacion... decia por que no me da la distancia la temperatura antes y asi masomenos se pudo lo que hice de seguro.

