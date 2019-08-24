#ifndef REGRAS_H
#define REGRAS_H

#include <iostream>
#include <vector>
#include <ctime>
#include "qualis.h"

class Regras {
    time_t data_inicio;
    time_t data_fim;
    std::vector<Qualis> lista_qualis;
    //lista de pontos
    double multiplicador_periodicos;
    int qtd_anos_considerar;
    int pontuacao_minima;

    public:
    //getters and setters
    time_t get_data_inicio(){return data_inicio;}
    time_t get_data_fim(){return data_fim;}
    std::vector<Qualis> get_lista_qualis(){return lista_qualis;}
    //get lista pontos
    double get_multiplicador_periodicos(){return multiplicador_periodicos;}
    int get_qtd_anos_considerar(){return qtd_anos_considerar;}
    int get_pontuacao_minima(){return pontuacao_minima;}

    void set_data_inicio(time_t dt_inicio){data_inicio=dt_inicio;}
    void set_data_fim(time_t dt_fim){data_fim=dt_fim;}
    void set_lista_qualis(std::vector<Qualis> lq){lista_qualis=lq;}
    //set lista pontos
    void set_multiplicador_periodicos(double mult){multiplicador_periodicos=mult;}
    void set_qtd_anos_considerar(int anos){qtd_anos_considerar=anos;}
    void set_pontuacao_minima(int pontuacao){pontuacao_minima=pontuacao;}
};

#endif