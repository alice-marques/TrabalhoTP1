//
// Created by andre on 9/13/17.
//

#ifndef TP1_T1_DOMINIOS_H
#define TP1_T1_DOMINIOS_H


#include <stdexcept>

using namespace std;
//definir constantes para as condicoes ex. codigoASCIINumInicial = 10;
// Declara��o de classe.

class nome {
private:
    std::string nome;
    int valida(std::string nome_validar);
public:
    void set_nome(std::string nome_recebido) ;
    std::string get_nome();
};

class apelido {
private:
    std::string apelido;
    int valida(std::string apelido_validar);
public:
    void set_apelido(std::string apelido) ;
    std::string get_apelido();//setar como in-line talvez...
};

class telefone {
private:
    std::string telefone;
    int valida(std::string telefone_validar);
public:
    void set_telefone(std::string telefone) ;
    std::string get_telefone();
};

class senha {
private:
    std::string senha;
    int valida(std::string senha_validar);
public:
    void set_senha(std::string senha) ;
    std::string get_senha();
};

class titulo {
private:
    std::string titulo;
    int valida(std::string titulo_validar);
public:
    void set_titulo(std::string titulo) ;
    std::string get_titulo();
};

class data {
private:
    std::string data;
    int valida(std::string data_validar);
public:
    void set_data(std::string data) ;
    std::string get_data();
};

class codigo {
private:
    std::string codigo;
    int valida(std::string codigo_validar);
public:
    void set_codigo(std::string codigo) ;
    std::string get_codigo();
};

class texto {
private:
    std::string texto;
    int valida(std::string texto_validar);
public:
    void set_texto(std::string texto) ;
    std::string get_texto();
};

class genero {
private:
    std::string genero;
    int valida(std::string genero_validar);
public:
    void set_genero(std::string genero) ;
    std::string get_genero();
};



#endif //TP1_T1_DOMINIOS_H
