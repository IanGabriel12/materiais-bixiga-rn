#include <bits/stdc++.h>

using namespace std;

int main() {
  queue<int> q;
  //Inserindo elementos no fim - O(1)
  q.push(1);
  q.push(2);

  cout << q.front() << endl; // 1
  
  //Removendo elementos da frente - O(1)
  q.pop();
}