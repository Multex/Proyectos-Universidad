// Construir un programa para obtener la hipotenusa y los angulos de un triangulo rectangulo a partir de las longitudes de los catetos.

#include <iostream>
#include <cmath>

#define PI 3.14159265
using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa, angulo1, angulo2;

    cout << "Ingrese el valor del primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese el valor del segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    angulo1 = atan(cateto1 / cateto2) * 180 / PI;
    angulo2 = atan(cateto2 / cateto1) * 180 / PI;

    cout << "La hipotenusa es: " << hipotenusa << endl;
    cout << "El ángulo 1 es: " << angulo1 << "º" <<endl;
    cout << "El ángulo 2 es: " << angulo2 << "º" <<endl;

    return 0;
}
