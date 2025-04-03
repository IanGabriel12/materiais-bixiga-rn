#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, int> m;
  // Inserção - O(log n), pode ser feita com o operador [] ou o método insert
  m["Bixiga"] = 100;
  m.insert({"Maratona",200});

  // Busca - O(log n)
  if (m.count("Bixiga") > 0) cout << m["Bixiga"] << endl; // 100
  else cout << "Não tem Bixiga" << endl;

  //lower_bound e upper_bound no map
  auto [chave_lb, valor_lb] = *m.upper_bound("Bixiga");
  auto [chave_ub, valor_ub] = *m.upper_bound("Bixiga");

  cout << chave_lb << " " << valor_lb << endl; // Bixiga 100
  cout << chave_ub << " " << valor_ub << endl; // Maratona 200

  // unordered_map
  unordered_map<string, int> um;
  um["Bixiga"] = 200;
  cout << um["Bixiga"] << endl; // Bixiga 200

  // multimap
  multimap<string, int> mm;
  mm.insert({"Bixiga", 100});
  mm.insert({"Bixiga", 200});

  // Podemos combinar for each com strucutured binding para iterar nos maps
  for (auto &[key, value] : mm) cout << key << " " << value << endl;
}