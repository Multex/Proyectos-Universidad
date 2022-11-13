// Escribir un programa que imprima el termino 100 de la siguiente serie: 1, 2, 4, 7, 11, 16, 22, … .

#include <iostream>
using namespace std;

int main()
{
    int i, num;
    num = 1;
    for (i = 1; i <= 100; i++)
    {
        num = num + i - 1;
    }
    cout << "El termino 100 de la serie es: " << num << endl;
}