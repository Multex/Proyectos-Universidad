/* Escribir un programa que permita calcular una boleta de pago de un trabajador. Los datos a ingresar son: código del trabajador, el número de horas normales, el número de horas extras y el pago normal. Además se debe considerar lo siguiente:
Las horas extras se pagan 40% más que una hora normal.
La empresa otorga una bonificación del 30% del total del ingreso.
Los descuentos son: ESSALUD 10% y IES 2% respectivamente. */

#include <iostream>
using namespace std;

int main()
{
    char nombres[50];
    int codigo, horasNormales, horasExtras;
    float pagoNormal, pagoExtra, pagoMensual, pagoTotal, pagoDia, bonificacion, descuentoESSALUD, descuentoIES, ingresoNeto;

    cout << "Ingrese el nombre del trabajador: ";
    cin >> nombres; // todo Bug: Si ingresas un espacio en el nombre el programa lo toma para la siguiente parte del codigo y hace que entre en un loop infinito.

    // Mientras que el codigo sea menor a 10 caracteres numericos entonces se volvera a pedir el codigo del trabajador. 
    while (codigo < 1000000000 || codigo > 9999999999)
    {
        cout << "Ingrese el codigo del trabajador: ";
        cin >> codigo;
    } // Bug: Si se ingresan caracteres no numericos, el bucle entra en un loop infinito.

    cout << "Ingrese el número de horas normales: ";
    cin >> horasNormales;
    cout << "Ingrese el número de horas extras al mes (en caso de no haber colocar 0): ";
    cin >> horasExtras;
    cout << "Ingrese el pago por hora: ";
    cin >> pagoNormal;
    
    // Si el numero de horas extras es mayor a 0 entonces se calculara el pago extra y el pago total.

    if (horasExtras > 0)
    {
        // Calculamos el pago por dia y el pago mensual considerando las horas extras y la bonificacion.
        pagoExtra = (horasExtras * pagoNormal) * 0.4; // 0.4 es el 40% de la hora normal.
        pagoDia = (horasNormales * pagoNormal) + pagoExtra;
        pagoMensual = pagoDia * 30;
        bonificacion = pagoMensual * 0.3; // 0.3 es el 30% del total del ingreso.
        pagoTotal = pagoMensual + bonificacion;

        // Sacamos los descuentos usando el pago total.
        descuentoESSALUD = pagoTotal * 0.1; // 0.1 es el 10% del pago total.
        descuentoIES = pagoTotal * 0.02; // 0.02 es el 2% del pago total.

        // Calculamos el pago neto.
        ingresoNeto = pagoTotal - descuentoESSALUD - descuentoIES;

        // Mostramos los resultados.
        cout << "Empleado: " << nombres << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "El pago por dia es: " << pagoDia << endl;
        cout << "El pago mensual es: " << pagoTotal << endl;
        cout << "La bonificacion es: " << bonificacion << endl;
        cout << "El descuento de ESSALUD es: " << descuentoESSALUD << endl;
        cout << "El descuento de IES es: " << descuentoIES << endl;
        cout << "El salario bruto del empleado" << nombres << " es: " << ingresoNeto << endl;
    }
    else
    {
        // Calculamos el pago por dia y el pago mensual considerando la bonificacion.
        pagoDia = horasNormales * pagoNormal;
        pagoMensual = pagoDia * 30;
        bonificacion = pagoMensual * 0.3; // 0.3 es el 30% del total del ingreso.
        pagoTotal = pagoMensual + bonificacion;

        // Sacamos los descuentos usando el pago total.
        descuentoESSALUD = pagoTotal * 0.1; // 0.1 es el 10% del pago total.
        descuentoIES = pagoTotal * 0.02; // 0.02 es el 2% del pago total.

        // Calculamos el pago neto.
        ingresoNeto = pagoTotal - descuentoESSALUD - descuentoIES;

        // Mostramos los resultados.
        cout << "Empleado: " << nombres << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "El pago por dia es: " << pagoDia << endl;
        cout << "El pago mensual es: " << pagoMensual << endl;
        cout << "La bonificacion es: " << bonificacion << endl;
        cout << "El descuento de ESSALUD es: " << descuentoESSALUD << endl;
        cout << "El descuento de IES es: " << descuentoIES << endl;
        cout << "El salario bruto del empleado " << nombres << " es: " << ingresoNeto << endl;
    }
    return 0;
}