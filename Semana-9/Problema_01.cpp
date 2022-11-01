// Escriba un programa que permita calcular la suma de los números enteros comprendidos entre dos cantidades ingresadas por teclado, finalmente calcular el promedio de los números. Usando for, while o do while.

#include <iostream>
using namespace std;

int main() {
    int a, b, suma = 0, contador = 0;
    float promedio;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }
    for (int i = a; i <= b; i++) {
        suma += i;
        contador++;
    }
    promedio = suma / contador;
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}