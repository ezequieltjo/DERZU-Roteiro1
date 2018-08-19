#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include <string>
#include "Despesa.h"

class ControleDeGastos
{
    private:
        Despesa despesas[10];
        int totais;

    public:
        ControleDeGastos();
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string tipoDeGasto);
        void addDespesa(Despesa despesa1);

};

#endif // CONTROLEDEGASTOS_H
