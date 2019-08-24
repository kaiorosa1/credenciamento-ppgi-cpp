#ifndef PUBLICACAO_H
#define PUBLICACAO_H

#include <iostream>
#include "docente.h"

class Publicacao{
    int ano;
    std::string sigla_veiculo;
    std::string titulo;
    //lista de docentes
    //List<Docente> listaDocentes;
    int numero;
    int volume_periodico;
    std::string local_conferencia;
    int pagina_inicial;
    int pagina_final;
    
    public:
    // getters and setters
    int get_ano(){return ano;}
    std::string get_sigla_veiculo(){return sigla_veiculo;}
    std::string get_titulo(){return titulo;}
    // get lista docentes
    int get_numero(){return numero;}
    int get_volume_periodico(){return volume_periodico;}
    std::string get_local_conferencia(){return local_conferencia;}
    int get_pagina_inicial(){return pagina_inicial;}
    int get_pagina_final(){return pagina_final;}

    void set_ano(int year){ano = year;}
    void set_sigla_veiculo(std::string sigla){sigla_veiculo=sigla;}
    void set_titulo(std::string title){titulo=title;}
    // get lista docentes
    void set_numero(int num){numero=num;}
    void set_volume_periodico(int volume){volume_periodico=volume;}
    void set_local_conferencia(std::string local){local_conferencia=local;}
    void set_pagina_inicial(int p_inicial){pagina_inicial=p_inicial;}
    void set_pagina_final(int p_final){pagina_final=p_final;}
};


#endif