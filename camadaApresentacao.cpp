//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaApresentacao.h"


menu1::menu1() {
    processa1 = new processaOpcaoMenu1();
    menuUsuario1 = new menuUsuario();
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
    else if(entrada == 2) menuUsuario1->menuCadastro();
    else if(entrada == 3) return;
}
menuUsuario::menuUsuario() {
    usuario = new USUARIO();

    }

void menuUsuario::menuCadastro() {
    do {
        std::cout << "Por favor digite o nome desejado(15 caracteres (letras, espaços em branco, ponto):\n>>";
        std::cin >> nome;
    }while(!usuario->Nome->valida(nome));
    do {
        std::cout << "Por favor digite o apelido desejado(5 letras):\n>>";
        std::cin >> apelido;
    }while(!usuario->Apelido->valida(apelido));
    do {
        std::cout << "Por favor digite o telefone desejado(11 numeros de 0 a 9 sem simbolos adcionais):\n>>";
        std::cin >> telefone;
    }while(!usuario->Telefone->valida(telefone));
    do {
        std::cout << "Por favor digite a senha desejada(4 letras sem repeticao):\n>>";
        std::cin >> senha;
    }while(!usuario->Senha->valida(senha));
    usuario->set_USUARIO(nome, apelido, telefone, senha);

}
