// Diseña un programa que teniendo como datos de entrada el radio y la altura de un cilindro, calcule el Ã¡rea y volumen del cilindro

#include <iostream>

using namespace std;

int main() {
    float radio, altura, area, volumen;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    area = 2 * 3.1416 * radio * (radio + altura);
    volumen = 3.1416 * radio * radio * altura;
    cout << "El area del cilindro es: " << area << endl;
    cout << "El volumen del cilindro es: " << volumen << endl;
    return 0;
}

