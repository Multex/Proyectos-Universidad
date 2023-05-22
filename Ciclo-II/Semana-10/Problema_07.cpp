// Escribir un programa que imprima una cantidad de * en función de la variable contador, por ejemplo: la primera línea imprimirá un *, la segunda dos ** … etc. El número de líneas a imprimir se ingresa por teclado

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int contador;

    cout << "Ingrese el número de líneas: ";
    cin >> contador;
    while (cin.fail()) { // Si el usuario ingresa un caracter (no un numero)
        cin.clear(); // Limpia el error de cin
        cin.ignore(256, '\n'); // Limpia el buffer de entrada
        cout << "Ingrese un número válido: "; // Mensaje de error
        cin >> contador; // Vuelve a pedir el numero de lineas
    }
    while (contador < 1) { // Si el usuario ingresa un numero negativo
        cout << "Ingrese un número válido: "; // Mensaje de error
        cin >> contador; // Vuelve a pedir el numero de lineas
    }

    for (int i = 1; i <= contador; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}