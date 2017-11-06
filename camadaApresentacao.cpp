//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaApresentacao.h"


menu1::menu1() {
    processa1 = new processaOpcaoMenu1();

}

void menu1::primeiroMenu() {
    int entrada = 0;
    do {
        std::cout << "Bem-vindo ao sistema de biblioteca." << "\n" << "Pressione:" << "\n" << "1. Para entrar;" << "\n"
                  << "2. Para cadastrar um usuario;" << "\n" << "3. Para sair;" << "\n>> ";
        std::cin >> entrada;
    }while(entrada < 1 || entrada > 3);
    entrada = processa1->processaMenu1(entrada);
    if(entrada == 1) std::cout << "entrar";
    else if(entrada == 2) std::cout << "cadastrar";
    else if(entrada == 3) return;
}
menuUsuario::menuUsuario() {
    std::string nome;
    usuario = new USUARIO();
    do {
        std::cout << "Por favor digite o nome desejado(15 caracteres (letras, espaços em branco, ponto):\n>>";
    }while(!usuario->Nome->valida(nome));

    }

void menuUsuario::imprimeMenuCadastro() {


}
