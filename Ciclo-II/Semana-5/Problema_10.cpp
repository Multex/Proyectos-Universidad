// Escribir un programa que calcule la distancia entre 2 puntos de coordenadas conocidas.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Ingrese la coordenada x del primer punto: ";
    cin >> x1;
    cout << "Ingrese la coordenada y del primer punto: ";
    cin >> y1;
    cout << "Ingrese la coordenada x del segundo punto: ";
    cin >> x2;
    cout << "Ingrese la coordenada y del segundo punto: ";
    cin >> y2;
    
    // Calculos
    int distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Mostrar resultados
    cout << "La distancia entre los puntos es: " << distancia << endl;
    return 0;
}