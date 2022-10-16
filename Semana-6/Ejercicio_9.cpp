// Escribir un programa que calcule el precio de un producto, asi como tambien el % descuento y el impuesto respectivo (IGV=0.18), los datos a ingresar son el precio, la cantidad y el descuento (en %).

#include <iostream>

using namespace std;

int main() {
    const float IGV = 0.18;
    float precio, cantidad, descuento, precioFinal, impuesto;

    cout << "Ingrese el precio: ";
    cin >> precio;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    cout << "Ingrese el descuento\n (En caso de no haber ingresar 0): ";
    cin >> descuento;

    if (descuento == 0) {
        precioFinal = precio * cantidad;
        impuesto = precioFinal * IGV;
        precioFinal += impuesto;

        cout << "El precio total a pagar es: S/." << precioFinal << endl;
    } else {
        precioFinal = precio * cantidad;
        impuesto = precioFinal * IGV;
        precioFinal += impuesto;
        precioFinal -= precioFinal * (descuento / 100);
        cout << "El precio total a pagar es: S/." << precioFinal << endl;
    }
    return 0;
}