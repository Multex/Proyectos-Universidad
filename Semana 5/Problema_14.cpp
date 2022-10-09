// Escribe un programa que lea un numero de 4 cifras y lo invierta. Por ejemplo, si el numero es 1234, el programa debe mostrar 4321.

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un número de 4 cifras: ";
    cin >> num;
    
    // Calculos
    int cifra1 = num / 1000;
    int cifra2 = (num % 1000) / 100;
    int cifra3 = (num % 100) / 10;
    int cifra4 = num % 10;
    int numInvertido = cifra4 * 1000 + cifra3 * 100 + cifra2 * 10 + cifra1;
    
    // Mostrar resultados
    cout << "El número invertido es: " << numInvertido << endl;
    return 0;
}