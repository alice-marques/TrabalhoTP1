//
// Created by andre on 11/6/17.
//
#include "entidades.h"
#ifndef TRABALHO3_INTERFACES_H
#define TRABALHO3_INTERFACES_H

class processaOpcaoMenu{
public:
    void processaMenu1(int opcao);
};

class criaUsuario{
private:
    USUARIO *usuario;
public:
    criaUsuario();
    void criaNovo();
};









#endif //TRABALHO3_INTERFACES_H
