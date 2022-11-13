// Generar al azar 20 números de 40 cifras cada uno, determinando si cada uno de ellos es múltiplo de 3, de 5 o de ambos, mostrando el mensaje correspondiente al costado del número generado, si no fuera múltiplo de ninguno no mostrar ningún mensaje. Sugerencia: por cada número, generar digito por dígito en forma aleatoria entre 0 y 9 y considerar que un número es múltiplo de 3 cuando la suma de sus cifras lo es; y es múltiplo de 5 cuando el último dígito es 0 o 5. Recuerde que no existe un tipo de dato que soporte números mayores de 13 cifras.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numero, digito, suma, i, j;
    srand(time(NULL));
    for (i = 1; i <= 20; i++) {
        numero = 0;
        suma = 0;
        for (j = 1; j <= 40; j++) {
            digito = rand() % 10;
            numero = numero * 10 + digito;
            suma = suma + digito;
        }
        if (suma % 3 == 0) {
            cout << numero << " es múltiplo de 3" << endl;
        }
        if (numero % 5 == 0) {
            cout << numero << " es múltiplo de 5" << endl;
        }
    }
    return 0;
}