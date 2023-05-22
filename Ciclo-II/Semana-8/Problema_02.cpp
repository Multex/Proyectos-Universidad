// Escribir un programa que lea 2 números y un operador y realiza las siguientes operaciones por separado: suma (+), resta (-), multiplicación (*), división (/) y potencia (#). 

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num1, num2, res;
    char operador;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el operador [+, -, x, /, # => (potencia)]: ";
    cin >> operador;

    switch (operador) {
        case '+':
            cout << "Suma: " << num1 + num2;
            break;
        case '-':
            cout << "Resta: " << num1 - num2;
            break;
        case 'x':
            cout << "Multiplicacion: " << num1 * num2;
            break;
        case '/':
            cout << "Division: " << num1 / num2;
            break;
        case '#':
            cout << "Potencia: " << pow(num1, num2);
            break;
        default:
            cout << "Operador invalido";
            break;
    }
}