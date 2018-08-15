#include "Data.h"
#include <string.h>
#include <iostream>

Data::Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}

Data::AvancarDia(){

    if (dia>31){
        dia = 0;
        mes++;
    }

    if (mes>12){
        dia=0;
        mes = 1;
        ano++;
    }

    dia++;

    if (dia>31){
        dia = 1;
        mes++;
    }

    if (mes>12){
        dia = 1;
        mes = 1;
        ano++;
    }
}


