#include <iostream>
#include <stdlib.h>
char opcion_menu;
enum Menu
{
    Nuevo = '1',
    Editar = '2',
    Grabar = '3',
    Cancelar = '4',
    Eliminar = '5',
    Salir = '6',
};

using namespace std;

int menu()
{
    clearenv();
    cout << "\n MENU PRINCIPAL\n";
    cout << "\n [1] Nuevo";
    cout << "\n [2] Editar";
    cout << "\n [3] Grabar";
    cout << "\n [4] Cancelar";
    cout << "\n [5] Eliminar";
    cout << "\n [6] Salir";
    cout << "\n\n Ingrese su opción:";
    do
    {
        opcion_menu = getchar();
    } while (opcion_menu < '1' || opcion_menu == '7');
    cout << opcion_menu;
}
int main()
{
    int salir = 0;
    while (salir != 1)
    {
        menu();
        clearenv();
        switch (opcion_menu)
        {
        case '1':
            cout << "Nueva opción";
            break;
        case '2':
            cout << "Editar opción";
            break;
        case '3':
            cout << "Grabar opción";
            break;
        case '4':
            cout << "Cancelar opción";
            break;
        case '5':
            cout << "Eliminar opción";
            break;
        case '6':
            cout << "Presione cualquier tecla para salir";
            salir = 1;
            break;
        }
    }
}
