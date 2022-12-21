// Diseñar un programa que permita calcular la serie de Fibonacci utilizando la técnica de recursividad. El programa debe pedir ingresar el término para el que se quiere calcular la serie.

#include <iostream>
long fibonacci(long);
using namespace std;
int main()
{
    long numero, resultado;
    cout << "\n Ingrese un número:";
    cin >> numero;
    resultado = fibonacci(numero);
    cout << "\n Fibonacci(" << numero << "):" << resultado;
    return 0;
}

// Desarrollo de la función fibonacci()
long fibonacci(long n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}