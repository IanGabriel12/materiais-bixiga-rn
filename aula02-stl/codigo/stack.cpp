#include <bits/stdc++.h>

using namespace std;

int main() {
  stack<int> s;
 
  // Inserindo elementos no topo - O(1)
  s.push(10); 
  s.push(20);

  cout << s.top() << endl; // 20
 
  // Removendo elementos do topo - O(1)
  s.pop();
}