// El area de triangulo en funcion del semi perimetro, dada por Heron es: 
// Area = sqrt(p * (p - a) * (p - b) * (p - c)), donde a, b y c son los lados del triangulo y p=(a+b+c)/2 es el semi perimetro. Escriba un programa que calcule el area del triangulo aplicando esta formula.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, p, area;

    cout << "Ingrese el lado a: ";
    cin >> a;

    cout << "Ingrese el lado b: ";
    cin >> b;

    cout << "Ingrese el lado c: ";
    cin >> c;

    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "El semi perimetro es: " << p << endl;
    cout << "El area es en funcion del semiperimetro: " << area << endl;

    return 0;
}