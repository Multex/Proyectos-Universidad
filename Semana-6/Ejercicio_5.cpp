/* Diseñar un programa que calcule el interes generado por un capitual depositado durante ciesta cantidad de periodos a una tasa de interes determinada y expresada en porcentaje.
Usar las siguientes formulas:
monto = capital * (1 + tasa / 100) ^ periodos
interes = monto - capital
Donde , tasa es el porcentaje de interes de interes por periodo, Un periodo puede ser un dia, un mes, un año, etc.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int periodos;
    float capital, tasa, monto, interes;

    cout << "Ingrese el capital: ";
    cin >> capital;

    cout << "Ingrese la tasa de interes: ";
    cin >> tasa;

    cout << "Ingrese la cantidad de periodos: ";
    cin >> periodos;

    monto = capital * pow(1 + tasa / 100, periodos);
    interes = monto - capital;

    cout << "El monto es: S/." << monto << endl;
    cout << "El interes es: S/." << interes << endl;

    return 0;
}