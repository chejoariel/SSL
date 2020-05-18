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
resultado:
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


