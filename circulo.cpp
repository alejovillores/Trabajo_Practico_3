#include"circulo.h"
#include<iostream>

//Constante pi para el area del circulo
const double PI = 3.14;


Circulo::Circulo( double r)
{
    radio = r;
    cout<<"Se creo un circulo"<<endl;
}

double Circulo::getRadio()
{
    return radio;
}

void Circulo::mostrarDatos()
{
    cout<<"\n Soy un Circulo"<<endl;
}

double Circulo::calcularArea()
{
    //Area de un circulo --> PI x radio^2
    double area = PI *(radio * radio);
    return area;
}
