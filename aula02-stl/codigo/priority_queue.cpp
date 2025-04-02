#include <bits/stdc++.h>

using namespace std;

int main() {
  priority_queue<int> pq;
  pq.push(3); pq.push(5); pq.push(1);
  cout << pq.top() << endl; // 5
  
  //Priorizando o minimo
  priority_queue<int, vector<int>, greater<int>> pq_min;
  pq_min.push(3); pq_min.push(5);
  cout << pq_min.top() << endl; // 3
}