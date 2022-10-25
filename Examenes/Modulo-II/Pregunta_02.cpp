/* Escribir un programa que muestre un mensaje afirmativo si el número introducido es múltiplo de 11 y un mensaje negativo si no lo es.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Calculo

    if (numero % 11 == 0) {
        cout << "El numero es multiplo de 11" << endl;
    } else {
        cout << "El numero no es multiplo de 11" << endl;
    }
    return 0;
}