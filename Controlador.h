//
// Created by kimberlyc on 18/03/18.
//

#ifndef TAREA_CORTA_CONTROLADOR_H
#define TAREA_CORTA_CONTROLADOR_H

#include "Pagina.h"
#include <fstream>


class Controlador {
public:

    void inicializar();
    int  buscarPagina(int pos);
    int  posEnPagina(int pos);
    bool comprobarPag(int pagina);
    int  sacarElemento(int pos);
    void cargarPagina(int numeroPagina);
    void descargarPagina(int numeros[]);
    Pagina sacarPagina(int numeroPagina);
    void swap(int posJ, int posI);
    void bubbleSort(int n);
    void sustituirReiniciar();

    void insertarEnPos(int pos,int el);

private:
    Pagina paginasCargadas[3];
};


#endif //TAREA_CORTA_CONTROLADOR_H
