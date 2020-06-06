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

//Constantes del programa
const string nombreArchivo = "figuras.txt";
const char TRIANGULO ='T';
const char CIRCULO ='C';
const char RECTANGULO = 'R';
const double SUP_MINIMA = 100.0;

class Menu
{
private: //El menu tiene como atributo una lista
    Lista listaObjetos;
public: //Metodos

    //Constuctor
    Menu();

    void mostrarOpciones();

    //PRE: -
    //POST: Devuelve una lista con los objetos creados del archivo figuras.txt
    void  cargarDatos();

    //PRE: Recibe una lista con los objetos cargados previamente
    //POST: Llama a mostrar dato de un objeto en determinada posicion,
    void consultarDato();

    //PRE: Recibe una lista con los objetos cargados previamente
    //POST: Llama a mostrar dato de un objeto en determinada posicion,
    void eliminarObjeto();

    //PRE: Recibe una lista con los objetos cargados previamente
    //POST: Pide datos maualmente y crea una nueva figura
    void agregarObjeto();

    //PRE: Recibe una lista con los objetos cargados previamente
    //POST: Lista los objetos de la lista
    void listarObjetos();

    //PRE: Recibe una lista con los objetos cargados previamente
    //POST: Devuelve el objeto cuya area es la mas grande,
    void superficieMaxima();

    //PRE: Recibe una lista con los objetos cargados previamente
    //POST: Devuelve el objeto cuya area es la mas pequeña
    void superficieMinima();

    ~Menu();

};

#endif /* MENU_H_INCLUDED */
