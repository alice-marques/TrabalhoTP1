//
// Created by andre on 11/6/17.
//
#include "entidades.h"
#ifndef TRABALHO3_INTERFACES_H
#define TRABALHO3_INTERFACES_H

class processaOpcaoMenu1{
private:
    USUARIO *usuario;

public:
    int processaMenu1(int opcao);
    void processaCriacaoUsuario();
};

class processaCadastroUsuario{
private:
    std::string nome;
    std::string apelido;
    std::string telefone;
    std::string senha;
    USUARIO *usuario;
public:
    bool cadastraNome();
    bool cadastraApelido();
    bool cadastraTelefone();
    bool cadastraSenha();
    processaCadastroUsuario();
};








#endif //TRABALHO3_INTERFACES_H
