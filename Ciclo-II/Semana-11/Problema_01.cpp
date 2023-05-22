// Escribir un programa que permita ingresar 8 notas en un arreglo y luego imprima los elementos del arreglo tal como se ingresó y en forma inversa (primero la última nota ingresada … etc.)

#include <iostream>
using namespace std;

int main() {
    int notas[8];
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }
    cout << "Notas ingresadas: ";
    for (int i = 0; i < 8; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;
    cout << "Notas ingresadas en forma inversa: ";
    for (int i = 7; i >= 0; i--) {
        cout << notas[i] << " ";
    }
    cout << endl;
    return 0;
}