#include <iostream>
#include <vector>
#include "docente.h"

void readDocentesFile();
void readVeiculosFile();
void readPublicacoesFile();
void readQualificacoesFile();
void readRegrasPontuacaoFile();

int main(){
    Docente docente;
    // read files
    readDocentesFile();
    readVeiculosFile();
    readPublicacoesFile();
    readQualificacoesFile();
    readRegrasPontuacaoFile();

    return 0;
}

void readDocentesFile(){
    std::cout<< "Read Docente.csv file!"<< std::endl;
}

void readVeiculosFile(){
    std::cout<< "Read Veiculos.csv file!"<< std::endl;
}
void readPublicacoesFile(){
    std::cout<< "Read Publicacoes.csv file!"<< std::endl;
}
void readQualificacoesFile(){
    std::cout<< "Read Qualificacoes.csv file!"<< std::endl;
}
void readRegrasPontuacaoFile(){
    std::cout<< "Read Regras.csv file!"<< std::endl;
}