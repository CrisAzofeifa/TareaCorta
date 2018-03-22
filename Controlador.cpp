#include "Controlador.h"
#include <iostream>

using namespace std;


int Controlador:: buscarPagina(int pos){

    cout << "la pagina es "<< pos/256 ;
    int pagina = pos/256;
    int posicion = pos % 256;

    return pagina;
}

bool Controlador::comprobarPag(int numeroPag){

    if(anterior->getNumeroPagina() == numeroPag){
        return true;
    }else if(actual->getNumeroPagina() == numeroPag){
        return true;
    }else if(siguiente->getNumeroPagina() == numeroPag){
        return true;
    }else{
        return false;
    }
}

int Controlador::sacarElemento(int posicion){
    int numPagina = buscarPagina(posicion);
    if(comprobarPag(numPagina)){
        return sacarPagina(numPagina).pagina[posEnPagina(posicion)];
    }else{
        descargarPagina(anterior->pagina);
        cargarPagina(numPagina);
        return sacarPagina(numPagina).pagina[posEnPagina(posicion)];
    }
}

int Controlador::posEnPagina(int pos) {

    cout<< "La posicion es: " << pos % 256;
    int posPagina = pos%256;

    return posPagina;
}

void Controlador::inicializar() {
    anterior = new Pagina(0);
    actual = new Pagina(255);
    siguiente = new Pagina((256*2)-1);

    //bubbleSort(10240);
}

void Controlador::descargarPagina(int numeros[]) {
    const string NombreArchivo = "Array.txt";
    ofstream fichero;
    fichero.open(NombreArchivo.c_str());

    for(int x = 0; x<256 ; x++){
        fichero<<numeros[x]<<" , ";
    }
    fichero.close();

}



void Controlador::cargarPagina(int numeroPagina) {
    anterior = actual;
    actual = siguiente;
    siguiente = new Pagina(numeroPagina);
}

Pagina Controlador::sacarPagina(int numeroPagina) {
    if(anterior->getNumeroPagina() == numeroPagina){
        return *anterior;
    }else if(actual->getNumeroPagina() == numeroPagina){
        return *actual;
    }else if(siguiente->getNumeroPagina() == numeroPagina){
        return *siguiente;
    }

}

void Controlador::insertarEnPos(int pos, int el) {

    Pagina actual = sacarPagina(pos);
    actual.pagina[posEnPagina(pos)] = el;

}

void Controlador::swap(int posJ, int posI)
{
    int temp = sacarElemento(posJ);
    int temp2 = sacarElemento(posI);

    insertarEnPos(posJ, temp);
    insertarEnPos(posI, temp2);


}

// An optimized version of Bubble Sort
    void Controlador::bubbleSort(int n)
    {
        int i, j;
        for (i = 0; i < n-1; i++ ){

            for (j = 0; j < n-i-1; j++)
                {
                    if (sacarElemento(j) > sacarElemento(j + 1)) {
                        swap(j, j + 1);

                    }
                }
        }
    }

void Controlador::sustituirReiniciar() {
    /*descargarPagina(paginasCargadas[0].pagina);
    descargarPagina(paginasCargadas[1].pagina);
    descargarPagina(paginasCargadas[2].pagina);*/


    rename("holiiii.txt","Array.txt");

}
