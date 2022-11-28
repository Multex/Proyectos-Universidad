// Escribir un programa que calcule el promedio ponderado de un conjunto de datos.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >> n;
    float datos[n];
    float pesos[n];
    int suma = 0;
    int suma_pesos = 0;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el dato " << i + 1 << ": ";
        cin >> datos[i];
        cout << "Ingrese el peso " << i + 1 << ": ";
        cin >> pesos[i];
        suma += datos[i] * pesos[i];
        suma_pesos += pesos[i];
    }
    cout << "El promedio ponderado es: " << suma / (double) suma_pesos << endl;
    return 0;
}