#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

//Librerias de lista
#include"lista.h"

//Libreria de los objetos
#include"circulo.h"
#include"triangulo.h"
#include"rectangulo.h"

//Librerias de trabajo
#include<iostream>
#include<fstream>
#include<string>

//Constantes del Menu
const string nombreArchivo = "figuras.txt";
const char TRIANGULO ='T';
const char CIRCULO ='C';
const char RECTANGULO = 'R';
const double SUP_MINIMA = 100.0;

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
