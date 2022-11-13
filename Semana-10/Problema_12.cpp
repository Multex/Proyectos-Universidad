// Imprimir los salarios netos junto a los demás importes necesarios para su cálculo, de todos los obreros de una empresa, quienes están identificados por un código y se rigen por las siguientes condiciones salariales: Cada trabajador tiene una tarifa por hora trabajada en horario normal. La tarifa por hora extra es 50% más que la tarifa por la hora normal. El salario básico se calcula en base a las horas trabajadas en horario normal y en horario extra. Bonificación = 20% del salario básico. Salario Bruto = Salario Básico + Bonificación. Descuento = 7% del Salario Bruto. Salario Neto = Salario Bruto – Descuento.

#include <iostream>
using namespace std;

int main() {
    int codigo, horasNormales, horasExtras;
    float tarifaHoraNormal, tarifaHoraExtra, salarioBasico, bonificación, salarioBruto, descuento, salarioNeto;

    cout << "Ingrese el código del trabajador: ";
    cin >> codigo;
    while (cin.fail() || codigo < 1) {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Ingrese un código válido: ";
        cin >> codigo;
    }
    cout << "Ingrese la tarifa por hora normal: S/.";
    cin >> tarifaHoraNormal;
    while (cin.fail() || tarifaHoraNormal < 1) {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Ingrese una tarifa válida: ";
        cin >> tarifaHoraNormal;
    }
    tarifaHoraExtra = tarifaHoraNormal - (tarifaHoraNormal * 0.5);

    cout << "Ingrese las horas normales trabajadas: ";
    cin >> horasNormales;
    while (cin.fail() || horasNormales < 1) {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Ingrese una cantidad de horas válida: ";
        cin >> horasNormales;
    }
    
    cout << "Ingrese las horas extras trabajadas \n(Colocar 0 si no hay)\n>> ";
    cin >> horasExtras;
    while (cin.fail() || horasExtras < 0) {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Ingrese una cantidad de horas válida: ";
        cin >> horasExtras;
    }

    if (horasExtras > 0) {
        salarioBasico = (horasNormales * tarifaHoraNormal) + (horasExtras * tarifaHoraExtra);
    } else {
        salarioBasico = horasNormales * tarifaHoraNormal;
    }
    bonificación = salarioBasico * 0.2;
    salarioBruto = salarioBasico + bonificación;
    descuento = salarioBruto * 0.07;
    salarioNeto = salarioBruto - descuento;

    cout << "Código del trabajador: " << codigo << endl;
    cout << "Tarifa por hora normal: S/." << tarifaHoraNormal << endl;
    if (horasExtras > 0) {
        cout << "Tarifa por hora extra: S/." << tarifaHoraExtra << endl;
    }
    cout << "Horas normales trabajadas: " << horasNormales << " horas" << endl;
    if (horasExtras > 0) {
        cout << "Horas extras trabajadas: " << horasExtras << " horas" << endl;
    }
    cout << "Salario básico: S/." << salarioBasico << endl;
    cout << "Bonificación: S/." << bonificación << endl;
    cout << "Salario bruto: S/." << salarioBruto << endl;
    cout << "Descuento: S/." << descuento << endl;
    cout << "Salario neto: S/." << salarioNeto << endl;
}