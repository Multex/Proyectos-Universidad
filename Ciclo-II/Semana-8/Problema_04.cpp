/* En una tienda de accesorios para computadores, el precio de venta unitario de los diskettes es el mismo para cualquier marca, sin embargo, el descuento varía de acuerdo a la marca y se establece en la siguiente tabla, determinar el importe a pagar por la cantidad de diskettes comprados de una sola marca, considerando que se paga impuestos. Mostrar importe bruto, descuento e importe a pagar. 
| Marca | Descuento (%) |
| ----- | ------ |
| 3M | 10 |
| NCR |	15 |
| Sentinel | 20 |
| Burroughs | 25 |
| GoldStar | 30 | */

#include <iostream>
using namespace std;

int main() {
    int cantidad;
    float precio, descuento, importeBruto, importeNeto, IGV = 0.18, impuesto;
    char marca;

    cout << "Ingrese la cantidad de diskettes: ";
    cin >> cantidad;
    // Pedir que se ingrese la marca del diskette, pero primero imprimir las opciones 
    cout << "Ingrese la marca del diskette\n -3M\n -NCR\n -Sentinel\n -Burroughs\n -GoldStar\n>> ";
    cin >> marca;

    // Asumimos que el precio es 10
    precio = 10.0;

    switch (marca) {
        case '3':
            descuento = 0.1;
            break;
        case 'N':
            descuento = 0.15;
            break;
        case 'S':
            descuento = 0.2;
            break;
        case 'B':
            descuento = 0.25;
            break;
        case 'G':
            descuento = 0.3;
            break;
        default:
            descuento = 0;
    }

    importeBruto = cantidad * precio;
    impuesto = importeBruto * IGV;
    importeNeto = (importeBruto - (importeBruto * descuento)) + impuesto;

    cout << "Importe bruto: " << importeBruto << endl;
    cout << "Descuento: " << importeBruto * descuento << endl;
    cout << "Impuestos: " << impuesto << endl;
    cout << "Importe neto: " << importeNeto << endl;

    return 0;
}

/* Usando if-else:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string marca;
    int cantidad;
    float precio = 10.0, descuento, importeBruto, importeNeto;

    cout << "Ingrese la marca de los diskettes: ";
    cin >> marca;
    cout << "Ingrese la cantidad de diskettes: ";
    cin >> cantidad;

    if (marca == "3M") {
        descuento = 0.1;
    } else if (marca == "NCR") {
        descuento = 0.15;
    } else if (marca == "Sentinel") {
        descuento = 0.2;
    } else if (marca == "Burroughs") {
        descuento = 0.25;
    } else if (marca == "GoldStar") {
        descuento = 0.3;
    } else {
        cout << "Marca no válida" << endl;
        return 0;
    }

    importeBruto = cantidad * precio;
    importeNeto = importeBruto - (importeBruto * descuento);

    cout << "Importe bruto: " << importeBruto << endl;
    cout << "Descuento: " << importeBruto * descuento << endl;
    cout << "Importe neto: " << importeNeto << endl;

    return 0;
}*/