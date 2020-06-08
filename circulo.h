#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include"figuras.h"
#include<iostream>

//Libreria para el redondeo del area del objeto
#include <iomanip>

//Constante pi para el area del circulo
const double PI = 3.14;

class Circulo : public Figura
{
private://Atributos

    double radio;
public://Metodos

    //PRE:Recibe el tipo de letra y su radio tipo double
    //POST:Instancia un objeto de tipo Circulo
    Circulo(double r);

    //Reescribo la funcion de mostrar datos
    void mostrarDatos();

    //PRE: -
    //POST: Devuelve el radio del objeto
    double getRadio();

    //PRE:
    //POST: Devuelve el area de la forma
    double calcularArea();

    void mostrarFigura();
};


#endif /*CICRULO_H_INCLUDED*/
