#ifndef QUALIS_H
#define QUALIS_H

#include<iostream>
class Qualis {
    std::string nome;
    int valor;
    public:
    // getters and setters
    std::string get_nome(){return nome;}
    int get_valor(){return valor;}
    
    void set_nome(std::string name){ nome=name;}
    void set_valor(int value){valor=value;}
};

#endif