// Escribir un programa que pida al usuario que ingrese 5 notas, y determine la mayor y menor nota. 

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int array[50], *max, *min, i; //pointer variables declared for max and min

    cout<<"Ingrese 5 numeros\n";
    for ( i = 0 ; i < 5 ; i++ )
        cin>>array[i];
    
    min= std::min_element(array,array+5);
    cout<<"El menor numero es: "<< *min <<"\n";
    
    max= std::max_element(array,array+5);
    cout<<"El mayor numero es: "<< *max <<"\n";

return 0;
}