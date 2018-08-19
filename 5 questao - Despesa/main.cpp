#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    double a, b;
    string c, d;

    ControleDeGastos gastos1 = ControleDeGastos();

    cout << "Digite o tipo do gasto 1: " << endl;
    cin >> c;

    cout << "Digite o valor do gasto 1: " << endl;
    cin >> a;

    cout << "Digite o tipo do gasto 2: " << endl;
    cin >> d;

    cout << "Digite o valor do gasto 2: " << endl;
    cin >> b;

    Despesa despesa1 = Despesa(c, a);
    Despesa despesa2 = Despesa(d, b);

    gastos1.addDespesa(despesa1);
    gastos1.addDespesa(despesa2);

     cout << "Total: " << gastos1.calculaTotalDeDespesas() << endl;

    return 0;
}
