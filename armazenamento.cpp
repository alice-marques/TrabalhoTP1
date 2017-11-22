//
// Created by andre on 11/13/17.
//
#include <iostream>
#include "armazenamento.h"

bancoDeDados* bancoDeDados::instance = nullptr;

bancoDeDados* bancoDeDados::getInstance() {
    if(instance == nullptr) instance = new bancoDeDados();
    return instance;
}

bancoDeDados::bancoDeDados(){
    usuario = USUARIO::getInstance();
}

bool bancoDeDados::setaUsuario(std::string nome, std::string apelido, std::string telefone, std::string senha) {
    usuario->set_USUARIO(nome, apelido,telefone, senha);
}

bool bancoDeDados::buscaESetaUsuario(std::string apelido, USUARIO *user) {
    auto i = usuarios.begin();
    for(i; i != usuarios.end(); i++ ){
        if(i->Apelido->get_apelido() == apelido)
            return setaUsuario(i->Nome->get_nome(), i->Apelido->get_apelido(), i->Telefone->get_telefone(),
                               i->Senha->get_senha());
    }
    return false;
}


bool bancoDeDados::armazena() {
    USUARIO *usuarioTemp = USUARIO::createAux();
    usuario = USUARIO::getInstance();
    usuarioTemp->set_USUARIO(usuario->Nome->get_nome(), usuario->Apelido->get_apelido(), usuario->Telefone->get_telefone(), usuario->Senha->get_senha());
    usuarios.push_back(*usuarioTemp);
    return (usuario->Apelido->get_apelido() == usuarios.back().Apelido->get_apelido()) &&
    (usuario->Senha->get_senha() == usuarios.back().Senha->get_senha());
}

bool bancoDeDados::armazenaLivro(LIVRO livro) {
    auto *livroAux = new LIVRO();
    usuario = USUARIO::getInstance();
    livroAux->set_LIVRO(livro.Titulo->get_titulo(), livro.Nome->get_nome(), livro.Data->get_data(), livro.Codigo->get_codigo(), livro.Genero->get_genero());
    auto i = usuarios.begin();
    auto est = usuario->estante.begin();
    for(i; i != usuarios.end(); i++){
        if(i->Apelido->get_apelido() == usuario->Apelido->get_apelido()){

            for(est = i->estante.begin(); est != i->estante.end(); est++){

                if(est->Codigo->get_codigo() == livro.Codigo->get_codigo()) return false;
            }

            i->estante.push_back(*livroAux);
            usuario->estante.push_back(*livroAux);
            cout << "\nLivro inserido com sucesso\n\n";

        }
    }
    return true;
}

bool bancoDeDados::numeroDeLivros(LIVRO livro) {
    usuario = USUARIO::getInstance();
    int n = 1;
    auto i = usuarios.begin();
    auto est = usuario->estante.begin();
    for(i; i != usuarios.end(); i++){
        if(i->Apelido->get_apelido() == usuario->Apelido->get_apelido()){
            for(est = i->estante.begin(); est != i->estante.end(); est++){
                n+=1;
            }
        }
    }
    if(n >= 10){
        cout << "\nVoce ja tem livros de mais na estante\n\n";
        return false;
    }
    if(armazenaLivro(livro)) return true;
    cout << "\nO livro ja esta na estante\n\n";
    return false;
}

bool bancoDeDados::retiraLivro(std::string livro) {
    usuario = USUARIO::getInstance();
    int n = 0;
    auto i = usuarios.begin();
    auto est = usuario->estante.begin();
    for(i; i != usuarios.end(); i++){
        if(i->Apelido->get_apelido() == usuario->Apelido->get_apelido()){
            for(est = i->estante.begin(); est != i->estante.end(); est++){
                if(est->Codigo->get_codigo() == livro){
                    est->deleta_LIVRO();
                    cout << "\nLivro deletado com sucesso\n\n";
                    return true;
                }
            }
            n+=1;
        }
    }
    cout << "\nO livro não foi encontrado na sua estante\n\n";
    return false;
}

bool bancoDeDados::procuraUsuario(string apelido) {
    USUARIO *user = USUARIO::createAux();
    auto i = usuarios.begin();
    for(i; i != usuarios.end(); i++){
        if(i->Apelido->get_apelido() == apelido) {
            cout << "\n"
                 << "O nome do usuario eh: "
                 << i->Nome->get_nome()
                 << "\n"
                 << "O apelido do usuario eh: "
                 << i->Apelido->get_apelido()
                 << "\n"
                 << "O telefone do usuario eh: "
                 << i->Telefone->get_telefone()
                 << "\n";
            return true;
        }
    }
    return false;
}

bool bancoDeDados::procuraLivro(string livro) {
    usuario = USUARIO::getInstance();
    int n = 0;
    auto i = usuarios.begin();
    auto est = usuario->estante.begin();
    for(i; i != usuarios.end(); i++){
            for(est = i->estante.begin(); est != i->estante.end(); est++){
                if(est->Titulo->get_titulo() == livro){
                    cout << "O titulo eh: " << est->Titulo->get_titulo()
                         << "\nO autor eh: " << est->Nome->get_nome()
                         << "\nA data de publicacao eh: " << est->Data->get_data()
                         << "\nO genero eh: " << est->Genero->get_genero()
                                              << "\n";
                    return true;
                }
            }
    }
    return false;
}

bool bancoDeDados::procuraLivroESetaEmprestimo(string livro, int troca) {
    usuario = USUARIO::getInstance();
    int n = 0, m = 0;
    auto i = usuarios.begin();
    auto est = usuario->estante.begin();
    for(est = usuario->estante.begin(); est != usuario->estante.end(); est++){
        if(est->Titulo->get_titulo() == livro && troca == 1){
            usuario->estante[n].desejaTrocar = true;
            for(i; i != usuarios.end(); i++){
                if(i->Apelido->get_apelido() == usuario->Apelido->get_apelido()){
                    usuarios[m].estante[n].desejaTrocar = true;
                }
                m++;
            }
            return true;
        }else if(est->Titulo->get_titulo() == livro && troca == 2){
            usuario->estante[n].desejaTrocar = false;
            for(i; i != usuarios.end(); i++){
                if(i->Apelido->get_apelido() == usuario->Apelido->get_apelido()){
                    usuarios[m].estante[n].desejaTrocar = false;
                }
                m++;
            }
            return true;
        }
        n++;
    }
    return false;
}

bool bancoDeDados::procuraLivroUsuario(string livro) {
    usuario = USUARIO::getInstance();
    int n = 0;
    auto i = usuarios.begin();
    auto est = usuario->estante.begin();
    for(est = usuario->estante.begin(); est != usuario->estante.end(); est++){
        if(est->Titulo->get_titulo() == livro) {
            return true;
        }
    }
    return false;
}

bool bancoDeDados::procuraLivroEmprestinmo(string livro) {
    usuario = USUARIO::getInstance();
    int n = 0, j = 0;
    auto i = usuarios.begin();
    auto est = usuario->estante.begin();
    for(i; i != usuarios.end(); i++){
        for(est = i->estante.begin(); est != i->estante.end(); est++){
            if(est->Titulo->get_titulo() == livro && est->desejaTrocar){
                if(j == 0){
                    cout << "\nContacte o(s) usuario(s):\n";
                    j++;
                }
                cout  << i->Apelido->get_apelido() << "\n";
                n++;
            }

        }
    }
    return n != 0;
}

