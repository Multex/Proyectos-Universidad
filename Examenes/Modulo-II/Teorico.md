# Respuestas del examen teorico (Modulo II)

## Pregunta 1
**Defina una prueba de escritorio**

Una prueba de escritorio es una prueba que se realiza sobre el código fuente de un programa, sin ejecutarlo. Se realiza para comprobar que el código fuente cumple con las especificaciones del programa.

## Pregunta 2
**Defina un operador y los tipos de operadores usados en C++**

Un operador es un símbolo que le dice al compilador qué debe realizar una operación aritmética, relacional o lógica y cuál debe ser el resultado de dicha operación. Los operadores en C++ se pueden clasificar en:

* Operadores aritméticos


* Operadores de asignación


* Operadores de comparación


* Operadores de incremento y decremento


* Operadores lógicos


* Operadores de punteros


* Operadores de bits


* Operadores de desplazamiento


* Operadores de membresía


* Operadores de indirección


* Operadores de tamaño


* Operadores ternarios


* Operadores de casteo


## Pregunta 3

**Describa una estructura condicional**

Una estructura condicional es una estructura de control que permite ejecutar un bloque de código si se cumple una condición. En C++ se pueden usar las siguientes estructuras condicionales:

* if


* if-else


* switch


## Pregunta 4

**Escriba la sintaxis de la estructura de control if-else y describa su funcionamiento**

La sintaxis de la estructura de control if-else es la siguiente:

    if (condicion) {
        // Codigo a ejecutar si se cumple la condicion
    } else {
        // Codigo a ejecutar si no se cumple la condicion
    }

La estructura de control if-else permite ejecutar un bloque de código si se cumple una condición, y otro bloque de código si no se cumple la condición.

## Pregunta 5

**Escriba la sintaxis de la estructura de control switch y describa su funcionamiento**

La sintaxis de la estructura de control switch es la siguiente:

    switch (expresion) {
        case valor1:
            // Codigo a ejecutar si expresion es igual a valor1
            break;
        case valor2:
            // Codigo a ejecutar si expresion es igual a valor2
            break;
        default:
            // Codigo a ejecutar si expresion no es igual a ninguno de los valores anteriores
    }

La estructura de control switch permite ejecutar un bloque de código dependiendo del valor de una expresión.

## Pregunta 6

**¿Cual es la diferencia entre variables globales y locales?**

Las variables globales son variables que se declaran fuera de cualquier función, y pueden ser usadas en cualquier parte del programa. Las variables locales son variables que se declaran dentro de una función, y solo pueden ser usadas dentro de esa función.

## Pregunta 7

**Defina una constante y escriba la sintaxis para declararla**

Una constante es un valor que no puede ser modificado durante la ejecución del programa. La sintaxis para declarar una constante es la siguiente:

    const tipo nombre = valor; // Declaracion de una constante dentro de una funcion
    define nombre valor // Declaracion de una constante fuera de una funcion

## Pregunta 8

**En la declaracion de la estructura de control if... else... cuando se puede usar else y en la declaracion de la estructura de control switch cuando se puede usar default**

* En la estructura de control if... else... se puede usar else cuando se quiere ejecutar un bloque de código si no se cumple la condición. 
* En la estructura de control switch se puede usar default cuando se quiere ejecutar un bloque de código si la expresión no es igual a ninguno de los valores de los casos.

## Pregunta 9

**¿Cual es la estructura general o partes que tiene un programa en C++?**

* Directiva del procesador
* Declaraciones globales
* Funcion principal
* Desarrollo y las instrucciones

La estructura general de un programa en C++ es la siguiente:

    #include <librerias>
    using namespace std;
    int main() {
        // Codigo del programa
        return 0;
    }

## Pregunta 10

**Defina el proceso de compilacion y enlace de un programa en C++**

El proceso de compilación y enlace de un programa en C++ es el siguiente:

1. El preprocesador reemplaza las directivas de preprocesador por el código correspondiente.
2. El compilador traduce el código fuente en código objeto.
3. El enlazador une el código objeto con las librerías necesarias para crear el ejecutable.