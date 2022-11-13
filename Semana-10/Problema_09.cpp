// Un vehículo recorre n distancias en n tiempos diferentes. ¿Cuál será su velocidad promedio para toda la trayectoria?

#include <iostream>
using namespace std;

int main() {
    int n;
    float distancia, tiempo, velocidad, suma_velocidades;

    cout << "Ingrese la cantidad de distancias: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese la distancia " << i << ": ";
        cin >> distancia;
        cout << "Ingrese el tiempo " << i << ": ";
        cin >> tiempo;
        velocidad = distancia / tiempo;
        suma_velocidades = suma_velocidades + velocidad;
    }
    cout << "La velocidad promedio es: " << suma_velocidades / n << endl;
    return 0;
}