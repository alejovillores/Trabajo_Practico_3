#include"rectangulo.h"
#include<iostream>

Rectangulo::Rectangulo(double b, double h)
{
    base = b;
    altura = h;
    cout<<"Se creo un rectangulo"<<endl;
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
    cout<<"\n Soy un Rectangulo"<<endl;
}

double Rectangulo::calcularArea()
{
    //Area de un rectangulo --> BASE x ALTURA
    double area = base * altura;

    return area;

}
