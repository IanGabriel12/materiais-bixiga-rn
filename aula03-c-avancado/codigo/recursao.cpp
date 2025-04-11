#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if(n == 0) return 1;
    if(n == 1) return 2;
    return fibonacci(n-1) + fibonacci(n-2);
}

int fatorial(int n) {
    if(n == 0) return 1;
    return n*fatorial(n-1);
}

vector<int> moedas = {2, 3, 5, 7};

bool consigo(int x) {
    return false; // implementação na aula
}

int main() {
    cout << fibonacci(2) << endl;
    cout << fatorial(10) << endl;
}
