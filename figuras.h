#ifndef FIGURAS_H_INCLUDED
#define FIGURAS_H_INCLUDED

using namespace std;

// Clase base
class Figura
{

public: //Metodos

    //PRE: -
    //POST: Muestra que tipo de objeto es
    virtual void mostrarDatos() = 0;

    //PRE:
    //POST: Devuelve el area de la figura
    virtual double calcularArea() = 0;

    //PRE: -
    //POST: Muestra la figura del objeto por pantalla
    virtual void mostrarFigura() = 0;

};

#endif /*FIGURAS_H_INCLUDED*/
