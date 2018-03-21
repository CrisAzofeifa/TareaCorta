//
// Created by kimberlyc on 18/03/18.
//

#ifndef TAREA_CORTA_CONTROLADOR_H
#define TAREA_CORTA_CONTROLADOR_H

#include "Pagina.h"


class Controlador {
public:
    void inicializar();
    int  buscarPagina(int pos);
    int  posEnPagina(int pos);
    bool comprobarPag(int pagina);
    int  sacarElemento(int pos);
    void cargarPagina(int numeroPagina);
    void descargarPagina();
    Pagina sacarPagina(int numeroPagina);

private:
    Pagina paginasCargadas[3];


};


#endif //TAREA_CORTA_CONTROLADOR_H
