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
    std::vector<Docente> listaDocentes;
    // remove header from file
    getline(file, input,';');
    getline(file, input,';');
    getline(file, input,';');
    getline(file, input,';');
    getline(file, input,'\n');
    while(file.good()){
        Docente docente;
        std::string cod,name,dt_nasc,dt_ing,is_coord;
        getline(file, cod,';');
        getline(file,name,';');
        getline(file,dt_nasc,';');
        getline(file,dt_ing,';');
        getline(file,is_coord,'\n');
        // docente.set_codigo(std::stol(cod,nullptr, 10));
        // docente.set_nome(name);
        // docente.set_data_nascimento();
        // docente.set_data_ingresso();
        // docente.set_is_coordenador();
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