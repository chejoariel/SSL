# Análisis Comparativo

## 1.  Lenguaje C vs Lenguaje JavaScript

a. *¿El tipo es parte del lenguaje en algún nivel?*

I. **Lenguaje JavaScript**

Los Strings son un tipo de dato en javascript. Es reconocido en todos los niveles.
A nivel léxico y sintáctico como una cadena de caracteres encerrada entre "" y a nivel semántico como una arrgelo de tipo char.

II. **Lenguaje C**

Los Strings no pertenecen como tipo de dato en C, para ello es necesario utilizar la biblioteca <string.h>.

b. *¿El tipo es parte de la biblioteca?*

I. **Lenguaje JavaScript**

Como el String es un tipo de dato en Javascript no es necesario utilizar una biblioteca para manipularlo.

II. **Lenguaje C**

La biblioteca <string.h> no define el tipo de dato String, lo que hace es definir funciones para manipularlos y el compilador transforma la cadena de caracteres encerrado entre "" 
como un arreglo de char.

c. *¿Qué alfabeto usa?*

I. **Lenguaje Javascript**

En Javascript el alfabeto que se usa para un char es el ISO-Latin-1.

II. **Lenguaje C**

En C el alfabeto que se usa para un char es UTF-8. 

d. *¿Cómo se resuelve la alocación de memoria?**

I. **Lenguaje Javascript**

Como los String en JavaScript son inmutables deja mucho residuos en memoria. La liberación de memoria es implícito ya que se realiza "automaticamente" mediante el *garbage collector*.

II. **Lenguaje C**

Los lenguajes de bajo nivel, como C, tienen primitivos de bajo nivel como malloc() y free() para la gestión de memoria. Por ende la liberación de memoria se realiza
de forma explícita.

e. *¿El tipo tiene mutabilidad o es inmutable?*

I. **Lenguaje Javascript**

El string en javascript es inmutable, no se puede pisar el valor y asignar otro.

II. **Lenguaje C**

El string en C es mutable. Para lograr que sea inmutable se puede utilizar la varible const al momento de declararla.

f. *¿El tipo es un first class citizen?*

Un *first class citizen* es una entidad que soporta todas las operaciones generalmente disponibles para otras entidades. Por lo general, estas operaciones incluyen pasarlas como un argumento, devolverlas de una función, modificarlas y asignarlas a una variable.

I. **Lenguaje JavaScript**

Un tipo String puede ser enviado como parámetro a una función, también puede ser devuelto como resultado y puede ser sujeto de una asignación de una variable al momento en que la variables es definida. Por lo tanto se puede concluir que el tipo String en Javascript es un First class Citizen.

II. **Lenguaje C**

En C un string es tratado como un arreglo de char con lo cual para ser enviado como argumento a una función se envía un puntero al primer elemento de ese array, para acceder al resto de los valores hay que computar un desplazamiento con respecto a esa primer posición.

Para ser devuelto como resultado de una función, dicha función debe optar por dos caminos:
Escribir el string resultante en un bloque de memoria facilitado a la función como salida o crear una cadena en el Heap en tiempo de ejecución y devolver la dirección de memoria al primer elemento. Por ambos caminos la cadena es devuelta como resultado de una función indirectamente.

Para String y arreglos en general no se pueden asignar valores directamente excepto en el momento de declaración del arreglo.

g. *¿Cuál es la mecánica para ese tipo cuando se lo pasa como argumentos?*

I. **Lenguaje JavaScript**

El tipo String puede ser argumento de una función de forma directa sin necesidad de direcciones de memoria apuntando al comienzo de la cadena, tampoco es necesario computar un desplazamiento de la memoria explícitamente.

II. **Lenguaje C**

El tipo String se puede enviar como argumento de una función a través de un puntero señalando el comienzo de la cadena y además la cadena debe finalizar con un caracter nulo de finalización: '\0'.

h. *¿Y cuando son retornados por una función?*

I. **Lenguaje JavaScript**

El tipo String puede ser devuelto como resultado de una función sin necesidad de punteros o mecanismos de direccionamiento de memoria.

II. **Lenguaje C**

El tipo String puede ser devuelto como resultado de una función a través de un puntero señalando el comienzo de un espacio de memoria libre para almacenar el resultado o reservando una un bloque de memoria en el Heap que será escrito por la función y luego devuelto en forma de dirección de memoria apuntando al primer elemento.








