// Escribir un programa que calcule el precio de un producto, asi como tambien el % descuento y el impuesto respectivo (IGV=0.18), los datos a ingresar son el precio, la cantidad y el descuento (en %).

#include <iostream>

using namespace std;

int main() {
    float precio, cantidad, descuento, precioFinal, impuesto;

    cout << "Ingrese el precio: ";
    cin >> precio;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    cout << "Ingrese el descuento: ";
    cin >> descuento;

    precioFinal = precio * cantidad * (1 - descuento / 100);
    impuesto = precioFinal * 0.18;

    cout << "El precio final es: " << precioFinal << endl;
    cout << "El impuesto es: " << impuesto << endl;

    return 0;
}