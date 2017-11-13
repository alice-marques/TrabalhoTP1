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
    vector<USUARIO> usuarios = {};
    bancoDeDados();
public:
    static bancoDeDados* getInstance();
    USUARIO* buscaERetornaUsuario(std::string apelido);
    bool armazena(USUARIO* usuarioRecebido);
};
#endif //TRABALHO3_ARMAZENAMENTO_H
