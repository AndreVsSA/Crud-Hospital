#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
#include "Endereco.h"
#include "Pessoa.h"
#include <vector>


using std::string;
using std::vector;

class Paciente: public Pessoa {
    

    string nomeConvenio;
    int numConvenio;
    Endereco endereco;
    int codigo;
    

    public:
    static int indice;
    bool operator==(const Paciente& o) const;
    Paciente();
    Paciente(string ,string ,string , string ,string , string , string , string ,string ,int , int  ,string, int);
    string getNomeConvenio()const;
    void setNomeConvenio(const string);
    int getNumConvenio() const;
    void setNumConvenio(const int);
    Endereco getEndereco();
    void setEndereco();
    void toString();
    
    int getCodigo()const;
};
#endif