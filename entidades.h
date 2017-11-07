//
// Created by andre on 9/13/17.
//
#include "dominios.h"
#ifndef TP1_T1_ENTIDADES_H
#define TP1_T1_ENTIDADES_H
class USUARIO{
public:
    nome *Nome = NULL;
    apelido *Apelido = NULL;
    telefone *Telefone = NULL;
    senha *Senha = NULL;
    USUARIO();
    void set_USUARIO(std::string nome_setado, std::string apelido_setado, std::string telefone_setado, std::string senha_setado);
    void get_USUARIO(std::string *nome_setado, std::string *apelido_setado, std::string *telefone_setado, std::string *senha_setado);
    void deleta_USUARIO();
};

class LIVRO {
public:
    titulo *Titulo = NULL;
    data *Data = NULL;
    codigo *Codigo = NULL;
    genero *Genero = NULL;
    LIVRO();
    void set_LIVRO(std::string titulo_setado, std::string data_setado, std::string codigo_setado, std::string genero_setado);
    void get_LIVRO(std::string *titulo_setado, std::string *data_setado, std::string *codigo_setado, std::string *genero_setado);
    void deleta_LIVRO();
};

class RESENHA{
public:
    titulo *Titulo = NULL;
    codigo *Codigo = NULL;
    texto *Texto = NULL;
    RESENHA();
    void set_RESENHA(std::string titulo_setado, std::string codigo_setado, std::string texto_setado);
    void get_RESENHA(std::string *titulo_setado,  std::string *codigo_setado, std::string *texto_setado);
    void deleta_RESENHA();
};

#endif //TP1_T1_ENTIDADES_H
