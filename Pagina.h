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

    int pagina[256];

private:
    int posInicialEnBigArray, posFinalEnBigArray;


};


#endif //TAREACORTA_PAGINA_H
