#include <iostream>
#include "Data.h"
#include <string>


using namespace std;

int main()
{
    int dia, mes, ano;
    char str;

    cout << "Digite o dia: " << endl;
    cin >> dia;


    cout << "Digite o mes: " << endl;
    cin >> mes;


    cout << "Digite o ano: " << endl;
    cin >> ano;

    Data data1 = Data(dia, mes, ano);

    cout << "AVANCAR DIA?" << endl;
    cin >> str;

    if (str== 'S' || str== 's'){

    data1.AvancarDia();

    cout << "Data avancada: " << data1.dia << "-" << data1.mes << "-" << data1.ano << endl;

    }

    return 0;
}
