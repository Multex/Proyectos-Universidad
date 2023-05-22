// Escribir un programa que permita ingresar 10 notas. El programa debe mostrar la mayor nota ingresada y el promedio de 10 notas.

#include <iostream>
using namespace std;

int main() {
    int notas[10];
    int mayor = 0;
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
        if (notas[i] > mayor) {
            mayor = notas[i];
        }
        suma += notas[i];
    }
    cout << "La mayor nota ingresada es: " << mayor << endl;
    cout << "El promedio de las 10 notas es: " << suma / 10.0 << endl;
    return 0;
}