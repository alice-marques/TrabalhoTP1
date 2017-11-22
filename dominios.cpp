//
// Created by andre on 9/13/17.
//

#include "dominios.h"
const int valor_ponto = 46;
const int valor_espaco = 32;
const int valor_maximo_letra_minuscula = 122;
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



bool nome::valida(std::string nome_validar) {
    int indice = 0;
    while(nome_validar[indice] != '\0'){
        if(((nome_validar[indice] > valor_maximo_letra_minuscula) ||
            (nome_validar[indice] < valor_minimo_letra_maiuscula) &&
            (nome_validar[indice] != valor_ponto) && (nome_validar[indice] != valor_espaco)) ||
           ((nome_validar[indice] > valor_maximo_letra_maiuscula) &&
            (nome_validar[indice] < valor_minimo_letra_minuscula)))
            return false;
        indice++;
        if(indice > 16) return false;
    }
    return true;
}

bool nome::set_nome(std::string nome_recebido){
    if( valida(nome_recebido) ) {
        nome = nome_recebido;
        return true;
    }
    return false;
}

std::string nome::get_nome(){
    return nome;
}

bool apelido::valida(std::string apelido_validar) {
    int indice = 0;
    while(apelido_validar[indice] != '\0'){
        if ((apelido_validar[indice] < valor_minimo_letra_maiuscula) ||
            ((apelido_validar[indice] > valor_maximo_letra_maiuscula) &&
             (apelido_validar[indice] < valor_minimo_letra_minuscula)) ||
            (apelido_validar[indice] > valor_maximo_letra_minuscula))
            return false;
        indice++;
        if(indice > 5) return false;
    }
    return true;
}
void apelido::set_apelido(std::string apelido_recebido) {
    if( valida(apelido_recebido) ) apelido = apelido_recebido;
}

std::string apelido::get_apelido(){
    return apelido;
}

bool telefone::valida(std::string telefone_validar) {
    int indice = 0;
    while(telefone_validar[indice] != '\0'){
        if(telefone_validar[indice] > valor_maximo_numero || telefone_validar[indice] < valor_minimo_numero) return false;
        indice++;
        if(indice > 11) return false;
    }
    return true;
}

void telefone::set_telefone(std::string telefone_recebido) {
    if( valida(telefone_recebido) ) telefone = telefone_recebido;
}

std::string telefone::get_telefone(){
    return telefone;
}

bool senha::valida(std::string senha_validar) {
    int indice = 0;
    while(senha_validar[indice] != '\0') {
        if (senha_validar[indice] < valor_minimo_letra_maiuscula ||
            ((senha_validar[indice] > valor_maximo_letra_maiuscula) &&
             senha_validar[indice] < valor_minimo_letra_minuscula) ||
            senha_validar[indice] > valor_maximo_letra_minuscula)
            return false;
        indice++;
        if(senha_validar[indice] == senha_validar[indice-1]) return false;
        if(indice > 4) return false;
    }
    return true;
}

void senha::set_senha(std::string senha_recebido) {
    if( valida(senha_recebido) ) senha = senha_recebido;
}

std::string senha::get_senha(){
    return senha;
}

bool titulo::valida(std::string titulo_validar) {
    int indice = 0;
    while(titulo_validar[indice] != '\0') {
        if (titulo_validar[indice] == ' ')
            if(titulo_validar[indice] == titulo_validar[indice-1]) return false;
        indice++;
        if(indice > 21) return false;
    }
    return true;
}

bool titulo::set_titulo(std::string titulo_recebido) {
    if( valida(titulo_recebido)) {
        titulo = titulo_recebido;
        return true;
    }
    return false;
}

std::string titulo::get_titulo(){
    return titulo;
}

bool data::valida(std::string data_validar) {
    int indice = 0;
    while(data_validar[indice] != '\0') {
        if (data_validar[indice] < valor_minimo_numero || data_validar[indice] > valor_maximo_numero) return false;
        indice++;
        if(indice > 7) return false;
    }
    return !(data_validar[0] > 51 || ((data_validar[0] == 51) && (data_validar[1] > 49)) || (data_validar[2] > 49 || (data_validar[2] == 49 && data_validar[3] > 50)));
}

bool data::set_data(std::string data_recebido) {
    if(valida(data_recebido)){
        data = data_recebido;
        return true;
    }
    return false;
}

std::string data::get_data(){
    return data;
}

bool codigo::valida(std::string codigo_validar) {
    int indice = 0;
    while(codigo_validar[indice] != '\0') {
        if (codigo_validar[indice] < valor_minimo_numero || codigo_validar[indice] > valor_maximo_numero) return false;
        indice++;
        if(indice >= 6) return false;
    }
    return true;
}

bool codigo::set_codigo(std::string codigo_recebido) {
    if(valida(codigo_recebido)){
        codigo = codigo_recebido;
        return true;
    }
    return false;
}

std::string codigo::get_codigo(){
    return codigo;
}

bool texto::valida(std::string texto_validar) {
    int indice = 0;
    while(texto_validar[indice] != '\0') {
        indice++;
        if(indice > 41) return false;
    }
    return true;
}

bool texto::set_texto(std::string texto_recebido) {
    if(valida(texto_recebido)){
        texto = texto_recebido;
        return true;
    }
    return false;
}

std::string texto::get_texto(){
    return texto;
}

bool genero::valida(std::string genero_validar) {
    int indice = 0;
    while(genero_validar[indice] != '\0') {
        if (genero_validar[indice] != epopeia[indice] && genero_validar[indice] != romance[indice] && genero_validar[indice] != novela[indice] && genero_validar[indice] != ensaio[indice] && genero_validar[indice] != conto[indice])
            return false;
        indice++;
    }
    return true;
}

bool genero::set_genero(std::string genero_recebido) {
    if(valida(genero_recebido)){
        genero = genero_recebido;
        return true;
    }
    return false;
}

std::string genero::get_genero(){
    return genero;
}
