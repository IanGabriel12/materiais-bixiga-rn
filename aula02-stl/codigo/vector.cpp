#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3};
  v.push_back(4); // Inserção - O(1) amortizado
  v.reserve(100); // Aloca espaço para evitar realocações
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
  sort(v.begin(), v.end(), greater<int>()); // Alternativa
  
  // lower_bound e upper_bound
  vector<int> v2b = {1, 3, 3, 5, 7};
  cout << lower_bound(v2b.begin(), v2b.end(), 3) - v2b.begin() << endl; // Índice de 3
  cout << upper_bound(v2b.begin(), v2b.end(), 3) - v2b.begin() << endl; // Índice após 3 
}