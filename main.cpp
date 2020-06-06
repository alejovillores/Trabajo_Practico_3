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
    /*Lista lista  = Lista();
    Figura* ci = new Circulo(1);
    Figura* tri = new Triangulo(1,3);
    cout<<"Direccion del puntero circulo "<<ci<<endl;
    cout<<"Direccion del puntero triangulo "<<tri<<endl;

    lista.insertar(ci);
    lista.insertar(tri);

    cout<<lista.get_dato(1)<<endl;
    cout<<lista.get_dato(2)<<endl;*/

    menu.cargarDatos();
    menu.mostrarOpciones();
    cout<<"Ingrese una opcion: "; cin>>opcion;

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
            default:
                cout<<"No se encuentra esa opcion"<<endl;
        }
        menu.mostrarOpciones();
        cout<<"Ingrese una opcion: ";cin>>opcion;
    }

    return 0;
}
