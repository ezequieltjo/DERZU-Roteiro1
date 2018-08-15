#include "Invoice.h"
#include <string.h>
#include <iostream>

Invoice::Invoice()
{
    numero = 0;
    preco = quantidade = 0.0;
    descricao = "";

}

int Invoice::getNumero(){

    return numero;
}

void Invoice::setNumero(int n){

    numero = n;
}

float Invoice::getQuantidade(){

    return quantidade;
}

void Invoice::setQuantidade(float q){

    quantidade = q;
}

std::string Invoice::getDescricao(){

    return descricao;
}

void Invoice::setDescricao(std::string d){

    descricao = d;
}

float Invoice::getPreco(){

    return preco;
}

void Invoice::setPreco(float p){

    preco = p;
}

float Invoice::getInvoiceAmount(){

    if (quantidade<0){
        quantidade=0;
    }

    if (preco<0){
        preco=0;
    }

    return quantidade*preco;
}
