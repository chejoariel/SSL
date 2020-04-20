# Parte I
1. Un ingeniero en sistemas de información construye sistemas manuales o automáticos para que alguien, al utilizarlo correctamente,pueda resolver un problema.
2. La información son datos procesados, materia prima para la toma de decisiones de valor semántico.
3. Las asignaturas del área de la programación son matemática discreta, algoritmo y estructura de datos, sintaxis y semántica de los lenguajes, paradigma de programación y gestión de datos.
4. Las asignaturas del área de sistema de información son sistema y organizaciones, análisis de sistemas, diseño de sistema, administración de recursos y proyecto final.
5. El paradigma aplicado en 1er año es el procedural.
6. La abstracción es algo conceptual que se separa de su contexto para realizar un enfoque en lo más importante.

# Parte II
1. Un conjunto es una colección de valores, una secuencia es una sucesión de instrucciones. La principal diferencia es el orden, en un conjunto los valores NO tienen un orden en concreto; en cambio, en una secuencia las instrucciones se ejecutan en forma secuencial, es decir, una después de la otra.
2. Una secuencia en matemática es una sucesión de elementos que forman un conjunto ordenado.
3. Una función en matemática es una relación de un conjunto X y otro conjunto de elementos Y de forma que a cada elemento del conjunto X le corresponde un elemento del conjunto Y.
4. Un grafo es un conjunto de elementos llamado nodo o vértices unidos por enlaces llamado arista o arcos.
5. Una partición de un conjunto X  es un subconjunto cuyo elementos pertenecen al conjunto X.
6. P(X)={{Ø},{a}{b}{a,b}}
7. Sea L un conjunto y V un alfabeto. Diremos que L es un lenguaje si y sólo si L está incluido en V*. 
8. Un autómata finito es una máquina de estado finito que reconoce lenguajes.

# Parte III
1. Un algoritmo es un conjunto ordenado de instrucciones que permiten solucionar un problema.
2. La programación estructurada es un método de desarrollo de programación que recurre a 3 estructuras básicas que son secuencia, iteración y selección orientado a mejorar la claridad, calidad y tiempo.
3. Las 3 estructuras de control son  secuencia, iteración y selección.
4. Un parámetro es una declaración de una variable que aparece en la declaración de un proceso, en cambio, un argumento es un valor que se envía y aparece en la invocación de un proceso.
5. Los argumentos se pueden pasar por valor, que sería una copia del valor de la variables de los argumentos en el cuál la función no puede alterar su valor ; o por referencia que consiste en pasar la dirección de memoria de un valor que sí puede alterar los valores de las variables que pasan como argumento.
6. Los parámetros de entrada son los valores que entran a una función. Los parámetros de salidas son los valores(resultado) que salen de una función. Los parámetros de entrada y salida son ambas cosas.
7. Un tipo de dato abstracto es un tipo cuya representación como tipo concreto ha sido abstraída y a cuyos datos sólo se puede acceder a través de un conjunto de operaciones.
8. Las pilas y colas son una secuencia de elementos. La diferencia está en como se modifica la secuencia, en una pila el último elemento en entrar es el primero en salir, en cambio, la cola el primer elemento en entrar es el primero en salir.
9. Un archivo es una secuencia de bytes almacenados en memoria, generalmente en el disco duro.
10. Algoritmo en c++.

```
int main()
{
    int n,suma;
    float promedio;
    
    cout<<"Ingrese cant de núm a almacenar: ";
    cin>>n;
    int a[n];
    
    for(int i=0; i<n;i++){
      cout<<"ingrese un núm: ";
      cin>>a[i];
          
    for(int i=0;i<n;i++){
      suma = suma + a[i];
    }
   
    promedio = suma / n;
    cout <<"promedio: "<<promedio;
    return 0;
}
```
