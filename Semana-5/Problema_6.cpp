// Diseñar un programa que convierta un número real, que representa horas a minutos, segundos y decimas de segundos.

#include <iostream>

using namespace std;

int main() {
    float horas, minutos, segundos, decimas;
    cout << "Ingrese el numero de horas: ";
    cin >> horas;
    minutos = horas * 60;
    segundos = minutos * 60;
    decimas = segundos * 10;
    cout << "El numero de minutos es: " << minutos << endl;
    cout << "El numero de segundos es: " << segundos << endl;
    cout << "El numero de decimas de segundos es: " << decimas << endl;
    return 0;
}