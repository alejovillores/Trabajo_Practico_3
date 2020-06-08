#include"rectangulo.h"

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
    cout<<"Area: " << setprecision(1) << fixed <<calcularArea()<<" m "<<endl;
}

double Rectangulo::calcularArea()
{
    //Area de un rectangulo --> BASE x ALTURA
    double area = base * altura;
    return area;
}


void Rectangulo::mostrarFigura()
{
    cout<<""<<endl;
    cout<<"______________"<<endl;
    cout<<"|            |"<<endl;
    cout<<"| Rectangulo |"<<endl;
    cout<<"|____________|"<<endl;
}
