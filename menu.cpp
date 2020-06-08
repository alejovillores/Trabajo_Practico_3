#include"menu.h"

Menu::Menu()
{
    cout<<"Trabajo Practico 3"<<endl;
    cout<<"Autor : Alejo Villores"<<endl;
}

Menu::~Menu()
{
    cout<<"Se ha liberado toda la memoria necesaria"<<endl;
}

void Menu::cargarDatos()
{
    ifstream archivoObjetos;

    //Apertura del archivo
    archivoObjetos.open(nombreArchivo.c_str(),ios::in);

    if(!archivoObjetos.fail())
    {
        char letra;
        double n1 = 0 ,n2 = 0;
        while(archivoObjetos>>letra)
        {
            //Se crea  un puntero de tipo Figura
            Figura* pObjeto;
            switch(toupper(letra)){ //Me aseguro de pasar la letra a mayuscula

                case RECTANGULO:
                    //Leo los dos numeros siguientes
                    archivoObjetos>>n1;
                    archivoObjetos>>n2;
                    pObjeto = new Rectangulo(n1,n2);

                    //Inserto el puntero al objeto en la lista
                    listaObjetos.insertar(pObjeto);

                    break;

                case TRIANGULO:
                    archivoObjetos>>n1;
                    archivoObjetos>>n2;

                    pObjeto = new Triangulo(n1,n2);

                    listaObjetos.insertar(pObjeto);

                    break;

                case CIRCULO:
                    archivoObjetos>>n1;
                    pObjeto = new Circulo(n1);

                    listaObjetos.insertar(pObjeto);

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
    cout<<"Ingrese la posicion del objeto para ver sus datos: ";cin>>posicion;
    if(posicion <= listaObjetos.get_tam() && posicion!= 0)
    {
        listaObjetos.get_dato(posicion)->mostrarFigura();
        listaObjetos.get_dato(posicion)->mostrarDatos();
    }
    else{
        cout<<"La lista no tiene esa posicion"<<endl;
    }
}

void Menu::eliminarObjeto()
{
    unsigned posicion;
    cout<<"Ingrese la posicion del objeto para borrarlo: ";cin>>posicion;

    //Me aseguro que ingrese una posicion valida
    if(posicion <= listaObjetos.get_tam() && posicion != 0)
    {
        listaObjetos.del_dato(posicion);
        cout<<"Se ha eliminado correctamente el objeto "<<endl;
    }
    else{
        cout<<"La lista no tiene esa posicion! "<<endl;
    }

}

void Menu::agregarObjeto()
{
    //Creo las varibles a utilizar
    char letra;
    double n1,n2;
    Figura* pObjeto;

    cout<<"Ingrese la letra del objeto: ";cin>>letra;
    switch(toupper(letra)) //Me aseguro que la letra ingrese en  mayuscula
    {
        case RECTANGULO:
            cout<<"\nIngrese la base: ";cin>>n1;
            cout<<"Ingrese la altura: ";cin>>n2;

            //Asigno el puntero a un espacio en memoria
            pObjeto = new Rectangulo(n1,n2);

            // Inserto el puntero al objeto en la lista
            listaObjetos.insertar(pObjeto);
            cout<<"Se creo un rectangulo correctamente! "<<endl;
            break;

        case TRIANGULO:
            cout<<"\nIngrese la base: ";cin>>n1;
            cout<<"Ingrese la altura: ";cin>>n2;

            //Asigno el puntero a un espacio en memoria
            pObjeto = new Triangulo(n1,n2);

            // Inserto el puntero al objeto en la lista
            listaObjetos.insertar(pObjeto);
            cout<<"Se creo un triangulo correctamente! "<<endl;
            break;

        case CIRCULO:
            cout<<"\nIngrese el radio: ";cin>>n1;

            //Asigno el puntero a un espacio en memoria
            pObjeto = new Circulo(n1);

            // Inserto el puntero al objeto en la lista
            listaObjetos.insertar(pObjeto);
            cout<<"Se creo un circulo correctamente! "<<endl;
            break;

        default:
            cout<<"No existe ese objeto ! "<<endl;

            }
    }

void Menu::listarObjetos()
{
    for(unsigned i = 1 ; i <= listaObjetos.get_tam();i++){
        cout<<"\nNumero: "<<i<<endl;
        listaObjetos.get_dato(i)->mostrarDatos();
    }
}

void Menu::superficieMaxima()
{
    //Variable que almacena la superficie maxima
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

}

void Menu::superficieMinima()
{
    //Variable que guarda la superficie minima
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

}

void Menu::mostrarOpciones()
{
    cout<<"\n-------Bienvenido , ingrese una opcion---"<<endl;
    cout<<"\n1- Consultar objeto en determinada posicion"<<endl;
    cout<<"\n2- Dar de baja el objeto de cierta posicion"<<endl;
    cout<<"\n3- Agregar un nuevo objeto de forma manual"<<endl;
    cout<<"\n4- Listar todos los objetos               "<<endl;
    cout<<"\n5- Indicar la superficie maxima           "<<endl;
    cout<<"\n6- Indicar la superficie minima           "<<endl;
    cout<<"\n0- Salir"<<endl;
}
