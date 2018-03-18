//
// Created by kimberlyc on 18/03/18.
//

#include "Controlador.h"
#include <iostream>

using namespace std;
int Controlador::  buscarPos(int num){

    cout << "la pagina es "<< num/256 << "La posicion es: " << num % 256;
    int pagina =num/256;
    int posicion = num % 256;
    if (comprobarPag(pagina)){
        sacarElemento(posicion, pagina);
    }
}

bool Controlador::  comprobarPag(int pagina){

}

int Controlador:: sacarElemento(int posicion, int pagina){

}