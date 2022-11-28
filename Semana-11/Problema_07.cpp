// Escribir un programa que permita ingresar 10 notas, el programa debe calcular: el número de aprobados, el número de desaprobados, el % de aprobados y el % de desaprobados.

#include <iostream>
using namespace std;

int main() {
    int notas[10];
    int aprobados = 0;
    int desaprobados = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
        if (notas[i] >= 11) {
            aprobados++;
        } else {
            desaprobados++;
        }
    }
    cout << "El número de aprobados es: " << aprobados << endl;
    cout << "El número de desaprobados es: " << desaprobados << endl;
    cout << "El % de aprobados es: " << aprobados / 10.0 * 100 << "%" << endl;
    cout << "El % de desaprobados es: " << desaprobados / 10.0 * 100 << "%" << endl;
    return 0;
}