#include"menu.h"
using namespace std;
#include<iostream>

const int SALIR = 0;
const int CONSULTAR =1;
const int ELIMINAR = 2;
const int AGREGAR =3 ;
const int LISTAR = 4;
const int SUP_MAX =5;
const int SUP_MIN = 6;

int main()
{
    int opcion;
    //Se crea un objeto menu , que dentro posee un objeto Lista
    Menu menu = Menu();

    //Se cargan los datos del archivo
    menu.cargarDatos();

    //Se muestran las opciones del programa
    menu.mostrarOpciones();
    cout<<"Ingrese una opcion: "; cin>>opcion;

    //Bucle Menu
    while(opcion != SALIR)
    {
        switch(opcion)
        {
            case CONSULTAR:
                menu.consultarDato();
                break;

            case ELIMINAR:
                menu.eliminarObjeto();
                 break;

            case AGREGAR:
                menu.agregarObjeto();
                break;

            case LISTAR:
                menu.listarObjetos();
                break;

            case SUP_MAX:
                menu.superficieMaxima();
                break;

            case SUP_MIN:
                 menu.superficieMinima();
                 break;

            default: //Default por si el usuario ingresa un numero que no esta.
                cout<<"No se encuentra esa opcion"<<endl;
        }
        //Pausa la pantalla
        system("PAUSE");
        //Limpia la pantalla
        system("CLS");
        //Se vuelve a mostrar el menu
        menu.mostrarOpciones();
        cout<<"Ingrese una opcion: ";cin>>opcion;
    }

    return 0;
}
