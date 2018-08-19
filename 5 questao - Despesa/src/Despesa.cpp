#include "Despesa.h"

Despesa::Despesa()
{

}

Despesa::Despesa(std::string tipoDeGasto, double valor)
{
    this->tipoDeGasto = tipoDeGasto;
    this->valor = valor;
}

double Despesa::getValor(){
    return valor;
}

void Despesa::setValor(double valor){
    this->valor = valor;
}

std::string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}
