#include<bits/stdc++.h>
using namespace std;

int main() {
	// Ponteiros armazemam endereços de memória
	int x = 10;
	int *ponteiro = &x;
	int y = 20;

	*ponteiro = 15;
	ponteiro = &y; // Agora o ponteiro aponta para y
	*ponteiro = 35;

    // Valor da variável que o ponteiro aponta
	cout << *ponteiro << endl; 

	// imprime 15 e 35
	cout << x << ' ' << y << endl;
	
	int n = 10;
	int arr[n]; // arr é um ponteiro!
	*(arr) = 1; // Mesmo que arr[0] = 1
    
    // arr[i] é o mesmo que *(arr + i)
	cout << *(arr + 4) << endl; 	
    sort(arr, arr + n);

    // Podemos fazer operações com ponteiros
    // Ponteiro + numero -> Retorna o ponteiro `numero` posições de memória a frente
    // Ponteiro - Ponteiro -> Retorna a distância entre os ponteiros na memória
    
    // Imprime arr[5] e 3
    cout << *(arr + 5) << endl;
    cout << (arr + 5) - (arr + 2) << endl;

	// Referências são meros apelidos para variáveis
	int variavel_com_nome_muito_grande = 50;
	int &z = variavel_com_nome_muito_grande;
	
	z = min(z, 10);

	// Iterators adicionam uma camada de segurança aos ponteiros
	// Para o vector, podemos fazer contas com os iterators em O(1);
	
	vector<int> v(n);
	for(int &x : v) x = 5;
	
	// Conta quantos números 5 tem no vector
	int cnt = upper_bound(v.begin(), v.end(), 5) -
        lower_bound(v.begin(), v.end(), 5);

	cout << *(v.begin() + 5); // acesso ao sexto elemento

}
