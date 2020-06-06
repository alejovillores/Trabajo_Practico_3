#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include"figuras.h"

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


};


#endif /*CICRULO_H_INCLUDED*/
