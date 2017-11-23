//
// Created by andre on 11/23/17.
//

#ifndef TRABALHO3_INTERFACES_H
#define TRABALHO3_INTERFACES_H

#include "entidades.h"
class BancoDeDados{
public:
    virtual bool buscaESetaUsuario(std::string apelido, USUARIO *user) = 0;
    virtual bool armazena()= 0;
    virtual bool setaUsuario(std::string nome, std::string apelido, std::string telefone, std::string senha) = 0;
    virtual bool numeroDeLivros(LIVRO livro) = 0;
    virtual bool armazenaLivro(LIVRO livro) = 0;
    virtual bool retiraLivro(std::string livro) = 0;
    virtual bool procuraUsuario(string apelido) = 0;
    virtual bool procuraLivro(string livro) = 0;
    virtual bool procuraLivroESetaEmprestimo(string livro, int troca) = 0;
    virtual bool procuraLivroUsuario(string livro) = 0;
    virtual bool procuraLivroEmprestinmo(string livro) = 0;
    virtual ~BancoDeDados() { };

};

class ProcessaLogIn{
public:
    ~ProcessaLogIn() {};
    virtual bool checaApelido(string apelido) = 0;
    virtual bool checaSenha(string senha) = 0;
};

class ProcessaCadastroUsuario{
public:
    virtual bool cadastraNome(string nome) = 0;
    virtual bool cadastraApelido(string apelido) = 0;
    virtual bool cadastraTelefone(string telefone) = 0;
    virtual bool cadastraSenha(string senha) = 0;
    virtual bool cadastraUsuario(string nome, string apelido, string telefone, string senha) = 0;
    ~ProcessaCadastroUsuario() {};
};

class UsuarioLogado{
public:
    virtual bool registraTitulo(string titulo) = 0;
    virtual bool registraAutor(string autor) = 0;
    virtual bool registraCodigo(string codigo) = 0;
    virtual bool registraData(string data) = 0;
    virtual bool registraGenero(string genero) = 0;
    ~UsuarioLogado() {};
    virtual bool insereLivro() = 0;
    virtual bool retiraLivro(string codigo) = 0;
    virtual bool procuraUsuario(string apelido) = 0;
    virtual bool procuraLivro(string livro) = 0;
    virtual bool procuraLivroESeta(string livro, int opcao) = 0;
    virtual bool procuraLivroUsuario(string livro) = 0;
    virtual bool procuraLivroEmprestimo(string livro) = 0;
};


#endif //TRABALHO3_INTERFACES_H
