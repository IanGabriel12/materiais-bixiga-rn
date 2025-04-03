#include <bits/stdc++.h>

using namespace std;

int main() {
  deque<int> d;
  // Inserção de elementos na frente ou no fim - O(1)
  d.push_front(1);
  d.push_back(2);
  d.push_back(3);

  cout << d.front() << " " << d[1] << " " << d.back() << endl; // 1 2 3
}