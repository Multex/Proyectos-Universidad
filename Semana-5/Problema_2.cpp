// Diseñar un programa que calcule el promedio obtenido por un alumno. Se deben ingresar 3 notas por teclado

#include <iostream>

using namespace std;

int main()
{
	float nota1, nota2, nota3, promedio;
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;
    
    // Cálculo del promedio
    
    promedio = (nota1 + nota2 + nota3) / 3;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}

