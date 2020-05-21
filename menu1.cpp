#include <iostream>
#include <stdio.h>
#include <windows.h>

//Agregar librerías propias
#include "Cliente.h"

//Sources externos

//prototipos
void MenuPrincipal(int);
void agregarCliente();
void listarCliente();

using namespace std;

void menu1()
{
    system("cls");
    int opc;
    cout<<"  Nombre de Proyecto    \n\n";
    cout<<" ===== MENU =====       \n";
    cout<<"| 1. Agregar Cliente    |\n";
    cout<<"| 2. Listar Clientes    |\n";
    cout<<"| 3. Salir              |\n";
    cout<<" ----------------\n\n";
    cout<<"Opcion: ";
    cin>>opc; // Almacena opcion del menú principal
    fflush(stdin); // Limpieza de buffer entrada
    fflush(stdout); // Limpieza buffer salida

    switch(opc)
    {
    case 1:
        agregarCliente();
        break;

    case 2:
        system("cls");
        cout<<"************ Listado de Clientes ****************"<<endl<<endl;
        listarCliente();
        break;

    case 3:
        system("cls");
        MenuPrincipal(opc);
        break;
    }
}
