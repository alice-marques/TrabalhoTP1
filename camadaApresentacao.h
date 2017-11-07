//
// Created by andre on 11/1/17.
//
#include "camadaServico.h"
#ifndef TRABALHO3_CAMADAAPRESENTACAO_H
#define TRABALHO3_CAMADAAPRESENTACAO_H

class menuUsuario{
public:
    menuUsuario();
    void menuCadastro();
};


class menu1{
private:
    processaOpcaoMenu1 *processa1;
    menuUsuario *menuUsuario1;
public:
    menu1();
    void primeiroMenu();
};






#endif //TRABALHO3_CAMADAAPRESENTACAO_H
