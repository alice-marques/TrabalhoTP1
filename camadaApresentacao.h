//
// Created by andre on 11/1/17.
//
#include "interfaces.h"
#ifndef TRABALHO3_CAMADAAPRESENTACAO_H
#define TRABALHO3_CAMADAAPRESENTACAO_H



class menu1{
private:
    processaOpcaoMenu1 *processa1;
public:
    menu1();
    void primeiroMenu();
};

class menuUsuario{
private:
    USUARIO *usuario;
public:
    menuUsuario();
    void imprimeMenuCadastro();
};





#endif //TRABALHO3_CAMADAAPRESENTACAO_H
