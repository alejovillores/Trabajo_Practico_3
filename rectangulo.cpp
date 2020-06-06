#include"rectangulo.h"
#include<iostream>

Rectangulo::Rectangulo(double b, double h)
{
    base = b;
    altura = h;

}

double Rectangulo::getAltura()
{
    return altura;
}

double Rectangulo::getBase()
{
    return base;
}

void Rectangulo::mostrarDatos()
{
    cout<<"\nObjeto: Rectangulo "<<endl;
    cout<<"Base: "<<base<<endl;
    cout<<"Altura: "<<altura<<endl;
}

double Rectangulo::calcularArea()
{
    //Area de un rectangulo --> BASE x ALTURA
    double area = base * altura;

    return area;

}
