#include "nodo.h"
#include<iostream>

Nodo::Nodo(Dato d)
{

    //EL dato es un puntero a objeto
    dato = d;
    psig = 0;

}
Nodo::~Nodo()
{
    //Como el dato tiene memoria reservada , debo liberarla
    delete dato;
}
void Nodo::set_dato(Dato d)
{
    dato = d; //EL dato es un puntero a objeto
    cout<<dato<<endl;
}
Dato Nodo::get_dato()
{
    return dato;
}
void Nodo::set_siguiente(Nodo* ps)
{
    psig = ps;

}
Nodo* Nodo::get_siguiente()
{
    return psig;
}
