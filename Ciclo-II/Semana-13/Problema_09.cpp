// Diseñar un programa que permita calcular el factorial de los números del 1 al 10 utilizando una función recursiva.
#include <iostream>
long factorial(long numero);
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
        cout << "Factorial de " << i << " != " << factorial(i) << endl;
    return 0;
}

long factorial(long numero)
{
    if (numero <= 1)
        return 1;
    else
        return (numero * factorial(numero - 1));
}