#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

class Veiculos{
    std::string sigla;
    std::string nome;
    char tipo;
    double fator_de_impacto;
    std::string issn;

    public:
    //getters and setters
    std::string get_sigla(){return sigla;}
    std::string get_nome(){return nome;}
    char get_tipo(){return tipo;}
    double get_fator_de_impacto(){return fator_de_impacto;}
    std::string get_issn(){return issn;}

    void set_sigla(std::string sig){ sigla=sig;}
    void set_nome(std::string name){nome=name;}
    void set_tipo(char type){tipo=type;}
    void set_fator_de_impacto(double fator){fator_de_impacto=fator;}
    void set_issn(std::string v_issn){issn=v_issn;}


};

#endif