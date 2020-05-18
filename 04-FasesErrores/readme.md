# Fase y traducción de errores

### 2)
comando ejecutado:
```
gcc -E hello2.c -o hello2.i
```
análisis del archivo hello2.i:
* El comentario /*medio*/ es reemplazado por un espacio.
* Incluye los archivos de la biblioteca stdio

### 4)
código:
```
int printf(const char *s, ...); 
```
Resultado:  
Se trata de una declaración o prototipo de una función llamado printf que contiene una serie de parámetros.

### 5)
comando ejecutado:
```
gcc -E hello3.c -o hello3.i
```
Diferencia:   
La principal diferencia es que en el archivo hello3.i se agrega en la cabecera 4 líneas de comandos.
```
# 1 "hello3.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "hello3.c"
```

### 6)
comando ejecutado:
```
gcc -S hello3.c
```
Resultado:    
No realizó la compilación. Tiro una advertencia y un error.
````
warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
    4 |  prontf("La respuesta es %d\n");
       |  ^~~~~~
       |  printf
````
Sugiere que utilicemos printf.
````
error: expected declaration or statement at end of input
````
Esperaba una declaración. Falta una llave de cierre.

### 7) 
comando ejecutado: 
````
gcc -E hello4.c -o hello4.i
````
Resultado:    
Agregó en la cabecera 4 líneas de comandos. Similares al archivo hello3.i
````
# 1 "hello4.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "hello4.c"
````
comando ejecutado:
````
gcc -S hello4.c -o hello4.s
````
Resultado:    
El archivo hello4.s es un archivo compilado en lenguaje ensamblador.

### 8)
Investigación: El archivo hello4.s 
//

### 9)
comando ejecutado:
````
as -o hello4.o hello.s
````
Resultado:    
El archivo hello4.o es un archivo ensamblado en lenguaje máquina.

### 10)
comando ejecutado:
````
gcc -o hello4 hello4.o
````
Crea el ejecutable ``hello4`` que invocando por su nombre nos da como resultado: ``La respuesta es 4200688``

### 11)
comando ejecutado:
´´´´
gcc -o hello5 hello5.c
´´´´
Crea el archivo ejecutable ``hello5``

### 12)
comando ejecutado:
´´´´
	hello5

´´´´
no da como resultado: ´´La respuesta es 42´´        
El resultado es correcto.

### 13)
No hay más correcciones, el resultado en el paso 12) fue el esperado.

### 14)
comando ejecutado:
````
gcc -o hello7 hello7.c
````
No da como resultado:
````
hello7.c: In function 'main':
hello7.c:3:2: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    3 |  printf("La respuesta es %d\n", i);
      |  ^~~~~~
hello7.c:3:2: warning: incompatible implicit declaration of built-in function 'printf'
hello7.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h>
    1 | int main(void){
````
A pesar de las advertencias sí ejecuto el archivo ``hello7``. Nos da como resultado:
````
La respuesta es 42
````
Esto se debe que a pesar de las advertencias el linker se encarga de vincular las funciones de la biblioteca stdio que el compilador no encontró.



