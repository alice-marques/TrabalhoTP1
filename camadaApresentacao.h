//
// Created by andre on 11/1/17.
//
#include "camadaServico.h"
#ifndef TRABALHO3_CAMADAAPRESENTACAO_H
#define TRABALHO3_CAMADAAPRESENTACAO_H

class menuCadastro{
private:
    processaCadastroUsuario *processaCadastroUsuario1;
public:
    menuCadastro();
    void menuCadastra();
};

class menuLogin{
private:
    processaLogIn *processaLogIn1;
public:
    std::string entrada;
    menuLogin();
    void validaUsuario();

};

class menu1{
private:
    menuCadastro *menuUsuario1;
    menuLogin *menuLogin1;
public:
    menu1();
    void primeiroMenu();
};






#endif //TRABALHO3_CAMADAAPRESENTACAO_H
