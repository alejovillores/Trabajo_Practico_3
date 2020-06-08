#include"triangulo.h"


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
    cout<<"Area: " << setprecision(1) << fixed <<calcularArea()<<" m "<<endl;
}

double Triangulo ::calcularArea()
{
    double area = (base * altura)/AREA ;
    return area;
}

void Triangulo::mostrarFigura()
{
    cout<<""<<endl;
    cout<<"  /\\"<<endl;
    cout<<" /  \\"<<endl;
    cout<<"/____\\"<<endl;

}
