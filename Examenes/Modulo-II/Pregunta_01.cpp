/* 1.	La Municipalidad provincial de Huaura piensa invertir cierta cantidad de dinero en la reparación de las pistas en las avenidas principales Escribir la representación del algoritmo mediante el Pseudocódigo y el programa respectivo que permita ingresar una cantidad de inversión en soles y lo reparta en la refacción de cinco avenidas de la siguiente manera:

a.	Avenida 28 de Julio 30 % de la cantidad
b.	Avenida Grau 20 % de la cantidad
c.	Avenida San Martin 25 % de la cantidad
d.	Avenida Mercedes Indacochea 10 % de la cantidad
e.	Avenida 9 de Octubre la cantidad restante
Mostrar cuanto le correspondería a cada avenida. 
*/

#include <iostream>
using namespace std;

int main()
{
    float inversion, avenida1, avenida2, avenida3, avenida4, avenida5;

    cout << "Ingrese la cantidad de inversion: S/.";
    cin >> inversion;

    avenida1 = inversion * 0.3;
    avenida2 = inversion * 0.2;
    avenida3 = inversion * 0.25;
    avenida4 = inversion * 0.1;
    avenida5 = inversion - (avenida1 + avenida2 + avenida3 + avenida4);
    
    cout << "La cantidad de inversion para la avenida 28 de Julio es: " << avenida1 << endl;
    cout << "La cantidad de inversion para la avenida Grau es: " << avenida2 << endl;
    cout << "La cantidad de inversion para la avenida San Martin es: " << avenida3 << endl;
    cout << "La cantidad de inversion para la avenida Mercedes Indacochea es: " << avenida4 << endl;
    cout << "La cantidad de inversion para la avenida 9 de Octubre es: " << avenida5 << endl;
    return 0;
}