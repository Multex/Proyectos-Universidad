/* Escribir un programa que permita calcular una boleta de pago de un trabajador. Los datos a ingresar son: código del trabajador, el número de horas normales, el número de horas extras y el pago normal. Además se debe considerar lo siguiente:
Las horas extras se pagan 40% más que una hora normal.
La empresa otorga una bonificación del 30% del total del ingreso.
Los descuentos son: ESSALUD 10% y IES 2% respectivamente. */

#include <iostream>

using namespace std;

int main()
{
    int codigo, horasNormales, horasExtras;
    float pagoNormal, pagoExtra, pagoTotal, bonificacion, descuentoESSALUD, descuentoIES, ingresoNeto;
    cout << "Ingrese el código del trabajador: ";
    cin >> codigo;
    cout << "Ingrese el número de horas normales: ";
    cin >> horasNormales;
    cout << "Ingrese el número de horas extras: ";
    cin >> horasExtras;
    cout << "Ingrese el pago normal: ";
    cin >> pagoNormal;
    
    // Calculos
    pagoExtra = pagoNormal * 0.4;
    pagoTotal = horasNormales * pagoNormal + horasExtras * pagoExtra;
    bonificacion = pagoTotal * 0.3;
    descuentoESSALUD = pagoTotal * 0.1;
    descuentoIES = pagoTotal * 0.02;
    ingresoNeto = pagoTotal + bonificacion - descuentoESSALUD - descuentoIES;
    
    // Mostrar resultados
    cout << "El pago total es: " << pagoTotal << endl;
    cout << "La bonificación es: " << bonificacion << endl;
    cout << "El descuento de ESSALUD es: " << descuentoESSALUD << endl;
    cout << "El descuento de IES es: " << descuentoIES << endl;
    cout << "El ingreso neto es: " << ingresoNeto << endl;
    return 0;
}