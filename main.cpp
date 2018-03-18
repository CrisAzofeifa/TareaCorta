#include <iostream>
#include <fstream>
#include <string>
#include "Pagina.h"
#include "BigArray.h"

using namespace std;

int main() {
    BigArray *noe  = new BigArray;
    noe->Generar();
    Pagina *page = new Pagina;
    page->cargarDatos(0);




    return 0;
}