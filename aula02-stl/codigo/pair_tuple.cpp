#include <bits/stdc++.h>

using namespace std;

int main() {
  // pair
  pair<int,int> pii = {1,2};
  pii = make_pair(2,1);
  
  // Acesso com Structured binding
  auto [f,s] = pii;
  // Acesso direto aos membros
  cout << pii.first << ' ' << pii.second << '\n';

  // tuple
  tuple<int,int,int>tup = {1,2,3}; //pode ter quantos elementos vc quiser
  tup = make_tuple(1,2,3);
  
  // Acesso com Structured binding
  auto [x,y,z] = tup; 
  // Acesso com tie
  int a,b,c;
  tie(a,b,c) = tup;
  // Acesso com get
  int i,j,k;
  i = get<0>(tup);
  j = get<1>(tup);
  k = get<1>(tup);
  
}