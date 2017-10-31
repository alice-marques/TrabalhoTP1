#include "testes.h"
#include "testesEntidades.h"

using namespace std;

int main(){
    TUNome *Nome  = new TUNome();
    TUApelido *Apelido  = new TUApelido();
    TUTelefone *Telefone  = new TUTelefone();
    TUSenha *Senha  = new TUSenha();
    TUTitulo *Titulo  = new TUTitulo();
    TUData *Data  = new TUData();
    TUCodigo *Codigo  = new TUCodigo();
    TUTexto *Texto  = new TUTexto();
    TUGenero *Genero  = new TUGenero();
    TUUsuario *Usuario = new TUUsuario();
    TULivro *Livro = new TULivro();
    TUResenha *Resenha = new TUResenha();
    Nome->run();
    Apelido->run();
    Telefone->run();
    Senha->run();
    Titulo->run();
    Data->run();
    Codigo->run();
    Texto->run();
    Genero->run();
    Usuario->run();
    Livro->run();
    Resenha->run();
    return 0;
}
