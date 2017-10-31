//
// Created by andre on 9/13/17.
//

#ifndef TP1_T1_TESTESENTIDADES_H
#define TP1_T1_TESTESENTIDADES_H

#include "entidades.h"
using namespace std;
const static int SUCESSO = 0;
const static int FALHA = -1;
class TUUsuario{
private:
    USUARIO *Usuario;
    const  char NOME_VALIDO[14] = "Rodrigo kappa";
    const char APELIDO_VALIDO[8] = "kappa";
    const char TELEFONE_VALIDO[12] = "12345678912";
    const char SENHA_VALIDO[5] = "ABCD";
    void testarCenarioSucesso();
    void setUp();
    void tearDown();

public:
    void run();
};

class TULivro{
private:
    LIVRO *Livro;
    const char TITULO_VALIDO[21] = "Senhor dos aneis";
    const char DATA_VALIDO[7] = "301110";
    const char CODIGO_VALIDO[6] = "12345";
    const char GENERO_VALIDO[8] = "EPOPEIA";
    void testarCenarioSucesso();
    void setUp();
    void tearDown();

public:
    void run();
};

class TUResenha{
private:
    RESENHA *Resenha;
    const char TITULO_VALIDO[21] = "Senhor dos aneis";
    const char CODIGO_VALIDO[6] = "12345";
    const char TEXTO_VALIDO[41]= "Lorem ipsum dolor sit amet, consectetur ";
    void testarCenarioSucesso();
    void setUp();
    void tearDown();

public:
    void run();
};
#endif //TP1_T1_TESTESENTIDADES_H
