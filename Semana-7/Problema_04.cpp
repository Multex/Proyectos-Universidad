// Escribir un programa que ordene de mayor a menor 3 números ingresado por teclado

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int array[50], i;

    cout<<"Ingrese 3 numeros\n";
    for ( i = 0 ; i < 3 ; i++ )
        cin>>array[i];

    sort(array, array+3, greater<int>());

    cout<<"El orden de mayor a menor es: ";
    for ( i = 0 ; i < 3 ; i++ )
        cout<<array[i]<<" ";

return 0;
}