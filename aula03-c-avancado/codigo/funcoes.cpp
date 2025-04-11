#include<bits/stdc++.h>
using namespace std;

// Funções servem para reutilizar código e/ou deixam
// o código mais claro.
int minhaFuncao(int argumento1, int argumento2) {
    return argumento1*argumento1 + argumento2; 
}

int f(int x) {
    return x*x + 2*x + 3;
}

void procedimento(int arg1, string arg2) {
    // Qualquer código pode ficar nas funções
    int var = 10;
    for(int i=0; i<10; i++) {
        cout << i << ' ';
    }
    cout << endl;
}

// vector será passado por cópia!!
// A chamada dessa função agora é O(n)
void funcaoVector(vector<int> v) {
    cout << v.size();
    v[1] = 10;
}

// vector agora é passado por referência
// CUIDADO: Qualquer mudança em v agora afeta o vector original
void funcaoVectorReferencia(vector<int> &v) {
    cout << v.size();
    v[1] = 10; // Afeta o vector original
}

int main() {
    vector<int> v(10);

    // v continuou igual
    funcaoVector(v);

    // Muda o v!!
    funcaoVectorReferencia(v);

    int t;
    cin >> t;

    cout << f(f(f(t) + t) + f(f(t)));
}
