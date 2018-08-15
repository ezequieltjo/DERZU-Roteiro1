#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
    int a;
    float b, c;
    string d;

    Invoice invoice1 = Invoice();

    cout << "Digite o numero: " << endl;
    cin >> a;
    invoice1.setNumero(a);

    cout << "Digite a quantidade: " << endl;
    cin >> b;
    invoice1.setQuantidade(b);

    cout << "Digite a descricao: " << endl;
    cin.ignore();
    getline(cin, d);
    invoice1.setDescricao(d);

    cout << "Digite o preco: " << endl;
    cin >> c;
    invoice1.setPreco(c);

    cout << "Fatura: "<< invoice1.getInvoiceAmount() << endl;


    return 0;
}
