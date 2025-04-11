#include<bits/stdc++.h>
using namespace std;

struct MinhaStruct {
    int attr1;
    int attr2;
    int attr3;
    
    // Podemos implementar nossos operadores para nossos tipos
    bool operator<(const MinhaStruct &rhs) const {
        if(attr2 == rhs.attr2) 
            return attr3 < rhs.attr3;

        return attr1 < rhs.attr1;
    }

    // Agora podemos fazer a < b para dois caras do tipo MinhaStruct
};


// Podemos passar nossa própria comparação para o sort.
// Esta função deve retornar true quando 'a' vier antes do b
// na sua ordem.
// Sua função deve seguir algumas regras, senão o comportamento
// do sort será indefinido.
// 1. Irreflexividade - !(a < a)
// 2. Totalidade - a < b ou b < a
// 3. Assimetria - se a < b então !(b < a)
// 4. Transitividade - se a < b e b < c então a < c
bool meu_comparador(MinhaStruct a, MinhaStruct b) {
    return a.attr2 < b.attr1;
}

int main() {
    // sort(inicio, fim)
    // ordena os elementos no intervalo.
    // por padrão, faz isso na ordem crescente (o menor vem primeiro)

    vector<int> u = {4, 3, 10, 5, 1};
    sort(u.begin(), u.end());
    // u agora é {4, 3, 10, 5, 1}

    
    // Podemos usar comparadores customizados para o sort [veja struct]
    int n = 10;
    vector<MinhaStruct> v(n);

    sort(v.begin(), v.end());

    sort(v.begin(), v.end(), meu_comparador);

    vector<int> inteiros = {1, 3, 10, 13, 15};

    
    // lower_bound(inicio, fim, x)
    // Retorna o primeiro elemento entre o inicio e o fim
    // maior ou igual a x.
    // Retorna um interator para este elemento
    auto lb = lower_bound(inteiros.begin(), inteiros.end(), 10);

    // upper_bound(inicio, fim, x)
    // Retorna um iterator para o primeiro elemento maior que x.
    auto ub = upper_bound(inteiros.begin(), inteiros.end(), 10);
    
    // 10 13
    cout << *lb << ' ' << *ub << endl;
    
    // next_permutation gera a próxima permutação de uma lista
    // na ordem lexicográfica
    bool acabou = next_permutation(inteiros.begin(), inteiros.end());
    // Retorna true se a próxima permutação é de fato a próxima na ordem
    // lexicográfica
    // (usamos isso para ver se já passamos por todas as permutações)


    // Iterando por todas as permutações de um vector
    vector<int> p = {4, 3, 1, 10, 3};

    // Começamos da menor permutação (que é quando ela está ordenada)
    sort(p.begin(), p.end());

    do {
        for(int x : p) {
            cout << x << ' ';
        }
        cout << endl;
    } while(next_permutation(p.begin(), p.end()));
}
