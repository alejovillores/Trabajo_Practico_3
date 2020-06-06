#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include"figuras.h"

class Rectangulo : public Figura
{

private://Atributos

    double base;
    double altura;

public://Metodos


    //PRE:Recibe  su base y altura de  tipo double
    //POST:Instancia un objeto de tipo Rectangulo
    Rectangulo(double b,double h);

    //Reescribo la funcion de mostrar datos
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

};


#endif /*RECTANGULO_H_INCLUDED*/
