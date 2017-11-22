//
// Created by andre on 11/6/17.
//
#include "armazenamento.h"
#ifndef TRABALHO3_INTERFACES_H
#define TRABALHO3_INTERFACES_H

class processaLogIn{
private:
    USUARIO *usuario;
    std::string entrada;
    bancoDeDados* bancoDeDados1;
public:
    processaLogIn();
    bool checaApelido();
    bool checaSenha();
};

class processaCadastroUsuario{
private:
    std::string nome;
    std::string apelido;
    std::string telefone;
    std::string senha;
    USUARIO *usuario;
    bancoDeDados* bancoDeDados1;
public:
    bool cadastraNome();
    bool cadastraApelido();
    bool cadastraTelefone();
    bool cadastraSenha();
    bool cadastraUsuario();
    processaCadastroUsuario();
};

class usuarioLogado{
private:
    USUARIO *usuario;
    bancoDeDados *bancodedados;
    LIVRO *livro;
    std::string entrada;
public:
    bool registraTitulo();
    bool registraAutor();
    bool registraCodigo();
    bool registraData();
    bool registraGenero();
    usuarioLogado();
    bool insereLivro();
    bool retiraLivro();
};







#endif //TRABALHO3_INTERFACES_H
