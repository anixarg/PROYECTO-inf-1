# PROYECTO-inf-1
# Trabajo Practico: Sensor de Temperatura y Luz Ambiental con LED RGB

Datos del Alumno

Nombre y Apellido: Anabella Flores Quispe
Correo: anabellajk200@gmail.com
Curso y División: 4°1
Docente: Gonzales Consorti
Materia: Proyecto 1

Organizacion de la Branch:

La branch contiene una carpeta llamada igual que el Tp_4.

Estructura:
Tp_4:
Tp_4.ino
README.md
Tp_4.png

Consigna a Resolver:

Desarrollar un programa en Arduino que permita:
Leer los datos de un sensor de temperatura TMP35.
Leer los datos de un sensor de luz ambiental LDR.
Mostrar ambos valores por el Monitor Serie.

Utilizar un LED RGB para indicar el rango de temperatura:
Rojo: temperatura mayor a 90°C.
Azul: temperatura menor a 18°C.
Verde: temperatura entre 18°C y 90°C.

Utilizar un mapeo invertido para el porcentaje de luz:
0% = toda la luz encendida.
100% = toda la luz apagada.
Encender el LED RGB unicamente cuando el nivel de luz se encuentre entre 30% y 70%.
Declarar los pines mediante constantes con nombres descriptivos.
Utilizar macros para los mensajes mostrados por el Monitor Serie.

Explicacion del Funcionamiento:

El programa realiza lecturas continuas del sensor TMP35 y de la LDR mediante entradas analogicas.
La temperatura obtenida se convierte a grados Celsius y se muestra por el Monitor Serie junto con el porcentaje de iluminacion calculado a partir de la LDR mediante un mapeo invertido.

Dependiendo de la temperatura medida, se enciende un color especifico del LED RGB:
* Rojo para temperaturas superiores a 90°C.
* Azul para temperaturas inferiores a 18°C.
* Verde para temperaturas comprendidas entre 18°C y 90°C.
El LED RGB solamente se activa cuando el nivel de luz ambiental se encuentra entre el 30% y el 70%.

Complicaciones:

Durante el desarrollo se presentaron algunos problemas:
La calibracion del sensor TMP35 en la simulacion.
La interpretacion del mapeo invertido de la LDR.
La correcta conexion del LED RGB y la identificacion de sus terminales.
El tema de los codigos de cada uno en el if se complico y digamos que algo salio pero no es como yo lo esperaba.

