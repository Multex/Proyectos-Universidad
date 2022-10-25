# Respuestas del examen (Modulo II)

## Teórico
### Pregunta 1

**Defina una prueba de escritorio**

Una prueba de escritorio es una prueba que se realiza sobre el código fuente de un programa, sin ejecutarlo. Se realiza para comprobar que el código fuente cumple con las especificaciones del programa.

### Pregunta 2
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


### Pregunta 3

**Describa una estructura condicional**

Una estructura condicional es una estructura de control que permite ejecutar un bloque de código si se cumple una condición. En C++ se pueden usar las siguientes estructuras condicionales:

* if


* if-else


* switch


### Pregunta 4

**Escriba la sintaxis de la estructura de control if-else y describa su funcionamiento**

La sintaxis de la estructura de control if-else es la siguiente:

    if (condicion) {
        // Codigo a ejecutar si se cumple la condicion
    } else {
        // Codigo a ejecutar si no se cumple la condicion
    }

La estructura de control if-else permite ejecutar un bloque de código si se cumple una condición, y otro bloque de código si no se cumple la condición.

### Pregunta 5

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

### Pregunta 6

**¿Cual es la diferencia entre variables globales y locales?**

Las variables globales son variables que se declaran fuera de cualquier función, y pueden ser usadas en cualquier parte del programa. Las variables locales son variables que se declaran dentro de una función, y solo pueden ser usadas dentro de esa función.

### Pregunta 7

**Defina una constante y escriba la sintaxis para declararla**

Una constante es un valor que no puede ser modificado durante la ejecución del programa. La sintaxis para declarar una constante es la siguiente:

    const tipo nombre = valor; // Declaracion de una constante dentro de una funcion
    define nombre tipo valor // Declaracion de una constante fuera de una funcion

### Pregunta 8

**En la declaracion de la estructura de control if... else... cuando se puede usar else y en la declaracion de la estructura de control switch cuando se puede usar default**

* En la estructura de control if... else... se puede usar else cuando se quiere ejecutar un bloque de código si no se cumple la condición. 
* En la estructura de control switch se puede usar default cuando se quiere ejecutar un bloque de código si la expresión no es igual a ninguno de los valores de los casos.

### Pregunta 9

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

### Pregunta 10

**Defina el proceso de compilacion y enlace de un programa en C++**

El proceso de compilación y enlace de un programa en C++ es el siguiente:

1. El preprocesador reemplaza las directivas de preprocesador por el código correspondiente.
2. El compilador traduce el código fuente en código objeto.
3. El enlazador une el código objeto con las librerías necesarias para crear el ejecutable.

## Practico

### Problema 01:
**Código:** https://paste.spanix.xyz/azumehasoh.cpp

    #include <iostream>
    using namespace std;
    
    int main() {
    float inversion, avenida1, avenida2, avenida3, avenida4, avenida5;

    cout << "Ingrese la cantidad de inversion: S/.";
    cin >> inversion;

    avenida1 = inversion * 0.3;
    avenida2 = inversion * 0.2;
    avenida3 = inversion * 0.25;
    avenida4 = inversion * 0.1;
    avenida5 = inversion - (avenida1 + avenida2 + avenida3 + avenida4);
    
    cout << "La cantidad de inversion para la avenida 28 de Julio es: " << avenida1 << endl;
    cout << "La cantidad de inversion para la avenida Grau es: " << avenida2 << endl;
    cout << "La cantidad de inversion para la avenida San Martin es: " << avenida3 << endl;
    cout << "La cantidad de inversion para la avenida Mercedes Indacochea es: " << avenida4 << endl;
    cout << "La cantidad de inversion para la avenida 9 de Octubre es: " << avenida5 << endl;
    return 0;
    }

**Pseudocodigo:** https://paste.spanix.xyz/awasopijes.properties
    
	Algoritmo Problema_01
    Definir inversion, avenida1, avenida2, avenida3, avenida4, avenida5 Como Real
   
    	Escribir "Ingrese la cantidad de inversion: S/."
    	Leer inversion
   
    	// Calculos
    	avenida1 = inversion * 0.3
    	avenida2 = inversion * 0.2
    	avenida3 = inversion * 0.25
    	avenida4 = inversion * 0.1
    	avenida5 = inversion - (avenida1 + avenida2 + avenida3 + avenida4)
  
    	Escribir "La cantidad de inversion para la avenida 28 de Julio es: " avenida1
    	Escribir "La cantidad de inversion para la avenida Grau es: " avenida2
    	Escribir "La cantidad de inversion para la avenida San Martin es: " avenida3
    	Escribir "La cantidad de inversion para la avenida Mercedes Indacochea es: " avenida4
    	Escribir "La cantidad de inversion para la avenida 9 de Octubre es: " avenida5
    FinAlgoritmo
### Problema 02: 
**Codigo:** https://paste.spanix.xyz/iyamikivow.cpp

    #include <iostream>
    using namespace std;

    int main() {
    	int numero;
    	cout << "Ingrese un numero: ";
    	cin >> numero;

    	// Calculo
    	if (numero % 11 == 0) {
        	cout << "El numero es multiplo de 11" << endl;
    	} else {
        	cout << "El numero no es multiplo de 11" << endl;
    	}
    	return 0;
    }
**Pseudocodigo:** https://paste.spanix.xyz/qexufinaru.properties

    Algoritmo Problema_02
		Definir numero Como Real
		Escribir "Ingrese un numero: "
		Leer numero
		// Calculo
		Si numero%11 = 0 Entonces
			Escribir "El numero ingresado es multiplo de 11"
		SiNo
			Escribir "El numero ingresado no es multiplo de 11"
		Fin Si
    FinAlgoritmo

### Problema 03:
**Codigo:** https://paste.spanix.xyz/nuvetiloki.cpp
/* Representar el algoritmo o solucion del problema mediante la escritura de codigo 
del programa que permita encontrar el promedio de cuatro notas ingresadas por teclado. 
Si el promedio es mayor o igual a 7 visualizar en pantalla el mensaje "APROBADO", de 
lo contrario visualizar el mensaje "DESAPROBADO". */

    #include <iostream>
    using namespace std;

    int main() {
    	// Ingresado de notas
    	float nota1, nota2, nota3, nota4, promedio;
    	cout << "Ingrese la primera nota: ";
    	cin >> nota1;
    	cout << "Ingrese la segunda nota: ";
    	cin >> nota2;
    	cout << "Ingrese la tercera nota: ";
    	cin >> nota3;
    	cout << "Ingrese la cuarta nota: ";
    	cin >> nota4;
    
    	// Calculo del promedio
    	promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    	
    	// Condiciones
    	if (promedio >= 7)
        	cout << "APROBADO";
    	else
        	cout << "DESAPROBADO";
    	return 0;
    }
**Pseudocodigo:** https://paste.spanix.xyz/sagequfuqo.properties

	Algoritmo Problema_03
		Definir nota1, nota2, nota3, nota4, promedio Como Real
	
		Escribir "Ingrese la primera nota: "
		Leer nota1
		Escribir "Ingrese la segunda nota: "
		Leer nota2
		Escribir "Ingrese la tercera nota: "
		Leer nota3
		Escribir "Ingrese la cuarta nota: "
		Leer nota4
	
		// Calculo
		promedio = (nota1 + nota2 + nota3 + nota4) / 4
	
		Escribir "El promedio es: " promedio
	FinAlgoritmo