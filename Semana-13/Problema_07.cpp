// Usando funciones, calcule el promedio ponderado de un conjunto de datos.
#include <iostream>

using namespace std;

void LeerArray(int n, float array[]);
float PromPonderado(float valores[], float pesos[], int n);

int main()
{
    int n;
    float valores[50], pesos[50], pp;
    cout << "Número de datos a leer:";
    cin >> n;
    cout << endl
         << "Ingrese valores" << endl;
    LeerArray(n, valores);
    cout << endl
         << "Ingrese ponderaciones" << endl;
    LeerArray(n, pesos);
    pp = PromPonderado(valores, pesos, n);
    cout << endl
         << "El promedio ponderado es:" << pp;
    return 0;
}
// Desarrollo de lam función LerArray()
void LeerArray(int n, float array[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Ingrese elemento" << i << ':';
        cin >> array[i];
    }
}

// Desarrollo de la función PromPonderado()
float PromPonderado(float valores[], float pesos[], int n)
{
    int i;
    float sv = 0, sp = 0;
    for (i = 0; i < n; i++)
    {
        sv = sv + valores[i] * pesos[i];
        sp = sp + pesos[i];
    }
    return sv / sp;
}