"""
Se organiza en filas de n personas
la fila se representa con una hilera de s de n letras
Mayus de pie y minus sentada


"""

#numero de casos de prueba 
t = int(input())
p = [t for _ in range(t)]


n = []
s = []

for i in p: 
    n = [int(x) for x in input().split()]  
    s = [str(x) for x in input().split()] 


#Cada que se me ocurre una idea, la destroza el hecho de 
#que esos indices no los puedo usar para poder ubicarme

    
for i in s:
    if i == i.lower:
        i[i+1] == i[i+1].upper
        i +=1 
    

for i in n:
    if i /2 == int: 
        a = i.lower
        print(a)


    



"""
Mi idea primero comprobar si la palabra es de longitud par para comenzar siempre con la 
minuscula, una vez que ya sepamos esto, se cambia la primera a muniscula si no se mantiene 
en mayuscula, la que le sigue deberia de ser diferente a la que ya tenemos, si en el if nos 
dio que si era par la longitud entonces la que le sigue debe de ir en mayuscula, y asi sucesivamente
Esto se podria guardar en una nueva lista, tipo s1, y luego cuando se va a imprimir la nueva lista 
con las letras bien intercaladas se le hace .split, para que se vea como una simple palabra. 

Ahorita el problema es que no se porque no me daja usar eso indices, o sea, entiendo el hecho en que me
esta diciendo que a las listas no les puedo ver ese indice, pero la cosa es, como es que yo no le puedo 
ver el indice, si mas arriba en la p le estoy viendo cada uno de los i, o sea, cada uno de los indices a 
la lista de p, eso es lo que se me hace un poco mas extra;o, que no se entonces ni cual es la diferencia 
entre esos dos ni tampoco el hecho de como lo hago.

Entiendo la idea, lo que debo hacer primero es leer un numero de casos de olas que yo quiero comprobar que 
este bien hecha, ese es mi numero t, una vez hecho esto, lo que yo hice fue definir mi p, que es una :lista" 
en donde se le agrega un caracter la cantidad de veces que me indica mi variable t. Ok, una vez hago esto le 
indico que por cada uno de estos caracteres que yo agregue a p, que serian basicamente la cantidad de casos de
olas que yo quiero comprobar, lea una linea de numeros, para ver cuantas personas participan en la ola, y lea 
otra linea que contiene una palabra, esta debe de ser de igual longitud que lo que indica l, ya que son los 
carteles que van a usar las personas, entonces no sobran ni faltan. 

Una vez que ya tengo la entrada, yo primero verificaria que la palabra no sea de longitud par, ya que si es
de longitud par se da lo que ellos le llaman "empate", cuando se encuentra uno de estos empates lo que se hace
es que la primera letra, o el primer cartel este sentado, para que la ola inicie desde abajo y se pueda ganar. 
si no hay esta condicion entonces, a mi se me ocurre, que se puede contar la cantidad de mayusculas y minusculas,
el problema es que a mi no me esta funcionando hacer eso, por alguna razon ni siquiera puedo lograr eso. Una vez que 
se tenga esto, como la condicion me dijo que no debia de iniciar con la minuscula inicio con el de la mayuscula. Se 
sabe que despues de la mayuscula no puede ir una minuscula, asi hasta que se acaben las personas. Lo que no llego
a lograr es pensar como puedo ir intercalando estos carteles. 



¡Llegó el Mundial de fútbol! En la barra del estadio Olímpico de Competencias Internacionales (OCI), la ovación se organiza en filas de 
 personas 
.

Cada persona tiene un cartel con una letra. La fila se representa con una hilera 
 de 
 letras: mayúscula significa que está de pie, y minúscula que está sentada.

Bruno opera la pantalla gigante y Olivia coordina la ovación. Juntos buscan una hilera intercalada: nunca dos personas vecinas ambas de pie, ni ambas sentadas. Quieren lograrlo con el menor número posible de cambios. Lo único que puede cambiar es si cada persona queda de pie o sentada; la letra de su cartel se mantiene.

Si hay empate, prefieren una hilera que empiece con minúscula (la primera persona sentada), para que la ola arranque desde abajo.

Hay varias filas (casos de prueba). Para cada una, imprime cómo queda la hilera.

Entrada
La primera línea contiene un entero 
 
, el número de casos de prueba. Luego siguen 
 casos. Cada caso tiene 2 líneas:

Un entero 
, la cantidad de personas en la fila.
La hilera 
 de 
 letras.
Salida
Para cada caso, una línea con la hilera final: intercalada, con el mínimo de cambios y, si hay empate, empezando con minúscula.


"""