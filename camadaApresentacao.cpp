//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaApresentacao.h"


menu1::menu1() {
    menuUsuario1 = new menuUsuario();
}

void menu1::primeiroMenu() {
    int entrada = 0;
    std::cout << "Bem-vindo ao sistema de biblioteca.\n";
    while (entrada != 3) {
        do {
            std::cout << "\n" << "Pressione:" << "\n" << "1. Para entrar;"
                      << "\n"
                      << "2. Para cadastrar um usuario;" << "\n" << "3. Para sair;" << "\n>> ";
            std::cin >> entrada;
        } while (entrada < 1 || entrada > 3);
        if (entrada == 1) std::cout << "entrar";
        else if (entrada == 2) menuUsuario1->menuCadastro();
        else if (entrada == 3) std::cout << "Ate logo!";
    }
}

menuUsuario::menuUsuario() {
    processaCadastroUsuario1 = new processaCadastroUsuario();

    }

void menuUsuario::menuCadastro() {
    do {
        std::cout << "Por favor digite o nome desejado(15 caracteres (letras, espaços em branco, ponto):\n>>";
    }while(!processaCadastroUsuario1->cadastraNome());
    do {
        std::cout << "Por favor digite o apelido desejado(5 letras):\n>>";
    }while(!processaCadastroUsuario1->cadastraApelido());
    do {
        std::cout << "Por favor digite o telefone desejado(11 numeros de 0 a 9 sem simbolos adcionais):\n>>";
    }while(!processaCadastroUsuario1->cadastraTelefone());
    do {
        std::cout << "Por favor digite a senha desejada(4 letras sem repeticao):\n>>";
    }while(!processaCadastroUsuario1->cadastraSenha());

}
