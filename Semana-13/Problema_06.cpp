// Usando funciones. Escriba un algoritmo que diga si un número es primo o no.
#include <iostream>

using namespace std;
int EsPrimo(int n);
int main()
{
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    if (EsPrimo(n))
        cout << "El número es primo";
    else
        cout << "El número no es primo";
    return 0;
}

// Desarrollo de la función EsPrimo()
int EsPrimo(int n)
{
    int i = n / 2;
    while (i > 1)
    {
        if (n % i == 0)
            return 0; // No es primo
        i = i - 1;
    }
    return 1; // Es primo
}