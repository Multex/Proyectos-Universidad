// Diseñar un programa que permita ingresa el nombre y notas de un alumno, el número de alumnos a procesar se ingresará por el teclado. Finalmente calcular el promedio de notas. 

#include <iostream>
using namespace std;

int main() {
    int n;
    double nota1, nota2, nota3, promedio, suma = 0;
    string nombre;
    cout << "Ingrese el número de alumnos: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del alumno: ";
        cin >> nombre;
        cout << "Ingrese la nota 1: ";
        cin >> nota1;
        cout << "Ingrese la nota 2: ";
        cin >> nota2;
        cout << "Ingrese la nota 3: ";
        cin >> nota3;
        promedio = (nota1 + nota2 + nota3) / 3;
        suma += promedio;
        cout << "El promedio de " << nombre << " es: " << promedio << endl;
    }
    cout << "El promedio de notas es: " << suma / n << endl;
    return 0;
}