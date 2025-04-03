#include <bits/stdc++.h>

using namespace std;

int main() {
  // Priorizando o Máximo (Padrão)
  priority_queue<int> pq;

  //Inserções - O(log n)
  pq.push(3); 
  pq.push(5); 
  pq.push(1);
  
  cout << pq.top() << endl; // 5

  //Remoção do maior elemento - O(log n)
  pq.pop();
  
  //Priorizando o Mínimo
  priority_queue<int, vector<int>, greater<int>> pq_min;
  
  pq_min.push(3); 
  pq_min.push(5);
  
  cout << pq_min.top() << endl; // 3
}