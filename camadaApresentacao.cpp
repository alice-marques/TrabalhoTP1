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
            cin >> nome;
        } while (!processaCadastroUsuario1->cadastraNome(nome));
        do {
            std::cout << "Por favor digite o apelido desejado(5 letras):\n>>";
            cin >> apelido;
        } while (!processaCadastroUsuario1->cadastraApelido(apelido));
        do {
            std::cout << "Por favor digite o telefone desejado(11 numeros de 0 a 9 sem simbolos adcionais):\n>>";
            cin >> telefone;
        } while (!processaCadastroUsuario1->cadastraTelefone(telefone));
        do {
            std::cout << "Por favor digite a senha desejada(4 letras sem repeticao):\n>>";
            cin >> senha;
        } while (!processaCadastroUsuario1->cadastraSenha(senha));
    } while(!processaCadastroUsuario1->cadastraUsuario(nome, apelido, telefone, senha)) ;
}

menuLogin::menuLogin() {
    processaLogIn1 = new processaLogIn();
    menuUsuarioLogado1 = new menuUsuarioLogado();
}
void menuLogin::validaUsuario() {
    do{
        std::cout << "Digite o Apelido:\n>>";
        cin >> apelido;
    }while(!processaLogIn1->checaApelido(apelido));
    do{
        std::cout << "Digite a Senha:\n>>";
        cin >> senha;
    }while(!processaLogIn1->checaSenha(senha));
    menuUsuarioLogado1->menuUsuario();
}
//COMEÇAR A IMPLEMENTAÇÃO DO VETOR DE USUARIOS





void menuUsuarioLogado::menuUsuario() {
    int entrada = 0;
    string livro;
    do {
        do {
            cout << "Seja bem vindo ao sistema de livros" << "\n"
                 << "Pressione:"
                 << "\n"
                 << "1. Para adcionar um livro"
                 << "\n"
                 << "2. Para remover um livro"
                 << "\n"
                 << "3. Para procurar um usuario"
                 << "\n"
                 << "4. Para trocar um livro"
                 << "\n"
                 << "5. Para consultar dados de um livro"
                 << "\n"
                 << "6. Para sair"
                 << "\n"
                 << ">>";

            cin >> entrada;
        } while (entrada < 0 || entrada > 6);
        if (entrada == 1) menuAdciona();
        else if (entrada == 2) menuRemove();
        else if (entrada == 3) menuProcuraU();
        else if (entrada == 4) menuTroca();
        else if (entrada == 5) {
            do{
                cout << "Digite o nome do livro:\n>>";
                cin >> livro;
            }while(!usuarioLogado1->procuraLivro(livro));
        };

    }while (entrada != 6);
}

void menuUsuarioLogado::menuAdciona() {
    do{
        cout << "Digite o titulo do livro a ser adcionado (20 caracteres sem espaço em branco duplo):\n>>";
        cin >> titulo;
    }while (!usuarioLogado1->registraTitulo(titulo));
    do{
        cout << "Digite o autor do livro a ser adcionado (15 caracteres):\n>>";
        cin >> autor;
    }while (!usuarioLogado1->registraAutor(autor));
    do{
        cout << "Digite a data do livro a ser adcionado (dd/mm/aa):\n>>";
        cin >> data;
    }while (!usuarioLogado1->registraData(data));
    do{
        cout << "Digite o codigo do livro a ser adcionado (5 numeros de 0 a 9):\n>>";
        cin >> codigo;
    }while (!usuarioLogado1->registraCodigo(codigo));
    do{
        cout << "Digite o genero do livro a ser adcionado (EPOPEIA, NOVELA, CONTO, ENSAIO, ROMANCE):\n>>";
        cin >> genero;
    }while (!usuarioLogado1->registraGenero(genero));
    usuarioLogado1->insereLivro();
}

menuUsuarioLogado::menuUsuarioLogado() {
    usuarioLogado1 = new usuarioLogado();

}

void menuUsuarioLogado::menuRemove() {
    do{
        cout << " Digite o codigo do livro a ser retirado:\n>>";
    }while(!usuarioLogado1->retiraLivro(std::__cxx11::string()));

}

void menuUsuarioLogado::menuProcuraU() {
    std::string entrada;
    do{
        cout << "Digite o apelido do usuario\n>>";
        cin >> entrada;
    }while(!usuarioLogado1->procuraUsuario(entrada));


}

void menuUsuarioLogado::menuTroca() {
    int entrada = 0;
    string livro;
    do{
        cout << "Pressione:"
             << "\n"
             << "1. Para dizer se quer emprestar"
             << "\n"
             << "2. Para procurar um livro para pegar emprestado"
             << "\n"
             << "3. Para voltar"
             << "\n>>";
        cin >> entrada;
        if(entrada == 1) {
            do {
                cout << "Digite o nome do livro:\n>>";
                cin >> livro;
            }while(!usuarioLogado1->procuraLivroUsuario(livro));
            do{
                cout << "Selecione 1 para trocar e 2 para nao trocar\n>>";
                cin >> entrada;
            }while(!usuarioLogado1->procuraLivroESeta(livro,entrada));
        }
        if(entrada == 2) {
            cout << "Digite o nome do livro para pegar emprestado:\n>>";
            cin >> livro;
            usuarioLogado1->procuraLivroEmprestimo(livro);
        };

    }while (entrada != 3);

}

