#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>    
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
        tm date_birth,date_ing;
        getline(file, cod,';');
        getline(file,name,';');
        getline(file,dt_nasc,';');
        std::stringstream ss(dt_nasc);
        std::string day,month,year;
        getline(ss,day,'/');
        getline(ss,month,'/');
        getline(ss,year,'/');
        date_birth.tm_mday = stoi(day);
        date_birth.tm_mon = stoi(month)-1;
        date_birth.tm_year = stoi(year)-1900;
        getline(file,dt_ing,';');
        std::stringstream ss2(dt_ing);
        getline(ss2,day,'/');
        getline(ss2,month,'/');
        getline(ss2,year,'/');
        date_ing.tm_mday = stoi(day);
        date_ing.tm_mon = stoi(month)-1;
        date_ing.tm_year = stoi(year)-1900;
        getline(file,is_coord,'\n');
        docente.set_codigo(std::stol(cod));
        docente.set_nome(name);
        docente.set_data_nascimento(date_birth);
        docente.set_data_ingresso(date_ing);
        if(is_coord.compare("X") == 0){
            docente.set_is_coordenador(true);
        }else{
            docente.set_is_coordenador(false);
        }
       
        listaDocentes.push_back(docente);
        
        std::cout << docente.get_nome() << " " << docente.get_is_coodernador() << std::endl;
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