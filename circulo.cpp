#include"circulo.h"

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
    cout<<"Area: " << setprecision(1) << fixed <<calcularArea()<<" m "<<endl;
}

double Circulo::calcularArea()
{
    //Area de un circulo --> PI x radio^2
    double area = PI *(radio * radio);
    return area;
}


void Circulo::mostrarFigura()
{
    cout<<""<<endl;
    cout<<"  ...  "<<endl;
    cout<<".     ."<<endl;
    cout<<".     . "<<endl;
    cout<<"  ...   "<<endl;

}
