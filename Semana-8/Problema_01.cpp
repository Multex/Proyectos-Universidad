// Determinar el nombre correspondiente a un número de mes y además la estación a la que pertenece considerando 3 meses por estación 

#include <iostream>
using namespace std;

int main() { 
    int mes;
    cout << "Ingrese el numero de mes: ";
    cin >> mes;
    switch (mes) {
        case 1:
            cout << "Enero";
            break;
        case 2:
            cout << "Febrero";
            break;
        case 3:
            cout << "Marzo";
            break;
        case 4:
            cout << "Abril";
            break;
        case 5:
            cout << "Mayo";
            break;
        case 6:
            cout << "Junio";
            break;
        case 7:
            cout << "Julio";
            break;
        case 8:
            cout << "Agosto";
            break;
        case 9:
            cout << "Septiembre";
            break;
        case 10:
            cout << "Octubre";
            break;
        case 11:
            cout << "Noviembre";
            break;
        case 12:
            cout << "Diciembre";
            break;
        default:
            cout << "Numero de mes invalido";
            break;
    }
    if (mes >= 1 && mes <= 3) {
        cout << " - Primavera";
    } else if (mes >= 4 && mes <= 6) {
        cout << " - Verano";
    } else if (mes >= 7 && mes <= 9) {
        cout << " - Otono";
    } else if (mes >= 10 && mes <= 12) {
        cout << " - Invierno";
    }
    return 0;
}
