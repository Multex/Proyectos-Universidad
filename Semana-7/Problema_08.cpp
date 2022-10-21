// Escribir un programa que pida el ingreso de 2 números y a continuación ingrese un operador (+, -, *, /) el programa debe presentar el resultado de la operación. Si el operador no es válido se debe presentar un mensaje operador no valido.

#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operador;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el operador (+; -; x; /): ";
    cin >> operador;

    switch (operador) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 'x':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Resultado: " << num1 / num2 << endl;
            break;
        default:
            cout << "Operador no valido" << endl;
            break;
    }
    return 0;
}