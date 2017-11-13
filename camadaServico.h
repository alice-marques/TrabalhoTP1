//
// Created by andre on 11/6/17.
//
#include "armazenamento.h"
#ifndef TRABALHO3_INTERFACES_H
#define TRABALHO3_INTERFACES_H

class processaLogIn{
private:
    USUARIO *usuario;
    std::string entrada;
    bancoDeDados* bancoDeDados1;
public:
    processaLogIn();
    bool checaApelido();
    bool checaSenha();
    bool procuraUsuario(string entrada);
};

class processaCadastroUsuario{
private:
    std::string entrada;
    USUARIO *usuario;
    bancoDeDados* bancoDeDados1;
public:
    bool cadastraNome();
    bool cadastraApelido();
    bool cadastraTelefone();
    bool cadastraSenha();
    bool cadastraUsuario();
    processaCadastroUsuario();
};








#endif //TRABALHO3_INTERFACES_H
