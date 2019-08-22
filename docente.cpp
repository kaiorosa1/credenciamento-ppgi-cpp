#include <iostream>
#include <ctime>

class Docente {
    long codigo;
    std::string nome;
    time_t data_ingresso; // what is the best type to store date
    bool isCoordenador;
    
    public:
    // getters and setters
    long get_codigo(){
        return codigo;
    }

};