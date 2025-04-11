#include<bits/stdc++.h>
using namespace std;



struct Pessoa {
    string nome; int idade;

    Pessoa() {}
    Pessoa(string _nome, int _idade) {
        nome = _nome;
        idade = _idade;
    }
};
    
struct MeuTipo {
    int atributo1;
    string atributo2;

    MeuTipo() {} // Contrutor vazio, não é obrigado a chamá-lo, mas é legal declarar
    
    // Construtor: Função que será executada quando o objeto for criado
    MeuTipo(int argumento) {
        atributo1 = argumento * 10;
        atributo2 = string(argumento, '0');
    }

    int metodo(int x) {
        return 0;
    }
    
    void imprima() {
        cout << atributo1 << ' ' << atributo2 << endl;
    }
};

int main() {
    // Aqui ele chama o construtor vazio. Se ele não existe, já era...
    MeuTipo carinhaDoMeuTipo;
    
    // Chamou o contrutor passando 10 como argumento
    MeuTipo outroCarinha(10); 

    cout << carinhaDoMeuTipo.atributo1 << endl;
    cout << carinhaDoMeuTipo.atributo2 << endl;

    carinhaDoMeuTipo.atributo1 = 10;
    carinhaDoMeuTipo.atributo2 = "123";

    carinhaDoMeuTipo.imprima();
}
