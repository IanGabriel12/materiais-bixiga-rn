#include<bits/stdc++.h>
using namespace std;


vector<int> moedas = {3, 6, 8, 10, 20};

bool consigoSomarX(int x) {
    if(x == 0) return true;
    if(x < 0) return false;

    for(int c : moedas) {
        if(consigoSomarX(x - c)) {
            return true;
        }
    }
    return false;
}


int main() {
    int n;
    cin >> n;


}
