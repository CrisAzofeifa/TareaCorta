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

    Pagina(int inicio){
        this->posInicialEnBigArray = inicio;
        this->posFinalEnBigArray = inicio+256;
        this->numeroDePagina = inicio%256;

    }

    void cargarDatos(int numeroPagina);
    int invertirNumero(int numero);
    int getPosInicial();
    int getPosFinal();
    int getNumeroPagina();

    int pagina[256];

private:
    int posInicialEnBigArray, posFinalEnBigArray, numeroDePagina;


};


#endif //TAREACORTA_PAGINA_H
