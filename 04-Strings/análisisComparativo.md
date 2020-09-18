# Análisis Comparativo

## 1.Lenguaje C vs Lenguaje JavaScript

a. *¿El tipo es parte del lenguaje en algún nivel?**

I. **Lenguaje JavaScript**

Los strings son un tipo de dato en javascript. Es reconocido en todos los niveles.
A nivel lexico y sintactico como una cadena de caracteres encerrada entre "" y a nivel semantico como una arrgelo de tipo char.

II. **Lenguaje C**

Los Strings no pertenecen como tipo de dato en C, para ello es necesario utilizar la biblioteca <string.h>.

b. *¿El tipo es parte de la biblioteca?**

I. **Lenguaje JavaScript**

Como el String es un tipo de dato en Javascript no es necesario utilizar una biblioteca para manipularlo.

II. **Lenguaje C**

La biblioteca <string.h> no define el tipo de dato String, lo que hace es definir funciones para manipularlos y el compilador transforma la cadena de caracteres encerrado entre "" 
como un arreglo de char.

c. *¿Qué alfabeto usa?**

I. **Lenguaje Javascript**

En Javascript el alfabeto que se usa es el ISO-Latin-1.

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

El string en C es mutable. Para logar que sea inmutable se puede utiliza la varible const al momento de declararla.


