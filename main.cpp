#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::find;
using std::cout;
using std::cin;
using std::endl;
#include "Paciente.h"
#include "FicharioPaciente.h"
#include "Medico.h"
#include "FicharioMedico.h"

#include "Consulta.h"
#include "FicharioConsulta.h"
#define TAM 100
int Paciente::indice=0;
int Medico::indice=0;
int Consulta::geracode=0;

int main(){
        vector<Paciente> pacientes; 
        vector<Medico> medicos;
        
        vector<Consulta>consultas;
        FicharioPaciente ficharioPaciente(pacientes);
        FicharioMedico ficharioMedico(medicos);
      
        FicharioConsulta ficharioConsulta(pacientes,medicos,consultas);
    
        int operacaoGeral, opCadastroPaciente, opCadastroMedico,  opCadastroConsulta;
        do {
            cout << " === Consultorio === " << endl;
            cout << "1 - Paciente " << endl;
            cout << "2 - Medico " << endl;
            
            cout << "3 - Consultas " << endl;
            cout << "0 - Sair " << endl;
            cin >> operacaoGeral;

            switch (operacaoGeral){
                case 1: // cadastro de aluno
                    do {
                        cout << " === PACIENTE === " << endl;
                        cout << "1 - Cadastrar Paciente " << endl;
                        cout << "2 - Alterar Paciente " << endl;
                        cout << "3 - Excluir Paciente " << endl;
                        cout << "4 - Consultar Paciente " << endl;
                        cout << "5 - Relatório do Paciente " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >> opCadastroPaciente;

                        switch (opCadastroPaciente) {
                            case 1:
                                ficharioPaciente.cadastrar();
                                break;
                                
                            case 2:
                                ficharioPaciente.alterar();
                                break;
                            case 3:
                                ficharioPaciente.excluir();
                                break;
                                
                            case 4:
                                ficharioPaciente.consultar();
                                break;
                                
                            case 5:
                                ficharioPaciente.relatorio();
                                break;
                            default:
                                if (opCadastroPaciente != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }

                    } while (opCadastroPaciente != 0);

                    break; // fim do case aluno
                    
                case 2: // cadastro de professor
                    do {
                        cout << " === MEDICO === " << endl;
                        cout << "1 - Cadastrar Medico " << endl;
                        cout << "2 - Alterar Medico " << endl;
                        cout << "3 - Excluir Medico " << endl;
                        cout << "4 - Consultar Medico " << endl;
                        cout << "5 - Relatório do Medico " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >>  opCadastroMedico;
                        switch (opCadastroMedico) {
                            case 1:
                                ficharioMedico.cadastrar();
                                break;
                            case 2:
                                ficharioMedico.alterar();
                                break;
                            case 3:
                                ficharioMedico.excluir();
                                break;
                            case 4:
                                ficharioMedico.consultar();
                                break;
                            case 5:
                                ficharioMedico.relatorio();
                                break;
                            default:
                                if (opCadastroMedico != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }
                    } while (opCadastroMedico != 0);
                    break; // fim do case professor
                
                case 3: // 
                    do {
                        cout << " === Consulta === " << endl;
                        cout << "1 - Cadastrar Consulta " << endl;
                        cout << "2 - Excluir Consulta " << endl;
                        cout << "3 - Consultar Consulta " << endl;
                        cout << "4 - Relatório do Consulta " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >> opCadastroConsulta;

                        switch (opCadastroConsulta) {
                            case 1:
                                ficharioConsulta.cadastrar();
                                break;
                            case 2:
                                ficharioConsulta.excluir();
                                break;
                            case 3:
                                ficharioConsulta.consultar();
                                break;
                            case 4:
                                ficharioConsulta.relatorio();
                                break;
                            default:
                                if (opCadastroConsulta != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }
                    } while (opCadastroConsulta != 0);
                    break; // 
                    
                default:
                    if (operacaoGeral != 0) {
                        cout << "Opção inválida." << endl;
                    }
            }
        } while ( operacaoGeral != 0);


    return 0; // 
}