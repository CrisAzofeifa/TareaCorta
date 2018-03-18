#include <iostream>
#include <fstream>
#include <string>
#include "Pagina.h"
#include "BigArray.h"

using namespace std;

int main() {
    BigArray *big = new BigArray;
    big->Generar();

    Pagina *page = new Pagina;
    page->cargarDatos(0);


    return 0;
}