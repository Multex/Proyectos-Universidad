#include <iostream>
#include <iomanip>
using namespace std;

struct Fecha_edicion
{
    unsigned int dia, mes, anyo;
};
struct Datos_libro
{
    char nombre[50], autor[30], editorial[30];
    Fecha_edicion fecha;
};
struct Libro
{
    Datos_libro Datos_libro;
    double costo;
};
Libro lib;
int main()
{
    cout << "\n Nombre del libro: ";
    cin.getline(lib.Datos_libro.nombre, 50, '\n');
    cout << "\n Nombre del autor: ";
    cin.getline(lib.Datos_libro.autor, 30, '\n');
    cout << "\n Nombre de la editorial: ";
    cin.getline(lib.Datos_libro.editorial, 30, '\n');

    cout << "\n\n Fecha de edicion del libro\n";
    cout << "Dia:";
    cin >> lib.Datos_libro.fecha.dia;
    cout << "Mes:";
    cin >> lib.Datos_libro.fecha.mes;
    cout << "Anio:";
    cin >> lib.Datos_libro.fecha.anyo;

    cout << "\n\n LISTADO DE DATOS\n";
    cout << "-----------------\n\n";
    cout << setiosflags(ios::left);
    cout << setw(20) << "LIBRO";
    cout << setiosflags(ios::left);
    cout << setw(20) << "LIBRO";
    cout << setw(20) << "AUTOR";
    cout << setw(20) << "EDITORIAL";
    cout << setw(15) << "FECHA EDICION\n\n";
    cout << setw(20) << lib.Datos_libro.nombre;
    cout << setw(20) << lib.Datos_libro.autor;
    cout << setw(20) << lib.Datos_libro.editorial;
    cout << lib.Datos_libro.fecha.dia;
    cout << "/" << lib.Datos_libro.fecha.mes;
    cout << "/" << lib.Datos_libro.fecha.anyo;
    return 0;
}