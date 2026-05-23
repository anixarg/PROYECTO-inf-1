# PROYECTO-inf-1
Datos del alumno

Nombre y Apellido: Anabella Flores Quispe
Correo: [tucorreo@gmail.com](mailto:tucorreo@gmail.com)
Curso y Division: 4°1
Materia: PROYECTO 1
Docente: Gonzalo Consorti

Descripcion de la materia:
En esta materia trabajamos con programacion y electronica utilizando Arduino, desarrollando circuitos electronicos basicos y sistemas interactivos mediante el uso de componentes como LEDs RGB, 

potenciometros, buzzers y pulsadores osea botones.

Organizacion de la branch:
La branch contiene:

Archivo .ino con el codigo fuente del proyecto.

Captura de pantalla del circuito realizado.

Archivo README.md actualizando con la informacion del trabajo practico 2.

Consigna a resolver:
Utilizando un solo LED RGB y tomando como base el TP1, desarrollar un sistema que permita:

Controlar el tiempo entre cambios de colores utilizando un potenciometro.
El tiempo debe variar aproximadamente entre 0 y 3 segundos.
Encender y apagar el sistema mediante un pulsador funcionando como boton.
Reanudar o detener la secuencia en cualquier momento.
Utilizar un buzzer que emita un sonido cuando cambien los colores.
Personalizar los colores RGB utilizando 3 potenciometros independientes.
Realizar parpadeos aproximados de 100 ms entre cambios de color.
Mostrar informacion en el monitor serial con el siguiente formato:
Tiempo: x 
R:x 
G:x 
B:x
Donde:
* x representa el tiempo en segundos.
* R, G y B representan valores entre 0 y 255.

Tambien utilizando esta formula para escalar valores analogicos:
(value * 255) / 1023

Comentarios sobre complicaciones:
Durante el desarrollo del trabajo práctico surgieron algunas dificultades relacionadas con:
La configuración correcta del LED RGB se me complico en donde debia ir el codigo de los colores, la lectura de multiples potenciometros al mismo tiempo se me complico,
el manejo del pulsador utilizando logica me costo masomenos pero lo logre digamos, la sincronización entre el buzzer, el parpadeo y el cambio de colores eso si se me complico pero pude eso creo.
