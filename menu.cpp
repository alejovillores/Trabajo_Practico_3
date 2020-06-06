#include"menu.h"




Menu::Menu()
{
    cout<<"Se creo una lista dentro del menu"<<endl;
}

Menu::~Menu()
{
    cout<<"Se ha eliminado la lista del menu"<<endl;
}

void Menu::cargarDatos()
{
    ifstream archivoObjetos;

    archivoObjetos.open(nombreArchivo.c_str(),ios::in);

    if(!archivoObjetos.fail())
    {
        char letra;
        double n1 = 0 ,n2 = 0;
        while(archivoObjetos>>letra)
        {
            //Creo un puntero de tipo Figura
            Figura* pObjeto;
            switch(letra){

                case RECTANGULO:
                    //Leo los dos numeros siguientes
                    archivoObjetos>>n1;
                    archivoObjetos>>n2;
                    pObjeto = new Rectangulo(n1,n2);

                    //Inserto el puntero al objeto en la lista
                    listaObjetos.insertar(pObjeto);
                    //cout<<"Se agrego un rectangulo !"<<endl;
                    //pObjeto->mostrarDatos();
                    break;

                case TRIANGULO:
                    archivoObjetos>>n1;
                    archivoObjetos>>n2;

                    pObjeto = new Triangulo(n1,n2);

                    listaObjetos.insertar(pObjeto);
                    //cout<<"Se agrego un triangulo! "<<endl;
                    //pObjeto->mostrarDatos();
                    break;

                case CIRCULO:
                    archivoObjetos>>n1;
                    pObjeto = new Circulo(n1);
                    listaObjetos.insertar(pObjeto);
                    //cout<<"Se agrego un circulo!"<<endl;
                    //pObjeto->mostrarDatos();
                    break;
            }
        }
        archivoObjetos.close();
        cout<<"Se han cargado : "<<listaObjetos.get_tam()<<" datos "<<endl;

    }
    else{
        cout<<"Ha ocurrido un problema al intentar abrir el archivo..."<<endl;
    }
}


void Menu::consultarDato( )
{
    unsigned posicion;
    cout<<"Ingrese la posicion del objeto para ver sus datos";cin>>posicion;
    if(posicion <= listaObjetos.get_tam() && posicion!= 0)
    {
        listaObjetos.get_dato(posicion)->mostrarDatos();
    }
    else{
        cout<<"La lista no tiene esa posicion"<<endl;
    }
}

void Menu::eliminarObjeto()
{
    unsigned posicion;
    cout<<"Ingrese la posicion del objeto para borrarlo";cin>>posicion;
    if(posicion <= listaObjetos.get_tam() && posicion != 0)
    {
        listaObjetos.del_dato(posicion);
        cout<<"Se ha eliminado correctamente el objeto "<<endl;
    }
    else{
        cout<<"La lista no tiene esa posicion"<<endl;
    }

}

void Menu::agregarObjeto()
{
    char letra;
    double n1,n2;
    Figura* pObjeto;
    cout<<"Ingrese la letra del objeto: ";cin>>letra;
    switch(letra)
    {
        case RECTANGULO:
            cout<<"\nIngrese la base: ";cin>>n1;
            cout<<"Ingrese la altura: ";cin>>n2;

            pObjeto = new Rectangulo(n1,n2);
            // Inserto el puntero al objeto en la lista
            listaObjetos.insertar(pObjeto);
            break;

        case TRIANGULO:
            cout<<"\nIngrese la base: ";cin>>n1;
            cout<<"Ingrese la altura: ";cin>>n2;

            pObjeto = new Triangulo(n1,n2);

            listaObjetos.insertar(pObjeto);
            break;

        case CIRCULO:
            cout<<"\nIngrese el radio: ";cin>>n1;
            pObjeto = new Circulo(n1);
            // Inserto el puntero al objeto en la lista

            listaObjetos.insertar(pObjeto);
            break;
            }
    }



void Menu::listarObjetos()
{
    for(unsigned i = 1 ; i <= listaObjetos.get_tam();i++){
        cout<<"N°:"<<i<<endl;
        listaObjetos.get_dato(i)->mostrarDatos();
    }
}

void Menu::superficieMaxima()
{
    //Variable que guarda la superficie maxima
    double superMaxima  = 0;
    //Variable que guarda la ubicacion del objeto que tiene la max superficie
    int posMaximo = 0;
    for(unsigned i = 1 ; i <= listaObjetos.get_tam();i++)
    {
        if(listaObjetos.get_dato(i)->calcularArea() > superMaxima){
            superMaxima = listaObjetos.get_dato(i)->calcularArea();
            posMaximo = i;
        }
    }
    //Fin del ciclo for
    cout<<"El objeto con la superficie maxima es :"<<endl; //Muestra la caracteristicas del objeto
    listaObjetos.get_dato(posMaximo)->mostrarDatos();
    cout<<"Su superficie es de : "<<superMaxima<<endl; //Muestra la superficie maxima
}

void Menu::superficieMinima()
{
    //Variable que guarda la superficie maxima
    double superMinima  = SUP_MINIMA;
    //Variable que guarda la ubicacion del objeto que tiene la max superficie
    int posMinimo = 0;
    for(unsigned i = 1; i <= listaObjetos.get_tam();i++)
    {
        if(listaObjetos.get_dato(i)->calcularArea() < superMinima){
            superMinima = listaObjetos.get_dato(i)->calcularArea();
            posMinimo = i;
        }
    }
    //Fin del ciclo for
    cout<<"El objeto con la superficie minima es :"<<endl; //Muestra la caracteristicas del objeto
    listaObjetos.get_dato(posMinimo)->mostrarDatos();
    cout<<"Su superficie es de : "<<superMinima<<endl; //Muestra la superficie minima
}


void Menu::mostrarOpciones()
{
    cout<<"\n-------Bienvenido , ingrese una opcion---"<<endl;
    cout<<"\n1- Consultar qué objeto en determinada posición"<<endl;
    cout<<"\n2- Dar de baja el objeto de cierta posición"<<endl;
    cout<<"\n3- Agregar un nuevo objeto de forma manual"<<endl;
    cout<<"\n4- Listar todos los objetos               "<<endl;
    cout<<"\n5- Indicar la superficie máxima           "<<endl;
    cout<<"\n6- Indicar la superficie mínima           "<<endl;
    cout<<"\n0 - Salir"<<endl;
}
