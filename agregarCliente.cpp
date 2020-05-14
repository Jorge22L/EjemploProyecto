#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

//Agregar librerías propias
#include "Cliente.h"

using namespace std;
void agregarCliente()
{
    Cliente cliente1;
    ofstream datos;
    datos.open("clientes.txt");

    cout<<"Nuevo Registro de cliente"<<endl;
    cout<<"Cedula: ";
    gets(cliente1.Cedula);
    fflush(stdin);

    cout<<"Nombre: ";
    gets(cliente1.Nombre);
    fflush(stdin);

    cout<<"Telefono: ";
    gets(cliente1.Telefono);
    fflush(stdin);

    cout<<"Direccion: ";
    gets(cliente1.Direccion);
    fflush(stdin);

    cout<<"Correo: ";
    gets(cliente1.Correo);
    fflush(stdin);

    fflush(stdout);

    datos<<cliente1.Cedula<<endl;
    datos<<cliente1.Nombre<<endl;
    datos<<cliente1.Telefono<<endl;
    datos<<cliente1.Direccion<<endl;
    datos<<cliente1.Correo<<endl;

    datos.close();
}
