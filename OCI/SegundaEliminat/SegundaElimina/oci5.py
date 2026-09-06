"""
Valentina está recorriendo el reino y lleva una bitácora donde anota, en orden, cada ciudad que visita. Quiere que las ciudades más famosas aparezcan lo antes posible en su bitácora.

El reino tiene 
 ciudades numeradas del 
 al 
, de la menos famosa a la más famosa. La ciudad 
 es su hogar, y ahí comienza su recorrido. Por las reglas del reino, cada ciudad 
 (para 
) tiene una ciudad 
 que la desbloquea: Valentina solo puede visitar la ciudad 
 si ya visitó antes la ciudad 
.

Una ciudad está disponible si ya está desbloqueada y Valentina todavía no la ha visitado. En el primer turno la única ciudad disponible es su hogar.

En cada turno, Valentina elige una de las ciudades disponibles, la visita y la anota en su bitácora. Al visitarla, se desbloquean todas las ciudades que dependían de ella. Una ciudad disponible que no elige sigue disponible en los turnos siguientes.

El recorrido termina cuando visitó las 
 ciudades, así que su bitácora es una lista con las 
 ciudades en el orden en que las visitó.

A Valentina le gustaría elegir el orden de sus visitas para que su bitácora sea lexicográficamente máxima. Una lista es lexicográficamente mayor que otra si, en la primera posición donde difieren, tiene un número mayor.

Tu tarea es calcular la bitácora lexicográficamente máxima.

Entrada
La entrada consiste en 2 líneas:

La primera línea contiene un número entero 
, la cantidad de ciudades.
La segunda línea contiene 
 números enteros 
, donde 
 es la ciudad que desbloquea a la ciudad 
.
Salida
Una sola línea con 
 números enteros separados por espacios: las ciudades en el orden en que Valentina las visita.

"""