#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, int> m;
  m["Bixiga"] = 100;
  cout << m["Bixiga"] << endl;

  // unordered_map
  unordered_map<string, int> um;
  um["Bixiga"] = 200;
  cout << um["Bixiga"] << endl;

  // multimap
  multimap<string, int> mm;
  mm.insert({"Bixiga", 100});
  mm.insert({"Bixiga", 200});
  for (auto &[key, value] : mm) cout << key << " " << value << endl;
}