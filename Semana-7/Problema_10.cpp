// Si el sueldo de un empleado es S/. 1000.00 o menos se le descuenta el 10% Si esta entre S/. 100.00 y S/. 2000.00 sobre el adicional, si está arriba de S/. 2000.00 el 3% sobre el adicional. Escriba un programa que lea el sueldo y muestre el salario neto y el impuesto. 

#include <iostream>
using namespace std;

int main() {
    float sueldo, impuesto, salario_neto;
    cout << "Ingrese el sueldo: ";
    cin >> sueldo;
    if (sueldo <= 1000) {
        impuesto = sueldo * 0.1;
    } else if (sueldo <= 2000) {
        impuesto = (sueldo - 1000) * 0.2;
    } else {
        impuesto = (sueldo - 2000) * 0.03;
    }
    salario_neto = sueldo - impuesto;
    cout << "Impuesto: S/." << impuesto << endl;
    cout << "Salario neto: S/." << salario_neto << endl;
    return 0;
}