//
// Created by cris on 17/03/18.
//

#ifndef TAREACORTA_PAGINA_H
#define TAREACORTA_PAGINA_H

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


class Pagina {
public:
    void cargarDatos(int inicial);
    int invertirNumero(int numero);

private:
    int posInicialEnBigArray, posFinalEnBigArray;
    int paginacion[256];


};


#endif //TAREACORTA_PAGINA_H
