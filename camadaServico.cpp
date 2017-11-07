//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaServico.h"




processaCadastroUsuario::processaCadastroUsuario() {
    usuario = new USUARIO();// ver a questão do singleton (acho q é mais facil)
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

bool processaCadastroUsuario::cadastraSenha() {
    std::cin >> entrada;
    if(usuario->Senha->valida(entrada)){
        usuario->Senha->set_senha(entrada);
        return true;
    }else return false;
}


bool processaLogIn::checaSenha() {
    std::cin >> entrada;

    return false;
}
