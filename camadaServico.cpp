//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaServico.h"




processaCadastroUsuario::processaCadastroUsuario() {
    usuario = USUARIO::getInstance();
    bancoDeDados1 = bancoDeDados::getInstance();
}

bool processaCadastroUsuario::cadastraNome() {
    std::cin >> nome;
    return usuario->Nome->valida(nome);
}

bool processaCadastroUsuario::cadastraApelido() {
    std::cin >> apelido;
    return usuario->Apelido->valida(apelido);
}

bool processaCadastroUsuario::cadastraTelefone() {
    std::cin >> telefone;
    return usuario->Telefone->valida(telefone);
}

bool processaCadastroUsuario::cadastraUsuario() {
    usuario->set_USUARIO(nome, apelido, telefone, senha);
    return bancoDeDados1->armazena();
}

bool processaCadastroUsuario::cadastraSenha() {
    std::cin >> senha;
    return usuario->Senha->valida(senha);
}

bool processaLogIn::checaApelido() {
    std::cin >> entrada;
    if(!bancoDeDados1->buscaESetaUsuario(entrada, usuario));
    return (entrada == usuario->Apelido->get_apelido());
}


bool processaLogIn::checaSenha() {
    std::cin >> entrada;
    return (usuario->Senha->get_senha() == entrada);
}

processaLogIn::processaLogIn() {
    usuario = USUARIO::getInstance();
    bancoDeDados1 = bancoDeDados::getInstance();
}

usuarioLogado::usuarioLogado() {
    usuario = USUARIO::getInstance();
    bancodedados = bancoDeDados::getInstance();
    livro = new LIVRO();

}

bool usuarioLogado::insereLivro() {
    return bancodedados->numeroDeLivros(*livro);
}

bool usuarioLogado::retiraLivro() {
    return false;
}

bool usuarioLogado::registraTitulo() {
    cin >> entrada;
    return livro->Titulo->set_titulo(entrada);
}

bool usuarioLogado::registraAutor() {
    cin >> entrada;
    return  livro->Nome->set_nome(entrada);

}

bool usuarioLogado::registraCodigo() {
    cin >> entrada;
    return livro->Codigo->set_codigo(entrada);
}

bool usuarioLogado::registraData() {
    cin >> entrada;
    return livro->Data->set_data(entrada);
}

bool usuarioLogado::registraGenero() {
    cin >> entrada;
    return livro->Genero->set_genero(entrada);
}








































