#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>


class Empregado
{
    private:
        std::string nome;
        std::string sobrenome;
        double salario;

    public:
        Empregado(std::string nome, std::string sobrenome, double salario);

        std::string getNome();
        void setNome(std::string nome);

        std::string getSobrenome();
        void setSobrenome(std::string sobrenome);

        double getSalario();
        void setSalario(double salario);
};


#endif // EMPREGADO_H
