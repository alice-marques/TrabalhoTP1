//
// Created by andre on 9/13/17.
//

#include "dominios.h"
const int valor_maximo_letra_minuscula = 122;
const int valor_minimo_letra = 32;
const int valor_minimo_letra_maiuscula = 65;
const int valor_maximo_letra_maiuscula = 90;
const int valor_minimo_letra_minuscula = 97;
const int valor_minimo_numero = 48;
const int valor_maximo_numero = 57;
const char epopeia[8] = "EPOPEIA";
const char romance[8] = "ROMANCE";
const char novela[7] = "NOVELA";
const char ensaio[7] = "ENSAIO";
const char conto[6] = "CONTO";



int nome::valida(std::string nome_validar) {
    int indice = 0;
    while(nome_validar[indice] != '\0'){
        if((nome_validar[indice] > valor_maximo_letra_minuscula) ||
           (nome_validar[indice] < valor_minimo_letra) ||
           ((nome_validar[indice] > valor_minimo_letra) &&
            (nome_validar[indice] < valor_minimo_letra_maiuscula)) ||
           ((nome_validar[indice] > valor_maximo_letra_maiuscula) &&
            nome_validar[indice] < valor_minimo_letra_minuscula))
            return -1;
        indice++;
        if(indice > 16) return -1;
    }

    return 0;
}

void nome::set_nome(std::string nome_recebido){
    int flag = valida(nome_recebido);
    if(flag != -1)
        nome = nome_recebido;
}

std::string nome::get_nome(){
    return nome;
}

int apelido::valida(std::string apelido_validar) {
    int indice = 0;
    while(apelido_validar[indice] != '\0'){
        if(indice > 5) return -1;
        indice++;
        if(indice > 6) return -1;
    }

    return 0;
}

void apelido::set_apelido(std::string apelido_recebido) {
    int flag = valida(apelido_recebido);
    if(flag != -1) apelido = apelido_recebido;
}

std::string apelido::get_apelido(){
    return apelido;
}

int telefone::valida(std::string telefone_validar) {
    int indice = 0;
    while(telefone_validar[indice] != '\0'){
        if(telefone_validar[indice] > valor_maximo_numero || telefone_validar[indice] < valor_minimo_numero) return -1;
        indice++;
        if(indice > 12) return -1;
    }
    return 0;
}

void telefone::set_telefone(std::string telefone_recebido) {
    int flag = valida(telefone_recebido);
    if(flag != -1) telefone = telefone_recebido;
}

std::string telefone::get_telefone(){
    return telefone;
}

int senha::valida(std::string senha_validar) {
    int indice = 0;
    while(senha_validar[indice] != '\0') {
        if (senha_validar[indice] < valor_minimo_letra_maiuscula ||
            ((senha_validar[indice] > valor_maximo_letra_maiuscula) &&
             senha_validar[indice] < valor_minimo_letra_minuscula) ||
            senha_validar[indice] > valor_maximo_letra_minuscula)
            return -1;
        indice++;
        if(senha_validar[indice] == senha_validar[indice-1]) return -1;
        if(indice > 6) return -1;
    }
    return 0;
}

void senha::set_senha(std::string senha_recebido) {
    int flag = valida(senha_recebido);
    if(flag != -1) senha = senha_recebido;
}

std::string senha::get_senha(){
    return senha;
}

int titulo::valida(std::string titulo_validar) {
    int indice = 0;
    while(titulo_validar[indice] != '\0') {
        if (titulo_validar[indice] == ' ')
            if(titulo_validar[indice] == titulo_validar[indice-1]) return -1;
        indice++;
        if(indice > 21) return -1;
    }
    return 0;
}

void titulo::set_titulo(std::string titulo_recebido) {
    int flag = valida(titulo_recebido);
    if(flag != -1) titulo = titulo_recebido;
}

std::string titulo::get_titulo(){
    return titulo;
}

int data::valida(std::string data_validar) {
    int indice = 0;
    while(data_validar[indice] != '\0') {
        if (data_validar[indice] < valor_minimo_numero || data_validar[indice] > valor_maximo_numero) return -1;
        indice++;
        if(indice > 7) return -1;
    }
    if(data_validar[0] > 51 || ((data_validar[0] == 51) && (data_validar[1] > 49)) || (data_validar[2] > 49 || (data_validar[2] == 49 && data_validar[3] > 50))) return -1;
    return 0;
}

void data::set_data(std::string data_recebido) {
    int flag = valida(data_recebido);
    if(flag != -1) data = data_recebido;
}

std::string data::get_data(){
    return data;
}

int codigo::valida(std::string codigo_validar) {
    int indice = 0;
    while(codigo_validar[indice] != '\0') {
        if (codigo_validar[indice] < valor_minimo_numero || codigo_validar[indice] > valor_maximo_numero) return -1;
        indice++;
        if(indice >= 6) return -1;
    }
    return 0;
}

void codigo::set_codigo(std::string codigo_recebido) {
    int flag = valida(codigo_recebido);
    if(flag != -1) codigo = codigo_recebido;
}

std::string codigo::get_codigo(){
    return codigo;
}

int texto::valida(std::string texto_validar) {
    int indice = 0;
    while(texto_validar[indice] != '\0') {
        indice++;
        if(indice > 41) return -1;
    }
    return 0;
}

void texto::set_texto(std::string texto_recebido) {
    int flag = valida(texto_recebido);
    if(flag != -1) texto = texto_recebido;
}

std::string texto::get_texto(){
    return texto;
}

int genero::valida(std::string genero_validar) {
    int indice = 0;
    while(genero_validar[indice] != '\0') {
        if (genero_validar[indice] != epopeia[indice] && genero_validar[indice] != romance[indice] && genero_validar[indice] != novela[indice] && genero_validar[indice] != ensaio[indice] && genero_validar[indice] != conto[indice])
            return -1;
        indice++;
    }
    return 0;
}

void genero::set_genero(std::string genero_recebido) {
    int flag = valida(genero_recebido);
    if(flag != -1) genero = genero_recebido;
}

std::string genero::get_genero(){
    return genero;
}
