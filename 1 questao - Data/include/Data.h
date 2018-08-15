#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>


class Data
{
    public:
        Data(int dia,int mes,int ano);

        int dia, mes, ano;

        AvancarDia();
};

#endif // DATA_H
