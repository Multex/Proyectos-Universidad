// Representar el algoritmo o solucion del problema mediante la escritura de codigo del programa que permita encontrar el promedio de cuatro notas ingresadas por teclado. Si el promedio es mayor o igual a 7 visualizar en pantalla el mensaje "APROBADO", de lo contrario visualizar el mensaje "DESAPROBADO".

#include <iostream>
using namespace std;

int main()
{
    // Ingresado de notas
    float nota1, nota2, nota3, nota4, promedio;
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;
    cout << "Ingrese la cuarta nota: ";
    cin >> nota4;
    
    // Calculo del promedio
    promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    
    // Condiciones
    if (promedio >= 7)
        cout << "APROBADO";
    else
        cout << "DESAPROBADO";
    return 0;
}