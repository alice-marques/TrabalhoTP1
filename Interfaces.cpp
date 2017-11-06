//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "Interfaces.h"


criaUsuario::criaUsuario() {
    usuario = new USUARIO();
}

void processaOpcaoMenu::processaMenu1(int opcao) {
    if(opcao == 1) std::cout << "entrou1";
    else if(opcao == 2) std::cout << "entrou2";
    else if(opcao == 3){
        std::cout << "Ate logo!";
        return;
    }
}
