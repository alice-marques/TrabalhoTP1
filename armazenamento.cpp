//
// Created by andre on 11/13/17.
//
#include <iostream>
#include "armazenamento.h"

bancoDeDados* bancoDeDados::instance = nullptr;

bancoDeDados* bancoDeDados::getInstance() {
    if(instance == nullptr) instance = new bancoDeDados();
    return instance;
}

bancoDeDados::bancoDeDados(){
    usuario = new USUARIO();
}

bool bancoDeDados::setaUsuario(std::string nome, std::string apelido, std::string telefone, std::string senha) {
    usuario->set_USUARIO(nome, apelido,telefone, senha);
}

bool bancoDeDados::buscaESetaUsuario(std::string apelido) {
    auto i = usuarios.begin();
    for(i; i != usuarios.end(); i++ ){
        std::cout << i->Apelido->get_apelido() << "k\n";
        if(i->Apelido->get_apelido() == apelido)
            return setaUsuario(i->Nome->get_nome(), i->Apelido->get_apelido(), i->Telefone->get_telefone(), i->Senha->get_senha());
    }
    return false;
}


bool bancoDeDados::armazena(USUARIO usuario1) {
    auto i = usuarios.begin();
    for(i; i != usuarios.end(); i++ ) {
        std::cout << i->Apelido->get_apelido() << "\n";
    }
    std::cout << "__________________________________\n";
    usuarios.push_back(usuario1);
    for(i = usuarios.begin(); i != usuarios.end(); i++ ) {
        std::cout << i->Apelido->get_apelido() << "\n";
    }
    return (usuario1.Apelido->get_apelido() == usuarios.back().Apelido->get_apelido()) &&
    (usuario1.Senha->get_senha() == usuarios.back().Senha->get_senha());
}

