#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
#include "FicharioMedico.h"
#include "Medico.h"

FicharioMedico::FicharioMedico(vector <Medico> medicos){
        this->medicos = medicos;
}

void FicharioMedico::cadastrar(){
        
    string nome, cpf, telefone,  rg, crm, especialidade;
    int ctps;

        
                cout << " === Cadastrar Medico ==== " << endl;
                cout << "\nCRM: ";
                cin >> crm;
                cout << "\nCPF: ";
                cin >> cpf;
                cout << "\nNome: ";
                cin >> nome;
                cout << "\nTelefone: ";
                cin >> telefone;
                cout << "\nRG: ";
                cin >> rg;
                cout<<"\nEspecialidade: ";
                cin>>especialidade;
                cout<<"\nCTPS: ";
                cin>>ctps;

                Medico medico( nome, cpf, telefone,  rg, crm,  especialidade, ctps);
                auto it = find(medicos.begin(), medicos.end(), medico);
                  if(it != medicos.end())
                  {
                      cout << "Aluno já cadastrado!"<< endl;
                  }else
                  {
                      medicos.push_back(medico);
                  }
                
        

}
    void FicharioMedico::alterar()
    {
        string nome, cpf, telefone,  rg, crm, especialidade;
        
        int pos,ctps;

        cout<<"--==ALTERAR Medico==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(medicos[pos].getCodigo()!=0)
        {
            cout<<"Cpf atual: "<<medicos[pos].getCpf()<<endl;
            cout<<"Digite o novo cpf: ";
            cin>>cpf;
            medicos[pos].setCpf(cpf);
          
            cout<<"\n\nNome atual: "<<medicos[pos].getNome()<<endl;
            cout<<"Digite o novo nome: ";
            cin>>nome;
            medicos[pos].setNome(nome);
          
            cout<<"\n\nTelefone atual: "<<medicos[pos].getTelefone()<<endl;
            cout<<"Digite o novo telefone: ";
            cin>>telefone;
            medicos[pos].setTelefone(telefone);
          
            cout<<"\n\nRG atual: "<<medicos[pos].getRg()<<endl;
            cout<<"Digite o novo RG: ";
            cin>>rg;
            medicos[pos].setRg(rg);

            cout<<"\n\nEspecialidade atual: "<<medicos[pos].getEspecialidade()<<endl;
            cout<<"Digite a nova Especialidade: ";
            cin>>especialidade;
            medicos[pos].setEspecialidade(especialidade);
          
            cout<<"CRM atual: "<<medicos[pos].getCrm()<<endl;
            cout<<"Digite o novo CRM: ";
            cin>>crm;
            medicos[pos].setCrm(crm);
          
            cout<<"CTPS atual: "<<medicos[pos].getCtps()<<endl;
            cout<<"Digite o novo CTPS: ";
            cin>>ctps;
            medicos[pos].setCtps(ctps);


        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    }
    void FicharioMedico::excluir()
    {
        int pos, res;
        
        
        cout<<"--==EXCLUIR Medico==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        
        if(pos>medicos.size())
        {
            cout<<"Posicao invalida"<<endl;
        }else
        {
            medicos[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                medicos.erase(medicos.begin()+pos);
            }else
            {
                cout<<"Eclusao nao efetuada"<<endl;
            }

        }
    };
    void FicharioMedico::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>medicos.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                medicos[pos].toString();
            }
    };
    void FicharioMedico::relatorio()
    {
        cout<<"-==RELATORO DE MEDICOS==--"<<endl;
        
        
        
        for(int pos=0;pos<medicos.size();pos++)
        {
            
                medicos[pos].toString();
            
                
        }
        
        
    };