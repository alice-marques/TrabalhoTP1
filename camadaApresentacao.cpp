//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaApresentacao.h"


CamadaDeApresentacao::CamadaDeApresentacao() {
    processa1 = new processaOpcaoMenu();

}

void CamadaDeApresentacao::primeiroMenu() {
    int entrada = 0;
    do {
        std::cout << "Bem-vindo ao sistema de biblioteca." << "\n" << "Pressione:" << "\n" << "1. Para entrar;" << "\n"
                  << "2. Para cadastrar um usuario;" << "\n" << "3. Para sair;" << "\n>> ";
        std::cin >> entrada;
    }while(entrada < 1 || entrada > 3);
    processa1->processaMenu1(entrada);
}
