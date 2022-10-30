/* Una librería tiene dos tipos de clientes: estudiante (E) y el público en general (P), además ofrece dos tipos de pago: Contado(C) y plazo(P). se pide escribir un programa que pida el ingreso de: El nombre del cliente, el tipo de cliente, la forma de pago y el monto de pago dependiendo el tipo de pago va a existir un descuento o un recargo tal como se muestra en el siguiente cuadro: 

| TIPO | CONTADO(C) / DESCUENTO | PLAZOS (P) / RECARGO |
| ---- | ---------------------- | -------------------- |
| ESTUDIANTE | 10% | 5% |
| PÚBLICO EN GENERAL | 5% | 15% |
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string nombre;
    char tipo, pago;
    float monto, descuento, recargo;

    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombre);

    cout << "Ingrese el tipo de cliente (Solo ingrese la letra) \n E: Estudiante \n P: Público general \n>> ";
    cin >> tipo;
    if (toupper(tipo) != 'E' && toupper(tipo) != 'P')
    {
        cout << "El tipo de cliente no es válido." << endl;
        return 0;
    }

    cout << "Ingrese la forma de pago (Solo ingrese la letra) \n C: Contado \n P: Plazos \n>> ";
    cin >> pago;
    if (toupper(pago) != 'C' && toupper(pago) != 'P')
    {
        cout << "La forma de pago no es válida." << endl;
        return 0;
    }

    cout << "Ingrese el monto a pagar: S/";
    cin >> monto;
    if (!cin) {
        cout << "El monto a pagar no es válido." << endl;
        return 0;
    }

    switch (toupper(tipo))
    {
    case 'E':
        switch (toupper(pago))
        {
        case 'C':
            descuento = monto * 0.1;
            monto = monto - descuento;
            break;
        case 'P':
            recargo = monto * 0.05;
            monto = monto + recargo;
            break;
        default:
            cout << "Ha ocurrido un error, vuelva a ejecutar el programa" << endl;
            break;
        }
        break;
    case 'P':
        switch (toupper(pago))
        {
        case 'C':
            descuento = monto * 0.05;
            monto = monto - descuento;
            break;
        case 'P':
            recargo = monto * 0.15;
            monto = monto + recargo;
            break;
        default:
            cout << "Ha ocurrido un error, vuelva a ejecutar el programa" << endl;
            break;
        }
        break;
    default:
        cout << "Ha ocurrido un error, vuelva a ejecutar el programa" << endl;
        break;
    }
    cout << "El monto a pagar del cliente " << nombre << " es: S/" << monto << endl;
    return 0;
}