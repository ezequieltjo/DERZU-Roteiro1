#include "Empregado.h"
#include <iostream>
#include <string>

Empregado::Empregado(std::string nome, std::string sobrenome, double salario)
{
    this->nome = nome;
    this->sobrenome = sobrenome;
    this->salario = salario;
}

std::string Empregado::getNome(){

    return nome;
}

void Empregado::setNome(std::string n){

    nome = n;
}

std::string Empregado::getSobrenome(){

    return sobrenome;
}

void Empregado::setSobrenome(std::string s){

    sobrenome = s;
}

double Empregado::getSalario(){

    return salario;
}

void Empregado::setSalario(double sa){

    salario = sa;
}


