#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

//Libreria de lista
#include"lista.h"

//Libreria de los objetos
#include"circulo.h"
#include"triangulo.h"
#include"rectangulo.h"

//Librerias de trabajo
#include<iostream>
#include<fstream>
#include<string>

//Libreria para el redondeo del area del objeto
#include <iomanip>

//Constante -> ruta del archivo
const string nombreArchivo = "figuras.txt";

//Constante de letra = objeto
const char TRIANGULO ='T';
const char CIRCULO ='C';
const char RECTANGULO = 'R';
const double SUP_MINIMA = 100.0;

//Constantes de opciones para el Menu
const int SALIR = 0;
const int CONSULTAR =1;
const int ELIMINAR = 2;
const int AGREGAR =3 ;
const int LISTAR = 4;
const int SUP_MAX =5;
const int SUP_MIN = 6;


class Menu
{
private:
    /*
    El menu tiene como atributo una lista
    para evitar pasar por referencia en cada metodo.
    */
    Lista listaObjetos;

public: //Metodos

    //Constuctor
    Menu();

    //PRE:
    //POST:
    void mostrarOpciones();

    //PRE: -
    //POST: Carga el atributo lista con los objetos creados del archivo figuras.txt
    void  cargarDatos();

    //PRE: -
    //POST: Llama a mostrar dato de un objeto en determinada posicion,
    void consultarDato();

    //PRE: -
    //POST: Llama a mostrar dato de un objeto en determinada posicion,
    void eliminarObjeto();

    //PRE: -
    //POST: Pide datos maualmente y crea una nueva figura
    void agregarObjeto();

    //PRE: -
    //POST: Lista los objetos de la lista
    void listarObjetos();

    //PRE: -
    //POST: Devuelve el objeto cuya area es la mas grande,
    void superficieMaxima();

    //PRE: -
    //POST: Devuelve el objeto cuya area es la mas pequeña
    void superficieMinima();

    //Destructor
    ~Menu();

};

#endif /* MENU_H_INCLUDED */
