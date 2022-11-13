// Escribir un programa que imprima la siguiente serie: 2, 6, 3, 7, 4, 8, 5 … (100 términos)

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 2, j = 6; i <= 100; i ++, j ++)
    {
        cout << i << ", " << j << ", ";
    }
    return 0;
}