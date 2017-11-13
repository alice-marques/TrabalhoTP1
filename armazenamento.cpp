//
// Created by andre on 11/13/17.
//
#include "armazenamento.h"

bancoDeDados* bancoDeDados::instance = 0;

bancoDeDados* bancoDeDados::getInstance() {
    if(instance == 0) instance = new bancoDeDados();
    return instance;
}

bancoDeDados::bancoDeDados() {}

USUARIO* bancoDeDados::buscaERetornaUsuario(std::string apelido) {
    USUARIO busca;
    for(busca : usuarios ){
        if(busca.Apelido->get_apelido() == apelido) return &busca;
    }
    return nullptr;
}


bool bancoDeDados::armazena(USUARIO *usuarioRecebido) {
    usuarios.push_back(*usuarioRecebido);
    return (usuarioRecebido->Apelido->get_apelido() == usuarios.back().Apelido->get_apelido()) &&
    (usuarioRecebido->Senha->get_senha() == usuarios.back().Senha->get_senha());
}

