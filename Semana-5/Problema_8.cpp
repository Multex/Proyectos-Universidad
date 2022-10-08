// Escriba un programa que pida el ingreso de dos numeros enteros y muestre el resultado de la suma, la resta, la multiplicación, la división de los numeros ingresados.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Calculos
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    int division = num1 / num2;
    
    // Mostrar resultados
    cout << "La suma de los números es: " << suma << endl;
    cout << "La resta de los números es: " << resta << endl;
    cout << "La multiplicación de los números es: " << multiplicacion << endl;
    cout << "La división de los números es: " << division << endl;
    return 0;
}