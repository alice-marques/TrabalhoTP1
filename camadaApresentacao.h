//
// Created by andre on 11/1/17.
//
#include "camadaServico.h"
#ifndef TRABALHO3_CAMADAAPRESENTACAO_H
#define TRABALHO3_CAMADAAPRESENTACAO_H


class menuUsuarioLogado{
private:
    usuarioLogado *usuarioLogado1;
    string titulo;
    string autor;
    string data;
    string codigo;
    string genero;

public:
    menuUsuarioLogado();
    void menuUsuario();
    void menuAdciona();
    void menuRemove();
    void menuProcuraU();
    void menuTroca();
};

class menuCadastro{
private:
    processaCadastroUsuario *processaCadastroUsuario1;
    string nome;
    string apelido;
    string telefone;
    string senha;

public:
    menuCadastro();
    void menuCadastra();
};

class menuLogin{
private:
    processaLogIn *processaLogIn1;
    menuUsuarioLogado *menuUsuarioLogado1;
    string apelido;
    string senha;
public:
    menuLogin();
    void validaUsuario();

};

class menu1{
private:
    menuCadastro *menuUsuario1;
    menuLogin *menuLogin1;
public:
    menu1();
    void primeiroMenu();
};







#endif //TRABALHO3_CAMADAAPRESENTACAO_H
