#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main()
{
    Empregado empregado1("jose", "rico", 12000);
    Empregado empregado2("milio", "nario", 10000);

    cout << empregado1.getSalario() * 12 << endl;
    cout << empregado2.getSalario() * 12 << endl;

    cout <<  "e com o aumento, respectivamente: " << endl;

    cout << (empregado1.getSalario() * 12) * 1.1 << endl;
    cout << (empregado2.getSalario() * 12) * 1.1 << endl;

    return 0;
}
