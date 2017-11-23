//
// Created by andre on 11/6/17.
//
#include "armazenamento.h"
#ifndef TRABALHO3_CAMADASERVICO_H
#define TRABALHO3_CAMADASERVICO_H

class processaLogIn: public ProcessaLogIn{
private:
    USUARIO *usuario;
    bancoDeDados* bancoDeDados1;
public:
    processaLogIn();
    bool checaApelido(string apelido);
    bool checaSenha(string senha);
};

class processaCadastroUsuario: public ProcessaCadastroUsuario{
private:
    USUARIO *usuario;
    bancoDeDados* bancoDeDados1;
public:
    bool cadastraNome(string nome);
    bool cadastraApelido(string apelido);
    bool cadastraTelefone(string telefone);
    bool cadastraSenha(string senha);
    bool cadastraUsuario(string nome, string apelido, string telefone, string senha);
    processaCadastroUsuario();
};

class usuarioLogado: public UsuarioLogado{
private:
    USUARIO *usuario;
    bancoDeDados *bancodedados;
    LIVRO *livro;
public:
    bool registraTitulo(string titulo);
    bool registraAutor(string autor);
    bool registraCodigo(string codigo);
    bool registraData(string data);
    bool registraGenero(string genero);
    usuarioLogado();
    bool insereLivro();
    bool retiraLivro(string codigo);
    bool procuraUsuario(string apelido);
    bool procuraLivro(string livro);
    bool procuraLivroESeta(string livro, int opcao);
    bool procuraLivroUsuario(string livro);
    bool procuraLivroEmprestimo(string livro);
};







#endif //TRABALHO3_INTERFACES_H
