//
// Created by andre on 9/13/17.
//
#include<stdio.h>
#include "testesEntidades.h"
int estado_ent = SUCESSO;
void TUUsuario::setUp() {
    Usuario = new USUARIO();
    estado_ent = SUCESSO;
}
void TUUsuario::tearDown() {
    Usuario->deleta_USUARIO();
    delete Usuario;
}
void TUUsuario::testarCenarioSucesso() {
    std::string NOME, APELIDO, TELEFONE, SENHA;
    try{
        Usuario->set_USUARIO(NOME_VALIDO, APELIDO_VALIDO, TELEFONE_VALIDO, SENHA_VALIDO);
        Usuario->get_USUARIO(&NOME, &APELIDO, &TELEFONE, &SENHA);
        if ( NOME != NOME_VALIDO || APELIDO != APELIDO_VALIDO || TELEFONE != TELEFONE_VALIDO || SENHA != SENHA_VALIDO)
            estado_ent = FALHA;
    }
    catch(invalid_argument excecao){
        estado_ent = FALHA;
    }
}
void TUUsuario::run() {
    setUp();
    testarCenarioSucesso();
    if(estado_ent == SUCESSO) printf("\nACERTO no teste do Usuario");
    tearDown();
}

void TULivro::setUp() {
    Livro = new LIVRO();
    estado_ent = SUCESSO;
}
void TULivro::tearDown() {
    Livro->deleta_LIVRO();
    delete Livro;
}
void TULivro::testarCenarioSucesso() {
    std::string TITULO, DATA, CODIGO, GENERO;
    try{
        Livro->set_LIVRO(TITULO_VALIDO, DATA_VALIDO, CODIGO_VALIDO, GENERO_VALIDO);
        Livro->get_LIVRO(&TITULO, &DATA, &CODIGO, &GENERO);
        if ( TITULO != TITULO_VALIDO || DATA != DATA_VALIDO || CODIGO != CODIGO_VALIDO || GENERO != GENERO_VALIDO)
            estado_ent = FALHA;
    }
    catch(invalid_argument excecao){
        estado_ent = FALHA;
    }
}
void TULivro::run() {
    setUp();
    testarCenarioSucesso();
    if(estado_ent == SUCESSO) printf("\nACERTO no teste do Livro");
    tearDown();
}

void TUResenha::setUp() {
    Resenha = new RESENHA();
    estado_ent = SUCESSO;
}
void TUResenha::tearDown() {
    Resenha->deleta_RESENHA();
    delete Resenha;
}
void TUResenha::testarCenarioSucesso() {
    std::string TITULO, CODIGO, TEXTO;
    try{
        Resenha->set_RESENHA(TITULO_VALIDO, CODIGO_VALIDO, TEXTO_VALIDO);
        Resenha->get_RESENHA(&TITULO, &CODIGO, &TEXTO);
        if ( TITULO != TITULO_VALIDO || CODIGO != CODIGO_VALIDO || TEXTO != TEXTO_VALIDO)
            estado_ent = FALHA;
    }
    catch(invalid_argument excecao){
        estado_ent = FALHA;
    }
}
void TUResenha::run() {
    setUp();
    testarCenarioSucesso();
    if(estado_ent == SUCESSO) printf("\nACERTO no teste da Resenha");
    tearDown();
}
