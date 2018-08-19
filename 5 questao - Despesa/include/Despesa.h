#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    private:
        double valor;
        std::string tipoDeGasto;

    public:
        Despesa();
        Despesa(std::string tipoDeGasto, double valor);
        double getValor();
        void setValor(double valor);
        std::string getTipoDeGasto();
        void setTipoDeGasto(std::string tipoDeGasto);
};

#endif // DESPESA_H
