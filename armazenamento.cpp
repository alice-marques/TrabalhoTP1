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
    usuario = USUARIO::getInstance();
}

bool bancoDeDados::setaUsuario(std::string nome, std::string apelido, std::string telefone, std::string senha) {
    usuario->set_USUARIO(nome, apelido,telefone, senha);
}

bool bancoDeDados::buscaESetaUsuario(std::string apelido, USUARIO *user) {
    auto i = usuarios.begin();
    for(i; i != usuarios.end(); i++ ){
        cout << i->Apelido->get_apelido();
        if(i->Apelido->get_apelido() == apelido)
            return setaUsuario(i->Nome->get_nome(), i->Apelido->get_apelido(), i->Telefone->get_telefone(),
                               i->Senha->get_senha());
    }
    return false;
}


bool bancoDeDados::armazena() {
    USUARIO *usuarioTemp = USUARIO::createAux();
    usuario = USUARIO::getInstance();
    usuarioTemp->set_USUARIO(usuario->Nome->get_nome(), usuario->Apelido->get_apelido(), usuario->Telefone->get_telefone(), usuario->Senha->get_senha());
    usuarios.push_back(*usuarioTemp);
    return (usuario->Apelido->get_apelido() == usuarios.back().Apelido->get_apelido()) &&
    (usuario->Senha->get_senha() == usuarios.back().Senha->get_senha());
}

bool bancoDeDados::armazenaLivro(LIVRO livro) {
    usuario = USUARIO::getInstance();
    auto i = usuarios.begin();
    auto est = usuario->estante->begin();
    /*for(i; i != usuarios.end(); i++){
        if(i->Apelido->get_apelido() == usuario->Apelido->get_apelido()){
            for(est = usuario->estante->begin(); est != i->estante->end(); est++){
                if(est->Codigo->get_codigo() == livro.Codigo->get_codigo()) return false;
            }
            i->estante->push_back(livro);
            usuario->estante->push_back(livro);
        }
    }*/
    return true;
}

bool bancoDeDados::numeroDeLivros(LIVRO livro) {
    usuario = USUARIO::getInstance();
    int n = 0;
    auto i = usuarios.begin();
    auto est = usuario->estante->begin();
    /*for(i; i != usuarios.end(); i++){
        if(i->Apelido->get_apelido() == usuario->Apelido->get_apelido()){
            for(est = usuario->estante->begin(); est != i->estante->end(); est++){
                n++;
            }
        }
    }
    if(n >= 10){
        cout << "Voce ja tem livros de mais na estante\n";
        return false;
    }
    if(armazenaLivro(livro)) return true;
    cout << "Livro ja esta na estante";
    return false;*/
    return true;
}
