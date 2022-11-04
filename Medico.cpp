#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Medico.h"


   
    Medico::Medico(){

    }
    Medico::Medico(string nome,string cpf,string telefone, string rg,string crm, string especialidade, int ctps) {
        ++indice;
        this->nome = nome;
        this->cpf = cpf;
        this->telefone = telefone;
        this->rg=rg;
        this->crm=crm;
        this->especialidade=especialidade;
        this->ctps=ctps;
    }

    string Medico::getEspecialidade()const {
        return especialidade;
    }

    void Medico::setEspecialidade(const string especialidade){
      this->especialidade = especialidade;
    }

    string Medico::getCrm()const {
      return crm;
    }

    void Medico::setCrm(const string crm) {
        this->crm = crm;
    }

    int Medico::getCtps()const {
        return ctps;
    }

    void Medico::setCtps(int ctps) {
        this->ctps = ctps;
    }
    void Medico::toString(){
            cout << " === MEDICO ==== " << endl;
            cout << "CRM: "<<crm<<endl;
            cout << "CPF: "<<cpf<<endl;
            cout << "Nome: "<<nome<<endl;
            cout << "Telefone: "<<telefone<<endl;
            cout << "RG: "<<rg<<endl;
            cout << "Especialidade: "<<especialidade<<endl;
            cout << "CTPS: "<<ctps<<endl;
    }
      bool Medico::operator==(const Medico& o) const {
      return cpf == o.cpf;
    }
      int Medico::getCodigo()const
    {
      return codigo;
    }



    