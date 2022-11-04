#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Paciente.h"
#include "Endereco.h"
#include <vector>


   
    Paciente::Paciente(string nome,string cpf,string telefone, string rg,string logradouro, string complemento, string bairro, string municipio,string cep,int numero, int tipo, string nomeConvenio, int numConvenio){
      
       ++indice;
      Endereco endereco(logradouro, complemento, bairro, municipio, cep, numero, tipo);
      this->nomeConvenio = nomeConvenio;
      this->numConvenio = numConvenio;
      
    }
    



    string Paciente::getNomeConvenio()const {

        return nomeConvenio;
    }

    void Paciente::setNomeConvenio(string nomeConvenio) {

        this->nomeConvenio = nomeConvenio;
    }

    int Paciente::getNumConvenio()const {
        return numConvenio;
    }

    void Paciente::setNumConvenio(int numConvenio) {
        this->numConvenio = numConvenio;
    }

   Endereco Paciente::getEndereco()
    {
        return endereco;
    }
    void Paciente::toString()
    {
        cout<<"Nome:"<<nome<<endl;
        cout<<"CPF:"<<cpf<<endl;
        cout<<"Telefone:"<<telefone<<endl;
        cout<<"RG:"<<rg<<endl;
        cout<<"Nome do Convenio:"<<numConvenio<<endl;
        cout<<"Numero do Convenio:"<<numConvenio<<endl;
        endereco.toString();
    }
 int Paciente::getCodigo()const
    {
      return codigo;
    }
    bool Paciente::operator==(const Paciente& o) const {
      return cpf == o.cpf;}