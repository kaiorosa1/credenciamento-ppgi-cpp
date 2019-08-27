#ifndef DOCENTE_H
#define DOCENTE_H

#include <iostream>
#include <ctime>
class Docente {
    long codigo;
    std::string nome;
    tm data_nascimento;
    tm data_ingresso; // what is the best type to store date
    bool is_coordenador;
    
    public:
    // getters and setters
    long get_codigo(){ return codigo;}
    std::string get_nome(){ return nome;}
    tm get_data_nascimento(){return data_nascimento;}
    tm get_data_ingresso(){return data_ingresso;}
    bool get_is_coodernador(){return is_coordenador;}

    void set_codigo(long cod){ codigo = cod;}
    void set_nome(std::string name){nome = name;}
    void set_data_nascimento(tm dt_nasc){data_ingresso = dt_nasc;}
    void set_data_ingresso(tm dt_ingresso){data_ingresso = dt_ingresso;}
    void set_is_coordenador(bool is_coord){is_coordenador = is_coord;}

};

#endif