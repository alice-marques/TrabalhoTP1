//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "interfaces.h"


void processaOpcaoMenu1::processaCriacaoUsuario() {
    USUARIO *usuario1 = new USUARIO();
    usuario1->cria_USUARIO();

}

int processaOpcaoMenu1::processaMenu1(int opcao) {
    if(opcao == 1) return 1;
    else if(opcao == 2) return 2;
    else if(opcao == 3){
        std::cout << "Ate logo!";
        return 0;
    }
}
