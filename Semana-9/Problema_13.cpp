// Diseñar un programa que permita realizar una encuesta a 6 personas preguntando por su bebida favorita (Pepsi, Coca Cola, Kola real), el programa debe determinar la bebida de mayor preferencia. 

#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Declaramos las variables
    int pepsi = 0, coca = 0, kReal = 0;
    string bebida;

    // Iteramos 6 veces
    for (int i = 0; i < 6; i++) {
        // Pedimos el nombre de la bebida
        cout << "Ingrese su bebida favorita: \n>> ";
        /* Almacenamos el nombre de la bebida en la variable bebida.
        ¿Por qué no simplemente usar "cin >> bebida"?
        Porque si el usuario ingresa "Coca Cola" o "Kola Real", el programa solo almacenará "Coca" en la variable.
        Para solucionar esto, usamos getline(cin, bebida) para almacenar la cadena completa.*/
        getline(cin, bebida);

        // Convertimos la cadena a minúsculas
        // ¿Por qué hacemos esto y cómo funciona?
        // Si el usuario escribe "PEPSI", "pepsi", "Pepsi", etc., el programa no los considerará como iguales. Entonces transformaremos todas las letras a minúsculas para que podamos hacer una comparativa correcta.
        // transform() es una función que recibe 3 parámetros:
        // 1. El primer elemento de la cadena
        // 2. El último elemento de la cadena
        // 3. El primer elemento de la cadena donde se almacenará el resultado
        // 4. La función que se aplicará a cada elemento de la cadena
        // En este caso, ::tolower es una función que convierte un caracter a minúscula.

        transform(bebida.begin(), bebida.end(), bebida.begin(), ::tolower);
        if (bebida == "pepsi") {
            pepsi++;
        } else if (bebida == "coca cola") {
            coca++;
        } else if (bebida == "kola real") {
            kReal++;
        } else {
            cout << "Bebida no valida" << endl;
        }
    }

    // Comparamos las variables para determinar la bebida de mayor preferencia
    if (pepsi > coca && pepsi > kReal) {
        cout << "La bebida de mayor preferencia es Pepsi" << endl;
    } else if (coca > pepsi && coca > kReal) {
        cout << "La bebida de mayor preferencia es Coca Cola" << endl;
    } else if (kReal > pepsi && kReal > coca) {
        cout << "La bebida de mayor preferencia es Kola Real" << endl;
    } else {
        cout << "No hay bebida de mayor preferencia" << endl;
    }
    return 0;
}
// odio c++