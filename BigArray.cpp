#include "BigArray.h"
#include <iostream>

using namespace std;
void BigArray:: Generar() {
    remove("BigArray.txt");
    fichero.open("BigArray.txt", ios::app);

    srand(time(0));
    int Seed = rand();
    srand(Seed);
    int num, c;

    for (c = 1; c <= 10240; c++) { //Ampliar cantidad de numeros

        num = 1 + rand() % (5 - 2000);    // Cambiar a numeros mas grandes XD
        cout << num << endl;
        if (fichero.is_open()){
            if (c <10240){
                fichero << num << ",";

            }


        else{
                fichero << num ;

        }
     }

    }



    fichero.close();

}


