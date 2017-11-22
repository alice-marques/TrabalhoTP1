//
// Created by andre on 9/13/17.
//
#include <vector>
#include "dominios.h"
#ifndef TP1_T1_ENTIDADES_H
#define TP1_T1_ENTIDADES_H
class LIVRO {
public:
    titulo *Titulo = nullptr;
    nome *Nome = nullptr;
    data *Data = nullptr;
    codigo *Codigo = nullptr;
    genero *Genero = nullptr;
    bool desejaTrocar = false;
    LIVRO();
    void set_LIVRO(std::string titulo_setado, std::string nome_setado, std::string data_setado, std::string codigo_setado, std::string genero_setado);
    void get_LIVRO(std::string *titulo_setado, std::string *nome_setado, std::string *data_setado, std::string *codigo_setado, std::string *genero_setado);
    void deleta_LIVRO();
};

class USUARIO{
private:
    static USUARIO* instance;
    USUARIO();
public:
    vector<LIVRO> estante;
    static USUARIO *getInstance();
    static USUARIO *createAux();
    nome *Nome = nullptr;
    apelido *Apelido = nullptr;
    telefone *Telefone = nullptr;
    senha *Senha = nullptr;
    void set_USUARIO(std::string nome_setado, std::string apelido_setado, std::string telefone_setado, std::string senha_setado);
    void get_USUARIO(std::string *nome_setado, std::string *apelido_setado, std::string *telefone_setado, std::string *senha_setado);
    void deleta_USUARIO();
};



class RESENHA{
public:
    titulo *Titulo = nullptr;
    codigo *Codigo = nullptr;
    texto *Texto = nullptr;
    RESENHA();
    void set_RESENHA(std::string titulo_setado, std::string codigo_setado, std::string texto_setado);
    void get_RESENHA(std::string *titulo_setado,  std::string *codigo_setado, std::string *texto_setado);
    void deleta_RESENHA();
};

#endif //TP1_T1_ENTIDADES_H
