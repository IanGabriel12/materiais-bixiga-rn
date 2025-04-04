#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3};
  v.reserve(100); // Aloca espaço para evitar realocações
  v.resize(3); // Redimensiona o vetor
  v.assign(6,12); // Redimensiona o vetor e troca todos os valores por cópias do segundo parâmetro
  
  // Inserção/Remoção
  v.push_back(4); // Inserção - O(1) amortizado
  v.insert(v.begin() + 1, 10); // Inserção no meio - O(N)
  v.erase(v.begin() + 2); // Remoção de um elemento - O(N)
  v.pop_back(); // Remove o último elemento - O(1)
  
  cout << v.front() << " " << v.back() << endl; // Acesso ao primeiro e último elemento - O(1)
  cout << v[1] << endl; // Acesso Aleatório - O(1)
  
  // Construtores adicionais
  vector<int> v1(5); // 5 elementos padrão inicializados como 0
  vector<int> v2(5, 42); // 5 elementos inicializados como 42
  vector<int> v3(v2); // Cópia de v2

  // sort
  sort(v.begin(), v.end()); // Ordena crescente
  sort(v.rbegin(), v.rend()); // Ordena decrescente
  sort(v.begin(), v.end(), greater<int>()); // Alternativa ao de cima

  //Ordem lexicográfica
  vector<string> strs = { "ab",   // a seguido de b
                          "aba",  // a, b, a
                          "abb",  // a, b, b
                          "abc",  // a, b, c
                          "a",    // apenas a (vem antes de strings que começam com 'a' e possuem mais caracteres)
                          "ac",   // a seguido de c
                          "b",    // começa com b, maior que strings que começam com a
                          "ba",   // b, a
                          "bb"    // b, b
  };

  sort(strs.begin(),strs.end());
  /* Nova ordem:
        a
        ab
        aba
        abb
        abc
        ac
        b
        ba
        bb
  */
  for (auto s : strs) cout << s << endl;
  
  // lower_bound e upper_bound
  vector<int> v2b = {1, 3, 3, 5, 7};
  cout << lower_bound(v2b.begin(), v2b.end(), 3) - v2b.begin() << endl; // Índice de 3
  cout << upper_bound(v2b.begin(), v2b.end(), 3) - v2b.begin() << endl; // Índice após 3 
}