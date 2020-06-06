#include"triangulo.h"
#include<iostream>


Triangulo::Triangulo(double b, double h)
{
    base = b;
    altura = h;
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
    cout<<"\nObjeto: Triangulo"<<endl;
    cout<<"Base: "<<base<<endl;
    cout<<"Altura: "<<altura<<endl;
}

double Triangulo ::calcularArea()
{
    double area = (base * altura)/AREA ;
    return area;
}
