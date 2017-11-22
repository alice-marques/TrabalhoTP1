//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaApresentacao.h"


menu1::menu1() {
    menuUsuario1 = new menuCadastro();
    menuLogin1 = new menuLogin();
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
        if (entrada == 1) menuLogin1->validaUsuario();
        else if (entrada == 2) menuUsuario1->menuCadastra();
        else if (entrada == 3) std::cout << "Ate logo!";
    }
}

menuCadastro::menuCadastro() {
    processaCadastroUsuario1 = new processaCadastroUsuario();
    }

void menuCadastro::menuCadastra() {
    do {
        do {
            std::cout << "Por favor digite o nome desejado(15 caracteres (letras, espaços em branco, ponto):\n>>";
        } while (!processaCadastroUsuario1->cadastraNome());
        do {
            std::cout << "Por favor digite o apelido desejado(5 letras):\n>>";
        } while (!processaCadastroUsuario1->cadastraApelido());
        do {
            std::cout << "Por favor digite o telefone desejado(11 numeros de 0 a 9 sem simbolos adcionais):\n>>";
        } while (!processaCadastroUsuario1->cadastraTelefone());
        do {
            std::cout << "Por favor digite a senha desejada(4 letras sem repeticao):\n>>";
        } while (!processaCadastroUsuario1->cadastraSenha());
    } while(!processaCadastroUsuario1->cadastraUsuario()) ;
}

menuLogin::menuLogin() {
    processaLogIn1 = new processaLogIn();
    menuUsuarioLogado1 = new menuUsuarioLogado();
}
void menuLogin::validaUsuario() {
    do{
        std::cout << "Digite o Apelido:\n>>";
    }while(!processaLogIn1->checaApelido());
    do{
        std::cout << "Digite a Senha:\n>>";
    }while(!processaLogIn1->checaSenha());
    menuUsuarioLogado1->menuUsuario();
}
//COMEÇAR A IMPLEMENTAÇÃO DO VETOR DE USUARIOS





void menuUsuarioLogado::menuUsuario() {
    int entrada = 0;
    do {
        do {
            cout << "Seja bem vindo ao sistema de livros" << "\n"
                 << "Pressione:" << "\n"
                 << "1. Para adcionar um livro"
                 << "\n" << "2. Para remover um livro"
                 << "\n"
                 << "3. Para sair"
                 << "\n>>";
            cin >> entrada;
        } while (entrada < 0 || entrada > 3);
        if (entrada == 1) menuAdciona();
        else if (entrada == 2) cout << "Remove";
    }while (entrada != 3);
}

void menuUsuarioLogado::menuAdciona() {
    do{
        cout << "Digite o titulo do livro a ser adcionado (20 caracteres sem espaço em branco duplo):\n>>";
    }while (!usuarioLogado1->registraTitulo());
    do{
        cout << "Digite o autor do livro a ser adcionado (15 caracteres):\n>>";
    }while (!usuarioLogado1->registraAutor());
    do{
        cout << "Digite a data do livro a ser adcionado (dd/mm/aa):\n>>";
    }while (!usuarioLogado1->registraData());
    do{
        cout << "Digite o codigo do livro a ser adcionado (5 numeros de 0 a 9):\n>>";
    }while (!usuarioLogado1->registraCodigo());
    do{
        cout << "Digite o genero do livro a ser adcionado (EPOPEIA, NOVELA, CONTO, ENSAIO, ROMANCE):\n>>";
    }while (!usuarioLogado1->registraGenero());
    usuarioLogado1->insereLivro();
}

menuUsuarioLogado::menuUsuarioLogado() {
    usuarioLogado1 = new usuarioLogado();

}

void menuUsuarioLogado::menuRemove() {
    do{
        cout << " Digite o codigo do livro a ser retirado:\n>>";
    }while(true);

}

