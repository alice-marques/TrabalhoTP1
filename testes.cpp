//
// Created by andre on 9/13/17.
//

#include "testes.h"
#include "testesEntidades.h"
// Definicoes de metodos.
#include <stdio.h>
int estado = SUCESSO;
void TUNome::testarCenarioSucesso(){
    try{
        Nome->set_nome(TUNome::NOME_VALIDO);
        if (Nome->get_nome() != NOME_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    estado = FALHA;
    try{
        Nome->set_nome((NOME_INVALIDO));
        if (Nome->get_nome() != NOME_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUNome::setUp(){
    Nome = new nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete Nome;
}

void TUApelido::testarCenarioSucesso(){
    try{
        Apelido->set_apelido(APELIDO_VALIDO);
        if (Apelido->get_apelido() != APELIDO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUApelido::testarCenarioFalha(){
    estado = FALHA;
    try{
        Apelido->set_apelido((APELIDO_INVALIDO));
        if (Apelido->get_apelido() != APELIDO_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUApelido::setUp(){
    Apelido = new apelido();
    estado = SUCESSO;
}

void TUApelido::tearDown(){
    delete Apelido;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        Telefone->set_telefone(TELEFONE_VALIDO);
        if (Telefone->get_telefone() != TELEFONE_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    estado = FALHA;
    try{
        Telefone->set_telefone((TELEFONE_INVALIDO));
        if (Telefone->get_telefone() != TELEFONE_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUTelefone::setUp(){
    Telefone = new telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete Telefone;
}

void TUSenha::testarCenarioSucesso(){
    try{
        Senha->set_senha(SENHA_VALIDO);
        if (Senha->get_senha() != SENHA_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    estado = FALHA;
    try{
        Senha->set_senha((SENHA_INVALIDO));
        if (Senha->get_senha() != SENHA_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUSenha::setUp(){
    Senha = new senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete Senha;
}

void TUTitulo::testarCenarioSucesso(){
    try{
        Titulo->set_titulo(TITULO_VALIDO);
        if (Titulo->get_titulo() != TITULO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha(){
    estado = FALHA;
    try{
        Titulo->set_titulo((TITULO_INVALIDO));
        if (Titulo->get_titulo() != TITULO_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUTitulo::setUp(){
    Titulo = new titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown(){
    delete Titulo;
}

void TUData::testarCenarioSucesso(){
    try{
        Data->set_data(DATA_VALIDO);
        if (Data->get_data() != DATA_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    estado = FALHA;
    try{
        Data->set_data((DATA_INVALIDO));
        if (Data->get_data() != DATA_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}
void TUData::setUp(){
    Data = new data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete Data;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        Codigo->set_codigo(CODIGO_VALIDO);
        if (Codigo->get_codigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    estado = FALHA;
    try{
        Codigo->set_codigo((CODIGO_INVALIDO));
        if (Codigo->get_codigo() != CODIGO_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUCodigo::setUp(){
    Codigo = new codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete Codigo;
}

void TUTexto::testarCenarioSucesso(){
    try{
        Texto->set_texto(TEXTO_VALIDO);
        if (Texto->get_texto() != TEXTO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    estado = FALHA;
    try{
        Texto->set_texto((TEXTO_INVALIDO));
        if (Texto->get_texto() != TEXTO_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUTexto::setUp(){
    Texto = new texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete Texto;
}

void TUGenero::testarCenarioSucesso(){
    try{
        Genero->set_genero(GENERO_VALIDO);
        if (Genero->get_genero() != GENERO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUGenero::testarCenarioFalha(){
    estado = FALHA;
    try{
        Genero->set_genero((GENERO_INVALIDO));
        if (Genero->get_genero() != GENERO_INVALIDO)
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        return;
    }
}

void TUGenero::setUp(){
    Genero = new genero();
    estado = SUCESSO;
}

void TUGenero::tearDown(){
    delete Genero;
}

void TUNome::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Nome");
    if(estado == 0) printf("\nACERTO no caso de sucesso Nome");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Nome");
    if(estado == 0) printf("\nACERTO no caso de falha Nome");
    tearDown();
}

void TUApelido::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Apelido");
    if(estado == 0) printf("\nACERTO no caso de sucesso Apelido");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Apelido");
    if(estado == 0) printf("\nACERTO no caso de falha Apelido");
    tearDown();
}

void TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Telefone");
    if(estado == 0) printf("\nACERTO no caso de sucesso Telefone");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Telefone");
    if(estado == 0) printf("\nACERTO no caso de falha Telefone");
    tearDown();
}

void TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Senha");
    if(estado == 0) printf("\nACERTO no caso de sucesso Senha");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Senha");
    if(estado == 0) printf("\nACERTO no caso de falha Senha");
    tearDown();
}

void TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Titulo");
    if(estado == 0) printf("\nACERTO no caso de sucesso Titulo");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Titulo");
    if(estado == 0) printf("\nACERTO no caso de falha Titulo");
    tearDown();
}

void TUData::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Data");
    if(estado == 0) printf("\nACERTO no caso de sucesso Data");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Data");
    if(estado == 0) printf("\nACERTO no caso de falha Data");
    tearDown();
}

void TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Codigo");
    if(estado == 0) printf("\nACERTO no caso de sucesso Codigo");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Codigo");
    if(estado == 0) printf("\nACERTO no caso de falha Codigo");
    tearDown();
}

void TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Texto");
    if(estado == 0) printf("\nACERTO no caso de sucesso Texto");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Texto");
    if(estado == 0) printf("\nACERTO no caso de falha Texto");
    tearDown();
}

void TUGenero::run(){
    setUp();
    testarCenarioSucesso();
    if(estado == -1) printf("\nERRO no caso de sucesso Genero");
    if(estado == 0) printf("\nACERTO no caso de sucesso Genero");
    testarCenarioFalha();
    if(estado == -1) printf("\nERRO no caso de falha Genero");
    if(estado == 0) printf("\nACERTO no caso de falha Genero");
    tearDown();
}