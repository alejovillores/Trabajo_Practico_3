#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include"figuras.h"
#include<iostream>

//Libreria para el redondeo del area del objeto
#include <iomanip>

//Constante para Area del triangulo
const int AREA = 2;

class Triangulo : public Figura
{
private: //Atributos

    double base;
    double altura;

public: //Metodos

    //PRE: Recibe el tipo de letra , double base ,double altura
    //POST:
    Triangulo(double b, double h);

    //Rescribo la funcion de mostrar datos
    void mostrarDatos();

    //PRE: -
    //POST: Devuelve la base del objeto
    double getBase();

    //PRE: -
    //POST: Devuelve la altura objeto
    double getAltura();

    //PRE:
    //POST: Devuelve el area de la forma
    double calcularArea();

    void mostrarFigura();


};


#endif /*TRIANGULO_H_INCLUDED*/
