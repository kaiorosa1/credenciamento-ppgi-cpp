#include <iostream>
#include <fstream>
#include <vector>
#include "docente.h"

void readDocentesFile();
void readVeiculosFile();
void readPublicacoesFile();
void readQualificacoesFile();
void readRegrasPontuacaoFile();

int main(){
    // open docentes file
    std::fstream file ("docentes.csv");
    std::string input;
    if(!file.is_open()){
        std::cout << "Could not open the file!" << std::endl;
        return 1;
    }

    while(file.good()){
        getline(file, input,';');
        std::cout << input << std::endl;
    }
    // read files
    // readDocentesFile();
    // readVeiculosFile();
    // readPublicacoesFile();
    // readQualificacoesFile();
    // readRegrasPontuacaoFile();

    // close files
    file.close();

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