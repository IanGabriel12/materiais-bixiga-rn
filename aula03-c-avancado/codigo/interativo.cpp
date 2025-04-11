#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;

    while(true) {
        cout << 5 << ' ' << 5 << endl;
        string resposta;
        cin >> resposta;

        if(resposta == "Bad") {
            // Você fez uma pergunta inválida ou
            // estourou a quantidade de perguntas
            return 0;
        } else if (resposta == "Yes") {
            // resposta é SIM
            return 0;
        } else if (resposta == "No") {
            // resposta é NÃO 
        }

    }
}
