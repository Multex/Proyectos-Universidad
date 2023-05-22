#include <iostream>
#include <iomanip>

struct Ventas{
    char cod_producto[50];
    char nombre_producto[50];
    double precio;
    int cantidad;
    double importe;
};

using namespace std;
int main() {
    const int numero = 2;
    Ventas mante_ventas[numero];

    cout << "INGRESO DE PRODUCTOS" << endl;

    for (int i = 0; i < numero; i++) {
        cout << "\n Datos del producto " << (i + 1) << endl;

        cout << "Codigo: ";
        cin >> mante_ventas[i].cod_producto;

        cout << "Nombre: ";
        cin >> mante_ventas[i].nombre_producto;

        mante_ventas[i].importe=(mante_ventas[i].cantidad*mante_ventas[i].precio);
    }

    cout << "\n REPORTE DE PRODUCTOS" << endl;

    cout << setiosflags(ios::left);
    cout << setw(10) << "Codigo";
    cout << setw(10) << "Nombre";
    cout << setw(3) << "Importe" << endl;

    for (int j = 0; j < numero; j++) {
        cout << setw(10) << mante_ventas[j].cod_producto;
        cout << setw(10) << mante_ventas[j].nombre_producto;
        cout << setw(3) << mante_ventas[j].precio;
        cout << setw(3) << mante_ventas[j].cantidad;
        cout << setw(3) << mante_ventas[j].importe << endl;
    }
    return 0;
}
