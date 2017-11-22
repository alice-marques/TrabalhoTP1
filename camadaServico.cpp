//
// Created by andre on 11/6/17.
//

#include <iostream>
#include "camadaServico.h"




processaCadastroUsuario::processaCadastroUsuario() {
    usuario = USUARIO::getInstance();
    bancoDeDados1 = bancoDeDados::getInstance();
}

bool processaCadastroUsuario::cadastraNome(string nome) {
    return usuario->Nome->valida(nome);
}

bool processaCadastroUsuario::cadastraApelido(string apelido) {
    return usuario->Apelido->valida(apelido);
}

bool processaCadastroUsuario::cadastraTelefone(string telefone) {
    return usuario->Telefone->valida(telefone);
}

bool processaCadastroUsuario::cadastraUsuario(string nome, string apelido, string telefone, string senha) {
    usuario->set_USUARIO(nome, apelido, telefone, senha);
    return bancoDeDados1->armazena();
}

bool processaCadastroUsuario::cadastraSenha(string senha) {
    return usuario->Senha->valida(senha);
}

bool processaLogIn::checaApelido(string apelido) {
    if(!bancoDeDados1->buscaESetaUsuario(apelido, usuario));
    return (apelido == usuario->Apelido->get_apelido());
}


bool processaLogIn::checaSenha(string apelido) {
    return (usuario->Senha->get_senha() == apelido);
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

bool usuarioLogado::retiraLivro(string codigo) {
    return bancodedados->retiraLivro(codigo);
}

bool usuarioLogado::registraTitulo(string titulo) {
    return livro->Titulo->set_titulo(titulo);
}

bool usuarioLogado::registraAutor(string autor) {
    return  livro->Nome->set_nome(autor);

}

bool usuarioLogado::registraCodigo(string codigo) {
    return livro->Codigo->set_codigo(codigo);
}

bool usuarioLogado::registraData(string data) {
    return livro->Data->set_data(data);
}

bool usuarioLogado::registraGenero(string genero) {
    return livro->Genero->set_genero(genero);
}

bool usuarioLogado::procuraUsuario(string apelido) {
    return bancodedados->procuraUsuario(apelido);
}

bool usuarioLogado::procuraLivro(string livro) {
    return bancodedados->procuraLivro(livro);
}

bool usuarioLogado::procuraLivroESeta(string livro, int opcao) {
    return bancodedados->procuraLivroESetaEmprestimo(livro, opcao);
}

bool usuarioLogado::procuraLivroUsuario(string livro) {
    return bancodedados->procuraLivroUsuario(livro);
}

bool usuarioLogado::procuraLivroEmprestimo(string livro) {
    if(bancodedados->procuraLivroEmprestinmo(livro)){
        return true;
    }
    cout << "Livro nao encontrado\n";
    return false;
}








































