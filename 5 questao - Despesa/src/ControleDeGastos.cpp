#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos()
{
    totais = 0;
}

double ControleDeGastos::calculaTotalDeDespesas()
{
    double aux=0;
    for(int i=0; i<totais; i++)
    {
        aux += despesas[i].getValor();
    }
    return aux;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipoDeGasto)
{
    for(int i=0; i<totais; i++)
    {
        if (despesas[i].getTipoDeGasto() == tipoDeGasto)
        {
            return true;
        }
    }
    return false;
}

void ControleDeGastos::addDespesa(Despesa despesa1){
    despesas[totais]=despesa1;
    totais++;
}

