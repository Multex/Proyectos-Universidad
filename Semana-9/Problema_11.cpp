// La secuencia de Fibonacci es muy conocida en los círculos matemáticos y tiene la particularidad que cada número es igual a la suma de los 2 anteriores términos. La serie de Fibonacci comienza con los números 0 y 1, produciendo la siguiente secuencia: 0, 1, 1, 2, 3, 5, 8, 13, … etc.  muestre todos los números de Fibonacci que sean menores que un número dado. 

#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;
    cout << "Ingrese el número: ";
    cin >> n;
    cout << "0, 1, ";
    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        if (c < n) {
            cout << c << ", ";
        }
    }
    return 0;
}