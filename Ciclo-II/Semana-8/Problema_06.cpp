/* Determinar el importe a pagar por un alumno de un instituto cuya cuota tiene un porcentaje de descuento que se establece en la siguiente tabla y está en función al colegio de procedencia del alumno, asimismo los importes están exonerados de impuestos.
| COLEGIOS / INSTITUCIONES | A | B | C |
| ------------------------ | - | - | - |
| Nacional | 50	| 40 | 30 |
| Particular | 25 | | 20 | 15 |
Tuve que usar if-else para el tipo de colegio y un switch para el colegio de procedencia, todo esto para poder calcular el descuento correctamente. Sin embargo no sé si es la mejor forma de hacerlo, si hay alguna forma más eficiente de hacerlo, por favor dígame. */

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char colegio, tipo;
    float importe;

    cout << "¿Es un colegio nacional(N) o particular(P)? ";
    cin >> tipo;

    if (tolower(tipo) == 'n')
    {
        cout << "Ingrese el colegio de procedencia del alumno \n (A, B o C) \n>> ";
        cin >> colegio;

        switch (toupper(colegio))
        {
        case 'A':
            cout << "Ingrese el importe a pagar: S/";
            cin >> importe;
            importe = importe - (importe * 0.5);
            break;
        case 'B':
            cout << "Ingrese el importe a pagar: S/";
            cin >> importe;
            importe = importe - (importe * 0.4);
            break;
        case 'C':
            cout << "Ingrese el importe a pagar: S/";
            cin >> importe;
            importe = importe - (importe * 0.3);
            break;
        default:
            cout << "El colegio de procedencia no es válido." << endl;
            break;
        }
        cout << "El importe a pagar es: S/" << importe << endl;
        return 0;
    }
    else if (tolower(tipo) == 'p')
    {
        cout << "Ingrese el colegio de procedencia del alumno \n (A, B o C) \n>> ";
        cin >> colegio;

        switch (toupper(colegio))
        {
        case 'A':
            cout << "Ingrese el importe a pagar: S/";
            cin >> importe;
            importe = importe - (importe * 0.25);
            break;
        case 'B':
            cout << "Ingrese el importe a pagar: S/";
            cin >> importe;
            importe = importe - (importe * 0.20);
            break;
        case 'C':
            cout << "Ingrese el importe a pagar: S/";
            cin >> importe;
            importe = importe - (importe * 0.15);
            break;
        default:
            cout << "El colegio de procedencia no es válido." << endl;
            break;
        }
        cout << "El importe a pagar es: S/" << importe << endl;
        return 0;
    }
}