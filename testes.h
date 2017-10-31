//
// Created by andre on 9/13/17.
//

#ifndef TP1_T1_TESTES_H
#define TP1_T1_TESTES_H

#include "dominios.h"
#include <string>
#include <iostream>
using namespace std;
// Declaracao de classes.
class TUNome {
private:
    const char NOME_VALIDO[14] = "Rodrigo kappa";
    const char NOME_INVALIDO[18] = "Akira-K1kiraAb3";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    nome *Nome;
public:
    void run();
};

class TUApelido {
private:
    const char APELIDO_VALIDO[8] = "kappa";
    const char APELIDO_INVALIDO[8] = "Tylenol";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    apelido *Apelido;
public:
    void run();
};

class TUTelefone {
private:
    const char TELEFONE_VALIDO[12] = "12345678912";
    const char TELEFONE_INVALIDO[9] = "1548612s";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    telefone *Telefone;
public:
    void run();
};

class TUSenha {
private:
    const char SENHA_VALIDO[5] = "ABCD";
    const char SENHA_INVALIDO[5] = "AAB1";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    senha *Senha;
public:
    void run();
};

class TUTitulo {
private:
    const char TITULO_VALIDO[21] = "Senhor dos aneis";
    const char TITULO_INVALIDO[25] = "Senhor  dos  anei  s";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    titulo *Titulo;
public:
    void run();
};

class TUData {
private:
    const char DATA_VALIDO[7] = "301110";
    const char DATA_INVALIDO[10] = "551013000";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    data *Data;
public:
    void run();
};

class TUCodigo {
private:
    const char CODIGO_VALIDO[6] = "12345";
    const char CODIGO_INVALIDO[7] = "123456";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    codigo *Codigo;
public:
    void run();
};

class TUTexto {
private:
    const char TEXTO_VALIDO[41]= "Lorem ipsum dolor sit amet, consectetur ";
    const char TEXTO_INVALIDO[124] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    texto *Texto;
public:
    void run();
};

class TUGenero {
private:
    const char GENERO_VALIDO[8] = "EPOPEIA";
    const char GENERO_INVALIDO[7] = "FICCAO";
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void setUp();
    void tearDown();
    genero *Genero;
public:
    void run();
};

#endif //TP1_T1_TESTES_H
