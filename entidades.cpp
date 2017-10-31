//
// Created by andre on 9/13/17.
//

#include "entidades.h"

void USUARIO::cria_USUARIO() {
    if(Nome == NULL && Apelido == NULL && Telefone == NULL && Senha == NULL){
        Nome = new nome();
        Apelido = new apelido();
        Telefone = new telefone();
        Senha = new senha();
    }

}
void USUARIO::set_USUARIO(std::string nome_setado, std::string apelido_setado, std::string telefone_setado,
                          std::string senha_setado) {
    cria_USUARIO();
    Nome->set_nome(nome_setado);
    Apelido->set_apelido(apelido_setado);
    Telefone->set_telefone(telefone_setado);
    Senha->set_senha(senha_setado);
}

void USUARIO::get_USUARIO(std::string *nome_setado, std::string *apelido_setado, std::string *telefone_setado,
                          std::string *senha_setado) {
    *nome_setado = Nome->get_nome();
    *apelido_setado = Apelido->get_apelido();
    *telefone_setado = Telefone->get_telefone();
    *senha_setado = Senha->get_senha();
}

void USUARIO::deleta_USUARIO() {
    delete Nome;
    delete Apelido;
    delete Telefone;
    delete Senha;
}

void LIVRO::cria_LIVRO() {
    if(Titulo == NULL && Data == NULL && Codigo == NULL && Genero == NULL){
        Titulo = new titulo();
        Data = new data();
        Codigo = new codigo();
        Genero = new genero();
    }

}
void LIVRO::set_LIVRO(std::string Titulo_setado, std::string Data_setado, std::string Codigo_setado,
                      std::string Genero_setado) {
    cria_LIVRO();
    Titulo->set_titulo(Titulo_setado);
    Data->set_data(Data_setado);
    Codigo->set_codigo(Codigo_setado);
    Genero->set_genero(Genero_setado);
}

void LIVRO::get_LIVRO(std::string *Titulo_setado, std::string *Data_setado, std::string *Codigo_setado,
                      std::string *Genero_setado) {
    *Titulo_setado = Titulo->get_titulo();
    *Data_setado = Data->get_data();
    *Codigo_setado = Codigo->get_codigo();
    *Genero_setado = Genero->get_genero();
}

void LIVRO::deleta_LIVRO() {
    delete Titulo;
    delete Data;
    delete Codigo;
    delete Genero;
}

void RESENHA::cria_RESENHA() {
    if(Titulo == NULL && Codigo == NULL && Texto == NULL){
        Titulo = new titulo();
        Codigo = new codigo();
        Texto = new texto();
    }

}
void RESENHA::set_RESENHA(std::string Titulo_setado, std::string Codigo_setado,
                          std::string Texto_setado) {
    cria_RESENHA();
    Titulo->set_titulo(Titulo_setado);
    Codigo->set_codigo(Codigo_setado);
    Texto->set_texto(Texto_setado);
}

void RESENHA::get_RESENHA(std::string *Titulo_setado, std::string *Codigo_setado,
                          std::string *Texto_setado) {
    *Titulo_setado = Titulo->get_titulo();
    *Codigo_setado = Codigo->get_codigo();
    *Texto_setado = Texto->get_texto();
}

void RESENHA::deleta_RESENHA() {
    delete Titulo;
    delete Codigo;
    delete Texto;
}
