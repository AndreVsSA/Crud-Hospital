#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::find;
using std::cout;
using std::cin;
using std::endl;
#include "FicharioPaciente.h"
#include "Paciente.h"
#include "Endereco.h"

FicharioPaciente::FicharioPaciente(vector <Paciente> pacientes){
        this->pacientes = pacientes;
        
}

void FicharioPaciente::cadastrar()
{
        
    string nome, cpf, telefone,  rg, logradouro,  complemento,  bairro,  municipio, cep, nomeConvenio;
  int numero, tipo, numConvenio;
    

        

                cout << " === Cadastrar Paciente ==== " << endl;
                cout<<"--Dados Pessoais--"<<endl;
                cout << "\nRG: ";
                cin >> rg;
                cout << "\nCPF: ";
                cin >> cpf;
                cout << "\nNome: ";
                cin >> nome;
                cout << "\nTelefone: ";
                cin >> telefone;
                cout << "\nNome do Convenio: ";
                cin >> nomeConvenio;
                cout << "\nNumero do Convenio: ";
                cin >> numConvenio;
                
  
                cout << "\n--Endereco--"<<endl;
                cout << "\nLogradouro: ";
                cin >> logradouro;
                cout << "\nComplemento: ";
                cin >> complemento;
                cout << "\nBairro: ";
                cin >> bairro;
                cout << "\nMunicipio: ";
                cin >> municipio;
                cout << "\nCEP: ";
                cin >> cep;
                cout << "\nNumero: ";
                cin >> numero;
                cout << "\nTipo: ";
                cin >> tipo;
                
              

                Paciente paciente( nome, cpf, telefone,  rg, logradouro,  complemento,  bairro, municipio, cep, numero,  tipo,  nomeConvenio,  numConvenio);
  
                auto it = find(pacientes.begin(), pacientes.end(), paciente);
                  if(it != pacientes.end())
                  {
                      cout << "Paciente já cadastrado!"<< endl;
                  }else
                  {
                      pacientes.push_back(paciente);
                  }
                
                

          

}
    void FicharioPaciente::alterar()
    {
        string nome, cpf, telefone,  rg, logradouro,  complemento,  bairro,  municipio, cep, nomeConvenio;
  int numero, tipo, numConvenio,pos;

        cout<<"--==ALTERAR Paciente==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(pacientes[pos].getCodigo()!=0)
        {
            cout<<"Cpf atual: "<<pacientes[pos].getCpf()<<endl;
            cout<<"Digite o novo cpf: ";
            cin>>cpf;
            pacientes[pos].setCpf(cpf);
          
            cout<<"\n\nNome atual: "<<pacientes[pos].getNome()<<endl;
            cout<<"Digite o novo nome: ";
            cin>>nome;
            pacientes[pos].setNome(nome);
          
            cout<<"\n\nTelefone atual: "<<pacientes[pos].getTelefone()<<endl;
            cout<<"Digite o novo telefone: ";
            cin>>telefone;
            pacientes[pos].setTelefone(telefone);
          
            cout<<"\n\nRG atual: "<<pacientes[pos].getRg()<<endl;
            cout<<"Digite o novo RG: ";
            cin>>rg;
            pacientes[pos].setRg(rg);

            cout<<"\n\nConvenio atual: "<<pacientes[pos].getNomeConvenio()<<endl;
            cout<<"Digite o novo Convenio: ";
            cin>>nomeConvenio;
            pacientes[pos].setNomeConvenio(nomeConvenio);
        
            cout<<"\n\nNumero do Convenio atual: "<<pacientes[pos].getNumConvenio()<<endl;
            cout<<"Digite o novo Numero do Convenio: ";
            cin>>numConvenio;
            pacientes[pos].setNumConvenio(numConvenio);
          
            cout<<"\n\nLogradouro atual: "<<enderecos[pos].getLogradouro()<<endl;
            cout<<"Digite o novo Logradouro: ";
            cin>>logradouro;
            enderecos[pos].setLogradouro(logradouro);
          
            cout<<"\n\nComplemento atual: "<<enderecos[pos].getComplemento()<<endl;
            cout<<"Digite o novo Complemento: ";
            cin>>complemento;
            enderecos[pos].setComplemento(complemento);
          
            cout<<"\n\nBairro atual: "<<enderecos[pos].getBairro()<<endl;
            cout<<"Digite o novo bairro: ";
            cin>>bairro;
            enderecos[pos].setBairro(bairro);
          
            cout<<"\n\nMunicipio atual: "<<enderecos[pos].getMunicipio()<<endl;
            cout<<"Digite o novo Municipio: ";
            cin>>municipio;
            enderecos[pos].setMunicipio(municipio);
          
            cout<<"\n\nCEP atual: "<<enderecos[pos].getCep()<<endl;
            cout<<"Digite o novo CEP: ";
            cin>>cep;
            enderecos[pos].setCep(cep);
          
            cout<<"\n\nNumero atual: "<<enderecos[pos].getNumero()<<endl;
            cout<<"Digite o novo numero: ";
            cin>>numero;
            enderecos[pos].setNumero(numero);
          
            cout<<"\n\nTipo atual: "<<enderecos[pos].getTipo()<<endl;
            cout<<"Digite o novo tipo: ";
            cin>>tipo;
            enderecos[pos].setTipo(tipo);
        

        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    };
    void FicharioPaciente::excluir()
    {
        int pos, res;
        
        
        cout<<"--==EXCLUIR Paciente==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        
        if(pos>pacientes.size())
        {
           cout<<"Posicao invalida"<<endl;

        }else
        {
             pacientes[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                 pacientes.erase(pacientes.begin()+pos);
            }else
            {
                cout<<"Exclusao nao efetuada"<<endl;
            }
        }
    };
    void FicharioPaciente::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>pacientes.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                pacientes[pos].toString();
            }
    };
    void FicharioPaciente::relatorio()
    {
        cout<<"-==RELATORO DE PacienteS==--"<<endl;
        
        
        
        for(int pos=0;pos<pacientes.size();pos++)
        {
            
            
                pacientes[pos].toString();
            
                
        }
        
        
    };