#include"triangulo.h"
#include<iostream>
const int AREA = 2;

Triangulo::Triangulo(double b, double h)
{
    base = b;
    altura = h;
    cout<<"Se creo un triangulo"<<endl;

}

double Triangulo::getAltura()
{
    return altura;
}

double Triangulo::getBase()
{
    return base;
}

void Triangulo ::mostrarDatos()
{
    cout<<"\nSoy un Triangulo !"<<endl;
    cout<<"Base: "<<base<<endl;
    cout<<"Altura: "<<altura<<endl;
}

double Triangulo ::calcularArea()
{
    double area = (base * altura)/AREA ;
    return area;
}
