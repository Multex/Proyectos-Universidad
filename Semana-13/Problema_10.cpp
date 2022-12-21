// Diseñar un programa que permita ordenar un arreglo de 5 números utilizando funciones para leer el arreglo, ordenar e imprimirlo.
#include <iostream>
#include <iomanip>

const int cantidad = 5;
int numero[cantidad];
void LeerArreglo(int numero[], int elementos);
void ImprimirArreglo(int numero[], int elementos);
void Ordenar(int numero[], int elementos);

using namespace std;

int main()
{
    cout << "\n ORDENAMIENTO DE ARREGLOS\n";
    cout << "___________________________\n";
    cout << "(5 elementos)\n\n";
    LeerArreglo(numero, cantidad);
    cout << "\n El arreglo ordenado es\n\n";
    Ordenar(numero, cantidad);
    ImprimirArreglo(numero, cantidad);
    return 0;
}
// Desarrollo de la function LeerArreglo()
void LeerArreglo(int numero[], int elementos)
{
    int i = 0;
    do
    {
        i++;
        cout << "Leer número[" << i << "]:";
        cin >> numero[i];
    } while (i < elementos);
}
// Desarrollo de la function Ordenar()
void Ordenar(int numero[], int elementos)
{
    int aux, i, j;
    for (i = 0; i <= elementos - 1; i++)
        for (j = i + 1; j <= elementos; j++)
        {
            if (numero[i] < numero[j])
            {
                aux = numero[j];
                numero[j] = numero[i];
                numero[i] = aux;
            }
        }
}
// Desarrollo de la función ImprimirArreglo()
void ImprimirArreglo(int numero[], int elementos)
{
    int i = 0;
    do
    {
        cout << "Elemento[" << i + 1 << "]:" << setw(6) << numero[i] << endl;
        i++;
    } while (i < elementos);
}