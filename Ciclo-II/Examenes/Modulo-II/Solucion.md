# Respuestas del examen (Modulo II)

## Teórico
### Pregunta 1

**Defina una variable y escriba la sintaxis para declararla en C++**

Una variable es un espacio de memoria que almacena un valor. En C++ se declaran de la siguiente forma:

```cpp
tipo nombre_variable;
```

### Pregunta 2

**Describa una estructura secuencial**

Una estructura secuencial es una estructura de control que permite ejecutar un bloque de código secuencialmente, es decir, una instrucción tras otra.

### Pregunta 3

**Describa las directivas del pre procesador**

Las directivas del pre procesador son instrucciones que se escriben al principio de un archivo fuente, y que se ejecutan antes de que se compile el programa. En C++ se pueden usar las siguientes directivas del pre procesador:

* `#include`: Permite incluir un archivo de cabecera en el programa.


* `#define`: Permite definir una constante.


* `#ifdef`: Permite ejecutar un bloque de código si una constante está definida.


* `#ifndef`: Permite ejecutar un bloque de código si una constante no está definida.


* `#endif`: Permite terminar un bloque de código que se ejecuta si una constante está definida o no.


* `#if`: Permite ejecutar un bloque de código si una condición es verdadera.


* `#else`: Permite ejecutar un bloque de código si una condición es falsa.


* `#elif`: Permite ejecutar un bloque de código si una condición es verdadera.


* `#endif`: Permite terminar un bloque de código que se ejecuta si una condición es verdadera o falsa.


### Pregunta 4

**Describa el proceso de compilacion y enlace de un programa en C++**

El proceso de compilación y enlace de un programa en C++ se realiza en tres pasos:

1. Pre procesamiento: En este paso se ejecutan las directivas del pre procesador, y se reemplazan las directivas por el código correspondiente.


2. Compilación: En este paso se compila el programa, y se genera un archivo objeto.


3. Enlace: En este paso se enlazan los archivos objeto generados en el paso anterior con las librerías necesarias para crear el ejecutable.


### Pregunta 5

**Escriba los tipos de datos utilizados en el lenguaje C++**

Los tipos de datos utilizados en el lenguaje C++ son:

* `bool`: Tipo de dato booleano.


* `char`: Tipo de dato caracter.


* `int`: Tipo de dato entero.


* `float`: Tipo de dato flotante.


* `double`: Tipo de dato doble.


* `void`: Tipo de dato vacío.


### Pregunta 6

**En la estructura de control switch que valores puede tomar el selector y parqa que sirve la sentencia break**

El selector de la estructura de control switch puede tomar cualquier tipo de dato, y la sentencia break sirve para terminar la ejecución de la estructura de control switch.

### Pregunta 7

**Describa la funcion main()**

La función `main()` es la función principal de un programa en C++, y es la primera función que se ejecuta al iniciar el programa. La función `main()` debe tener el siguiente prototipo:

```cpp
int main(int argc, char *argv[])
```

### Pregunta 8

**Defina una palabra reservada y escriba algunos ejemplos**

Una palabra reservada es una palabra que tiene un significado especial en el lenguaje C++. Algunos ejemplos de palabras reservadas son:

* `int`: Tipo de dato entero.


* `float`: Tipo de dato flotante.


* `double`: Tipo de dato doble.


* `char`: Tipo de dato caracter.


* `bool`: Tipo de dato booleano.


* `void`: Tipo de dato vacío.


* `if`: Estructura de control if.


* `else`: Estructura de control else.


* `switch`: Estructura de control switch.


* `case`: Estructura de control case.


* `default`: Estructura de control default.


* `for`: Estructura de control for.


* `while`: Estructura de control while.


* `do`: Estructura de control do.


* `break`: Estructura de control break.


* `continue`: Estructura de control continue.


* `return`: Sentencia return.


* `namespace`: Declaración de espacio de nombres.


* `using`: Declaración de uso.


* `const`: Declaración de constante.


### Pregunta 9 

**¿Cuales son los principios o reglas que debe cumplir un identificador?**

Los identificadores deben cumplir las siguientes reglas:

* Deben comenzar con una letra o un guión bajo.


* No pueden contener espacios en blanco.


* No pueden contener caracteres especiales.


* No pueden ser palabras reservadas.


* No pueden ser nombres de funciones o variables de la biblioteca estándar.


* No pueden ser nombres de funciones o variables de bibliotecas externas.

### Pregunta 10

**La sentencia switch, actua como una funcion de bifurcacion multiple que sustituye con ventaja a if-else-if, cuando el numero de opciones que se pueden presentar son numerosas.
**Selecciona verdadero o falso**

- [x] Verdadero
- [ ] Falso

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

Link: https://rentry.co/modulo2/