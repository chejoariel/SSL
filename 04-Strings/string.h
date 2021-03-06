#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

//prototipos

/*
    GetLength
        Descripción: Calcula la longitud de una cadena.
        Argumentos:
            1. const char * stringValue: puntero const a un arreglo char tratado como una cadena.
        
        Resultado:
            1. size_t: entero positivo indicando la cantidad de caracteres que componen esa cadena.
        
        Precondiciones:
            1. La cadena enviada como argumento debe finalizar con caracter nulo '\0': en caso contrario el programa no podrá terminar.
*/
size_t GetLength(const char * stringValue);



/*
    IsEmpty
        Descripción: Comprueba si una cadena está vacía.
        Argumentos:
            1. const char * stringValue: puntero const a un arreglo char tratado como una cadena.
        
        Resultado:
            1. bool: valor bool indicando True si la cadena está vacía y False si la cadena NO está vacía.
        
        Precondiciones:
            1. La cadena enviada como argumento debe finalizar con caracter nulo '\0': en caso contrario el programa no podrá terminar.
*/
bool IsEmpty(const char * stringValue);



/*
    Concat   
        Descripción: Concatena dos cadenas y devuelve un puntero a una nueva cadena que es el resultado de las dos cadenas originales concatenadas.
        La nueva cadena es depositada en el tercer argumento. La cadena resultante no es instanciada de forma dinámica.
        Argumentos:
            1. const char * stringValue: puntero const a un arreglo char tratado como una cadena.
        
        Resultado:
            1. bool: valor bool indicando True si la cadena está vacía y False si la cadena NO está vacía.
        
        Precondiciones:
            1. Las cadenas deben finalizar con caracter nulo '\0'.
            2. El tercer argumento (de salida) debe apuntar a un arreglo de char lo suficientemente grande como para contener el resultado de la concatenación de las cadenas originales.
*/
void Concat(const char * stringA, const char * stringB, char * result);



/*
    Power   
        Descripción: Potencia una cadena a un exponente natural N (con cero incluido) dando como resultado la cadena N veces.
        La cadena resultante se deposita en un arreglo pre-existente. Se asume que el arreglo tiene la longitud necesaria para contener el resultado.
        Argumentos:
            1. const char * stringValue: puntero const a un arreglo char tratado como una cadena.
            2. unsigned int power: valor entero natural al que se quiere potenciar la cadena.
            3. char * result: puntero a arreglo donde se quiere depositar el resultado de la potencia de la cadena.
        Resultado:
            1. void: la funcion no devuelve un valor por retorno.
        
        Precondiciones:
            1. La cadena original debe finalizar con caracter '\0'.
            2. El tercer argumento (de salida) debe apuntar a un arreglo de char lo suficientemente grande como para contener el resultado de la potencia de la cadena original.
*/
void Power(const char * string, unsigned int power, char * result);



/*
    Compare
        Argumentos:
            1. const char * stringA: puntero const a un arreglo char tratado como una cadena A.
            2. const char * stringB: puntero const a un arreglo char tratado como una cadena B.
            3. size_t index: indice inicial desde donde se empiezan a recorrer las cadenas A y B para compararlas.
            
        Resultado:
            1. int: la funcion devuelve 3 posibles valores.
                 0: ambas cadenas son iguales
                -1: cadena A es menor a cadena B.
                +1: cadena A es mayor a cadena B.
        
        Precondiciones:
            1. Las cadenas A y B deben finalizar con caracter nulo '\0'.
            2. El tercer argumento index debe ser 0 la primera vez que se llama a la función.
*/
int Compare(const char * stringA, const char * stringB, size_t index);
