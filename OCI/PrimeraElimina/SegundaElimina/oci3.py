"""

En el videojuego Meldovrix, el Gran Raga es una criatura enorme que protege el último nivel, y hasta ahora nadie ha logrado superarlo. Quienes lo intentan cuentan siempre lo mismo: al principio los hechizos le hacen efecto, pero poco a poco dejan de funcionar. Su secreto no es la fuerza, sino su increíble capacidad de adaptarse, y ninguna de sus adaptaciones se le olvida jamás.

El nivel dura 
 minutos 
. En el minuto 
 
 el jugador lanza exactamente un hechizo de tipo 
 
, que le quita 
 puntos de energía 
 al Gran Raga. Pero en cuanto el Gran Raga se adapta a un tipo de hechizo, los hechizos de ese tipo dejan de quitarle energía para siempre.

Adaptarse a un tipo de hechizo le toma 
 minutos 
 de concentración, y solo puede trabajar en un tipo a la vez:

Un tipo queda pendiente desde el minuto en que el Gran Raga recibe el primer hechizo de ese tipo, y deja de estarlo en cuanto se adapta a él.
Si al empezar un minuto no se está adaptando a nada, se pone a trabajar en el tipo pendiente más antiguo; si no tiene ninguno pendiente, espera.
Una adaptación tarda exactamente 
 minutos: si empieza en el minuto 
, queda completa al final del minuto 
. Desde el minuto 
 ese tipo ya no le quita energía y el Gran Raga queda libre para empezar con otro.
Tu tarea es calcular cuánta energía perdió en total el Gran Raga durante el nivel.

Entrada
La entrada consiste en 3 líneas:

La primera línea contiene dos números enteros 
 y 
: la duración del nivel en minutos y el tiempo de adaptación.
La segunda línea contiene 
 números enteros 
, donde 
 es el tipo del hechizo del minuto 
.
La tercera línea contiene 
 números enteros 
, donde 
 es la energía que quita el hechizo del minuto 
 si el Gran Raga aún no se ha adaptado a su tipo.
Salida
Una sola línea con un número entero: la energía total que perdió el Gran Raga.

"""