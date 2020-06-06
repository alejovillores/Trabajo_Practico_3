#include"circulo.h"
#include<iostream>

//Constante pi para el area del circulo
const double PI = 3.14;


Circulo::Circulo( double r)
{
    radio = r;

}

double Circulo::getRadio()
{
    return radio;
}

void Circulo::mostrarDatos()
{
    cout<<"\nObjeto : Circulo"<<endl;
    cout<<"Radio : "<<radio<<endl;
}

double Circulo::calcularArea()
{
    //Area de un circulo --> PI x radio^2
    double area = PI *(radio * radio);
    return area;
}
