/* Una empresa ofrece sus ofertas de acuerdo a las siguientes escalas de consumo: 
| Consumo | Descuento(%) |
| ------ | ------ |
| Mayor a 1000 | 30 |
| Mayor a 600 | 20 |
| Mayor a 300 | 15 |
| Hasta 300 | 10 |
Si en todos los casos aplica un impuesto del 15%. Determinar el importe a pagar por lo 
consumido. Mostrando todos los importes.
*/

#include <iostream>
using namespace std;

int main() {
    float consumo, descuento, impuesto, importe;
    cout << "Ingrese el consumo: ";
    cin >> consumo;
    if (consumo > 1000) {
        descuento = consumo * 0.3;
    } else if (consumo > 600) {
        descuento = consumo * 0.2;
    } else if (consumo > 300) {
        descuento = consumo * 0.15;
    } else {
        descuento = consumo * 0.1;
    }
    impuesto = consumo * 0.15;
    importe = consumo - descuento + impuesto;
    cout << "Descuento: " << descuento << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Importe: " << importe << endl;
    return 0;
}