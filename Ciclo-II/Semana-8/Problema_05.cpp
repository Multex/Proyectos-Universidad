// Escribir un programa que permita actualizar el saldo de una cuenta del cliente de un banco. Los datos de entrada son: número de cuenta y saldo anterior. El programa además debe ingresar el tipo de movimiento que pueda ser 1 o 2. Si el tipo de movimiento es 1 representa un depósito. Si es 2 representa un retiro. En ambos casos se debe pedir el monto de la transacción.

#include <iostream>
using namespace std;

int main() {
    int numeroCuenta, tipoMovimiento;
    float saldoAnterior, montoTransaccion, saldoActual;

    cout << "Ingrese el número de cuenta: ";
    cin >> numeroCuenta;
    cout << "Ingrese el saldo anterior: S/";
    cin >> saldoAnterior;
    cout << "Ingrese el tipo de movimiento \n 1: Depósito \n 2: Retiro \n>> ";
    cin >> tipoMovimiento;

    switch (tipoMovimiento)
    {
    case 1:
        cout << "Ingrese el monto de la transacción: S/";
        cin >> montoTransaccion;
        saldoActual = saldoAnterior + montoTransaccion;
        break;
    case 2:
        cout << "Ingrese el monto de la transacción: S/";
        cin >> montoTransaccion;
        saldoActual = saldoAnterior - montoTransaccion;
        break;
    default:
        cout << "Tipo de movimiento inválido" << endl;
        return 0;
    }

    cout << "El saldo actual es: S/" << saldoActual << endl;

    return 0;
}