#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    struct Alumno
    {
        int codigo;
        char curso[30];
        int nota1, nota2, nota3;
        float promedio;
    };
    
    Alumno AlumnoSec;
    cout << "Ingrese el codigo del alumno: ";
    cin >> AlumnoSec.codigo;
    cin.ignore();
    cout << "Ingrese el nombre del curso: ";
    cin.getline(AlumnoSec.curso, 31);

    cout << "Ingrese la nota 1: ";
    cin >> AlumnoSec.nota1;
    cout << "Ingrese la nota 2: ";
    cin >> AlumnoSec.nota2;
    cout << "Ingrese la nota 3: ";
    cin >> AlumnoSec.nota3;
    
    AlumnoSec.promedio = (AlumnoSec.nota1 + AlumnoSec.nota2 + AlumnoSec.nota3) / 3;
    cout << "El promedio del alumno es: " << AlumnoSec.promedio << endl;
    cout << "El tamaño de la variable AlumnoSec es: " << sizeof(AlumnoSec) << " bytes" << endl;
    return 0;
}
