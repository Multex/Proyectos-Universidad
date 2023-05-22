// Se tiene “n” alumnos en un curso, donde cada alumno tiene tres exámenes, el programa deberá calcular el promedio calificando solo dos notas, eliminando la menor nota. Además, deberá hacer un cuadro resumen del total aprobados y desaprobados.

#include <iostream>
using namespace std;

int main() {
    int n, aprobados = 0, desaprobados = 0;
    double nota1, nota2, nota3, promedio;
    cout << "Ingrese el número de alumnos: ";
    cin >> n;

        for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota 1: ";
        cin >> nota1;
        cout << "Ingrese la nota 2: ";
        cin >> nota2;
        cout << "Ingrese la nota 3: ";
        cin >> nota3;
        if (nota1 < nota2 && nota1 < nota3) {
            promedio = (nota2 + nota3) / 2;
        } else if (nota2 < nota1 && nota2 < nota3) {
            promedio = (nota1 + nota3) / 2;
        } else {
            promedio = (nota1 + nota2) / 2;
        }
        if (promedio >= 11) {
            aprobados++;
        } else {
            desaprobados++;
        }
    }
    cout << "Aprobados: " << aprobados << endl;
    cout << "Desaprobados: " << desaprobados << endl;
    return 0;
}

// Aún puede ser mejorado, pero funciona así que lo dejaré así. Luego veré como mejorar el código, para que este sea mejor.