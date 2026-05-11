# PROYECTO-inf-1

## Datos del Alumno
- **Nombre y Apellido:** Anabella Flores Quispe
- **Correo:** anabellajk200@gmail.com
- **Curso y División:** 4°1

## Datos del Docente
- **Nombre y Apellido:** Gonzalo Consorti
- **Correo:** consor92@gmail.com

## Materia
**Proyecto 1**

## Descripción
Esta materia se enfoca en el desarrollo de proyectos prácticos con Arduino, abarcando el manejo digital, analógico y la combinación de ambos tipos de señales para crear sistemas interactivos con LEDs, botones, potenciómetros y buzzers.

## Estructura de la Rama
```
guia-1/
├── README.md (este archivo)
└── GUIA-1/
    ├── Manejo Digital
    │   ├── 01_semaforo_auto_peatonal/
    │   ├── 02_escalera_10_leds/
    │   ├── 03_leds_impares_pares/
    │   ├── 04_semaforo_tren/
    │   ├── 05_2_leds_rgb/
    │   ├── 06_boton_alarma/
    │   ├── 07_boton_3_leds_rgb/
    │   ├── 08_boton_cambio_color_rgb/
    │   └── 09_escalera_boton_pausa/
    ├── Manejo Analógico
    │   ├── 01_led_5_intensidades/
    │   ├── 02_cascada_8_leds/
    │   ├── 03_led_rgb_tonalidades/
    │   ├── 04_potenciometro_velocidad_rgb/
    │   ├── 05_led_rgb_3_potenciometros/
    │   ├── 06_potenciometro_parpadeo/
    │   └── 07_potenciometro_buzzer/
    └── Mezclados Analógico/Digital
        ├── 01_ambulancia/
        ├── 02_boton_rgb_potenciometro/
        └── 03_6_leds_rgb_potenciometro/
```

## Consignas a Resolver

### Manejo Digital
1. **Semáforo Auto y Peatonal:** Simular el ciclo de encendido de luces de un semáforo (tanto del auto como el peatonal) funcionando al mismo tiempo.
2. **Escalera 10 LEDs:** Prender una serie de 10 leds comunes en una secuencia de escalera.
3. **LEDs Impares y Pares:** Prender a la vez, de una tanda de 10 leds comunes, los 5 impares y luego los 5 pares, alternando el prender y apagar.
4. **Semáforo Tren:** Simular el semáforo de un tren con 2 leds y un Buzzer para el sonido.
5. **2 LEDs RGB:** Prender 2 leds RGB de tal manera que uno quede prendido y otro apagado, mostrando cada uno cuando prenda esta serie de colores: rojo, cian, verde, magenta, azul, blanco, amarillo.
6. **Botón Alarma:** Con un botón al mantenerlo presionado lograr iniciar una secuencia de sonidos de prendido y apagado estilo alarma.
7. **Botón + 3 LEDs RGB:** Con ayuda de un botón y 3 leds rgb lograr que cada vez que se toque el botón se apaguen todos los leds y solo se prenda 1, cada vez que se toque el botón cambiar de led prendido.
8. **Botón Cambio Color RGB:** Con la ayuda de un botón, cada vez que se toque, cambiar el color de un led rgb en esta secuencia: rojo, cian, verde, magenta, azul, blanco, amarillo.
9. **Escalera Pausa:** Generar una secuencia de prendido en escalera de 10 leds comunes, cada vez que se pulse un botón la secuencia se detiene y si se vuelve a presionar continúa.

### Manejo Analógico
1. **LED 5 Intensidades:** Prender un led común en 5 intensidades distintas.
2. **Cascada 8 LEDs:** Generar una cascada de 8 leds comunes que vayan de apagado gradualmente hasta el último led totalmente prendido, el primero totalmente apagado.
3. **LED RGB Tonalidades:** Con un led rgb mostrar 3 tonalidades distintas de los siguientes colores: cian, rojo, amarillo.
4. **Potenciómetro Velocidad RGB:** Con ayuda de un potenciómetro cambiar la velocidad de parpadeo de 2 leds rgb en color magenta y amarillo.
5. **LED RGB 3 Potenciómetros:** Colocar 1 led rgb y 3 potenciómetros, cada potenciómetro debe controlar la intensidad de cada canal del led rgb.
6. **Potenciómetro Parpadeo:** Con un potenciómetro variar la velocidad de parpadeo de un led común en un rango de 0s a 10s.
7. **Potenciómetro Buzzer:** Con un potenciómetro y un Buzzer generar una gama de sonidos.

### Mezclados Analógico/Digital
1. **Simulación Ambulancia:** Generar la simulación de las luces y sonido de una ambulancia.
2. **Botón RGB Potenciómetro:** Con la ayuda de un botón prender una luz rgb y luego que el usuario pueda cambiar el color del mismo con ayuda de 1 potenciómetro, utilizar map y 3 rangos de escalas para manejar los colores R G B para poder combinarlos.
3. **6 LEDs RGB Potenciómetro:** Un botón inicia una secuencias de 6 leds rgb que tienen cada uno un color diferente, la secuencia es escalonada y con un potenciómetro cambiar la velocidad en que se van prendiendo y apagando.

## Complicaciones Encontradas

Durante el desarrollo de los ejercicios se encontraron las siguientes complicaciones:

- **Configuración de Pines:** Dificultad en la identificación y configuración correcta de los pines digitales y analógicos en la placa Arduino.
- **Potenciómetro:** Problemas al calibrar el potenciómetro y asegurar lecturas estables de los valores analógicos.
- **Posición de Cables:** Conexiones incorrectas o inestables debido a la mala posición de los cables en la protoboard, causando contactos deficientes.

Estas complicaciones fueron resueltas mediante revisión cuidadosa de la documentación de Arduino, verificación de continuidad en los cables y reposicionamiento adecuado de los componentes en la protoboard.

---

**Última actualización:** 2026-05-11
