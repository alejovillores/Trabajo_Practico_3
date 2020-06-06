#include "lista.h"

Lista::Lista()
{
    primero = 0 ;
    tam = 0;
}
Lista::~Lista()
{
    while (!(this->lista_vacia()))
        this->del_dato(1);
}
bool Lista::lista_vacia()
{
    return(primero == 0);
}
void Lista::insertar(Dato d)
 {
    Nodo* pnodo = new Nodo(d);
    Nodo* paux = primero;
    if (this->lista_vacia()){
        primero = pnodo;
    }
    else{
        while (paux->get_siguiente() != 0){
            paux = paux->get_siguiente();
        }
        paux->set_siguiente(pnodo);
 }
 tam++;
}

Dato Lista::get_dato(unsigned pos)
{
    Nodo* paux = primero;
    //cout<<"\nDireccion del Puntero auxiliar: "<<paux<<endl;

    unsigned i = 1;
    while (i < pos && paux->get_siguiente())
    {
        paux = paux->get_siguiente();
        //cout<<"\nDireccion nueva del Puntero auxiliar: "<<paux<<endl;
        i++;
    }
    //cout<<"\nTermina el ciclo: "<<endl;
    //cout<<"\nDireccion del Puntero auxiliar: "<<paux<<endl;
    return paux->get_dato();
}
void Lista::del_dato(unsigned pos)
{
    Nodo* paux = primero;
    if (pos == 1 || !(primero->get_siguiente()))
    {
        primero = paux->get_siguiente();
    }
    else
    {
        unsigned i = 1;
        Nodo* pant;
        while (i < pos && paux->get_siguiente())
        {
            pant = paux;
            paux = paux->get_siguiente();
            i++;
        }
        pant->set_siguiente(paux->get_siguiente());
    }
    delete paux;
    tam--;
}
unsigned Lista::get_tam()
{
    return tam;
}
