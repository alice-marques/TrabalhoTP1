//
// Created by andre on 11/6/17.
//
#include "entidades.h"
#ifndef TRABALHO3_INTERFACES_H
#define TRABALHO3_INTERFACES_H

class processaLogIn{
private:
    USUARIO *usuario;
    std::string entrada;
public:
    processaLogIn();
    bool checaApelido();
    bool checaSenha();
};

class processaCadastroUsuario{
private:
    std::string entrada;
    USUARIO *usuario;
public:
    bool cadastraNome();
    bool cadastraApelido();
    bool cadastraTelefone();
    bool cadastraSenha();
    processaCadastroUsuario();
};








#endif //TRABALHO3_INTERFACES_H
