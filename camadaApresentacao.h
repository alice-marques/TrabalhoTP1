//
// Created by andre on 11/1/17.
//
#include "camadaServico.h"
#ifndef TRABALHO3_CAMADAAPRESENTACAO_H
#define TRABALHO3_CAMADAAPRESENTACAO_H

class menuUsuario{
private:
    processaCadastroUsuario *processaCadastroUsuario1;
public:
    menuUsuario();
    void menuCadastro();
};

class menuLogin{

};

class menu1{
private:
    menuUsuario *menuUsuario1;
public:
    menu1();
    void primeiroMenu();
};






#endif //TRABALHO3_CAMADAAPRESENTACAO_H
