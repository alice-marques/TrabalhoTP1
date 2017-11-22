//
// Created by andre on 11/13/17.
//
#include "entidades.h"
#include <vector>
#ifndef TRABALHO3_ARMAZENAMENTO_H
#define TRABALHO3_ARMAZENAMENTO_H


class bancoDeDados{
private:
    static bancoDeDados* instance;
    USUARIO *usuario = nullptr;
    vector<USUARIO> usuarios = {};
    bancoDeDados();
public:
    static bancoDeDados* getInstance();
    bool buscaESetaUsuario(std::string apelido, USUARIO *user);
    bool armazena();
    bool setaUsuario(std::string nome, std::string apelido, std::string telefone, std::string senha);
    bool numeroDeLivros(LIVRO livro);
    bool armazenaLivro(LIVRO livro);
    bool retiraLivro(std::string livro);
};





#endif //TRABALHO3_ARMAZENAMENTO_H
