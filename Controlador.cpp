//
// Created by kimberlyc on 18/03/18.
//

#include "Controlador.h"
#include <iostream>

using namespace std;

int Controlador::  buscarPagina(int pos){

    cout << "la pagina es "<< pos/256 ;
    int pagina = pos/256;
    int posicion = pos % 256;

    return pagina;
}

bool Controlador::comprobarPag(int numeroPag){


}

int Controlador:: sacarElemento(int posicion, int pagina){

}

int Controlador::posEnPagina(int pos) {

    cout<< "La posicion es: " << pos % 256;
    int posPagina = pos%256;

    return posPagina;
}

void Controlador::inicializar() {
    Pagina *pagina1 = new Pagina(0);
    Pagina *pagina2 = new Pagina(255);
    Pagina *pagina3 = new Pagina((256*2)-1);

    pagina1->cargarDatos(buscarPagina(0));
    pagina1->cargarDatos(buscarPagina(255));
    pagina1->cargarDatos(buscarPagina((256*2)-1));

    paginasCargadas[0] = *pagina1;
    paginasCargadas[1] = *pagina2;
    paginasCargadas[2] = *pagina3;
}
