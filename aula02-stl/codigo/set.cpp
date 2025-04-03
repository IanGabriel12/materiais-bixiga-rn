#include <bits/stdc++.h>

using namespace std;

int main() {
  set<int> s = {1, 2, 3};

  // Busca por elementos - O(log n)
  if (s.count(2) > 0) cout << "Sim" << endl; // Sim
  else cout << "Não" << endl;
  
  // Inserção e Remoção de Elementos - O(log n)
  s.insert(-1);
  s.erase(2);

  // lower_bound e upper_bound no set
  cout << *s.lower_bound(1) << endl; // 1
  cout << *s.upper_bound(1) << endl; // 3

  // unordered_set
  unordered_set<int> us = {1, 2, 3};
  
  //Busca por elementos - O(1)
  if (us.count(2) > 0) cout << "Sim" << endl; // Sim
  else cout << "Não" << endl; 
  
  //Inserção e Remoção de Elementos - O(1)
  us.insert(4);
  us.erase(2);

  //Não tem lower_bound e upper_bound

  // multiset
  multiset<int> ms = {1, 1, 2, 2, 3};
  
  // Remoção de Chave
  ms.erase(2);
  
  // Todas as ocorrências da chave 2 foram removidas 
  cout << ms.count(2) << endl; // 0

  // Remove somente um elemento com a chave especificada
  ms.erase(ms.find(1)); 
  
  // Ainda existe um '1'
  cout << ms.count(1) << endl; // 1

}