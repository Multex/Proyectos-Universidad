/* Calcular la suma de los N primeros términos de la siguiente serie: 
1+X+X^2/2_!+x^3/3_!+… || 1+X+X^2/2_! */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double x, suma = 0;
    cout << "Ingrese el valor de N: ";
    cin >> n;
    cout << "Ingrese el valor de X: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        suma += pow(x, i) / tgamma(i + 1);
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}

/* Sinceramente este código fue sacado de internet, no tengo ni la más mínima idea de como hacer esto en papel, mucho menos en código. La explicación que venía con el código es la siguiente:

Lo primero que hacemos es declarar las variables que vamos a utilizar, en este caso son 3, n, x y suma, n es el número de términos que vamos a sumar, x es el valor de x, y suma es la suma de los términos.

Luego pedimos al usuario que ingrese el valor de n y x, y lo guardamos en las variables correspondientes.

Luego creamos un ciclo for, que va a ir desde 0 hasta n, y en cada iteración va a sumar a la variable suma el valor de x elevado a la i, dividido por el factorial de i + 1, y luego de cada iteración, va a sumar 1 a i.

Luego de que el ciclo for termine, vamos a imprimir el valor de suma.

Y listo, ya tenemos el resultado de la suma de los n primeros términos de la serie. */