//
// Created by cris on 17/03/18.
//

#include "Pagina.h"
#include <iostream>

using namespace std;

void Pagina::cargarDatos(int numeroPagina) {
    const string nFichero = "BigArray.txt";
    char letra;
    ifstream fichero;
    fichero.open(nFichero.c_str());


    if(!fichero.fail()) {
        int cont = 0;
        int x = 0;

        if(numeroPagina == 0) {
            fichero.get(letra);

        }else{
            while(x<(256*numeroPagina)-1) {
                fichero.get(letra);
                if (letra == ',') {
                   x++;
            }
                fichero.get(letra);
            }
        }

        int i = 0, cantidadNumeros = 0, numero = 0;
        bool nostop = true;

        while (!fichero.eof() && nostop && cantidadNumeros<256) {
                switch(letra)
                {
                    case '0':
                        numero += 0;i++;fichero.get(letra);
                        break;
                    case '1': numero += 1*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '2': numero += 2*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '3': numero += 3*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '4': numero += 4*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '5': numero += 5*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '6': numero += 6*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '7': numero += 7*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '8': numero += 8*pow(10,i); i++;fichero.get(letra);
                        break;
                    case '9': numero += 9*pow(10,i); i++;fichero.get(letra);
                        break;
                    case ',':
                        numero = invertirNumero(numero);


                        pagina[cantidadNumeros] = numero;
                        cantidadNumeros++;
                        cout<<"Soy este número: "<<numero<<endl;
                        i = 0;
                        numero = 0;
                        fichero.get(letra);
                        break;
                    default:
                        nostop = false;
                        fichero.close();
                        break;
                }
        }


        for(int x = 0; x<256; x++){

            cout<<pagina[x]<<" , ";

        }
        cout<<"Tamaño: "<< sizeof(pagina)/ sizeof(*pagina);




    }




}

int Pagina::invertirNumero(int numero) {
    int valor =numero;


    int nuevo =0;
    int cont =-1;
    while (valor >1 ){
        valor=valor/10;
        cont++;
    }
    while (numero >0){
        nuevo += (numero%10) * pow(10, cont);
        numero = numero /10;
        cont --;
    }

    return nuevo;
}

int Pagina::getPosInicial() {
    return posInicialEnBigArray;
}

int Pagina::getPosFinal() {
    return posFinalEnBigArray;
}

int Pagina::getNumeroPagina() {
    return numeroDePagina;
}


