#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>

class Invoice
{
    private:


        int numero;
        float quantidade;
        float preco;
        std::string descricao;

    public:

        Invoice();

        int getNumero();

        void setNumero(int n);

        float getQuantidade();

        void setQuantidade(float q);

        std::string getDescricao();

        void setDescricao(std::string d);

        float getPreco();

        void setPreco(float p);

        float getInvoiceAmount();

};

#endif // INVOICE_H
