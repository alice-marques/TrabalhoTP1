//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaServico.h"




processaCadastroUsuario::processaCadastroUsuario() {
    usuario = USUARIO::getInstance();           //ambos Singletons
    bancoDeDados1 = bancoDeDados::getInstance();
}

bool processaCadastroUsuario::cadastraNome() {
    std::cin >> entrada;
    if(usuario->Nome->valida(entrada)){
        usuario->Nome->set_nome(entrada);
        return true;
    }else return false;
}

bool processaCadastroUsuario::cadastraApelido() {
    std::cin >> entrada;
    if(usuario->Apelido->valida(entrada)){
        usuario->Apelido->set_apelido(entrada);
        return true;
    }else return false;
}

bool processaCadastroUsuario::cadastraTelefone() {
    std::cin >> entrada;
    if(usuario->Telefone->valida(entrada)){
        usuario->Telefone->set_telefone(entrada);
        return true;
    }else return false;
}

bool processaCadastroUsuario::cadastraUsuario() {
    return bancoDeDados1->armazena(usuario);
}

bool processaCadastroUsuario::cadastraSenha() {
    std::cin >> entrada;
    if(usuario->Senha->valida(entrada)){
        usuario->Senha->set_senha(entrada);
        cadastraUsuario();
        return true;
    }else return false;
}

bool processaLogIn::checaApelido() {
    std::cin >> entrada;
    if(!procuraUsuario(entrada)) printf("sdadasdasd");
    return (usuario->Apelido->get_apelido() == entrada);
}


bool processaLogIn::checaSenha() {
    std::cin >> entrada;
    return (usuario->Senha->get_senha() == entrada);
}

processaLogIn::processaLogIn() {
    usuario = USUARIO::getInstance();
    bancoDeDados1 = bancoDeDados::getInstance();
}

bool processaLogIn::procuraUsuario(std::string entrada) {
    if (bancoDeDados1->buscaERetornaUsuario(entrada) != nullptr) {
        usuario->set_USUARIO(bancoDeDados1->buscaERetornaUsuario(entrada)->Nome->get_nome(),
                             bancoDeDados1->buscaERetornaUsuario(entrada)->Apelido->get_apelido(),
                             bancoDeDados1->buscaERetornaUsuario(entrada)->Telefone->get_telefone(),
                             bancoDeDados1->buscaERetornaUsuario(entrada)->Senha->get_senha());
        return true;

    }else return false;
}