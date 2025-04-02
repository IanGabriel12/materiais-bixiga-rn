#include <bits/stdc++.h>

using namespace std;

int main() {
  set<int> s = {1, 2, 3};
  cout << (s.count(2) > 0 ? "Sim" : "Não") << endl; // Sim
  s.erase(2);

  // unordered_set
  unordered_set<int> us = {1, 2, 3};
  us.insert(4);
  cout << (us.find(2) != us.end() ? "Sim" : "Não") << endl;

  // multiset
  multiset<int> ms = {1, 1, 2, 2, 3};
  ms.erase(ms.find(1)); // Remove apenas um '1'
  cout << ms.count(1) << endl; // Ainda existe um '1'
}