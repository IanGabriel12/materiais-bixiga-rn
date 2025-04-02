# Roteiro de Aula

## TODO
- [X] Definir a ordem dos tópicos
- [ ] Preparar Snippets das Estruturas e Funções <!--EM PROGRESSO-->
- [ ] Preparar Slides <!--EM PROGRESSO-->
- [ ] Criar Contest no Vjudge

Ordem dos tópicos:
1. O que são Estruturas de Dados
2. O que é a STL e por que aprender sobre ela?
3. std::array
4. vector
5. sort()
6. lower_bound() & upper_bound()
7. stack
8. queue
9. deque
10. priority_queue
11. set
12. unordered_set
13. multiset
14. map
15. unordered_map
16. multimap

## O que são Estruturas de Dados?
...

## O que é a STL e por que aprender sobre ela?
- Biblioteca Padrão do C++
- Contém implementações eficientes de funções e estruturas de dados

## std::array
**Principais Características**
- Tamanho constante e conhecido durante a compilação
- Acesso Aleatório em O(1)

## vector
**Principais Características**
- Tamanho variável
- Inserção em O(1) (Amortizado) 
- **OBS?** Apesar de ter inserção constante, é altamente recomendável que o espaço necessário seja alocado previamente com reserve(),resize(),assign(),etc.
- Acesso Aleatório em O(1)
- Tão rápido quanto o array em uma dimensão

## sort()
<!-- Menciono a existência de reverse iterator? Já q ele pode ser usado pra ordenar em ordem inversa-->
- Ordena um certo intervalo em um container, suporta funções de Comparação personalizadas. Exemplo: sort(v.begin(),v.end(),greater<int>())
- Permite Ordenação Invertida com iteradores inversos: sort(rbegin(),rend())

## lower_bound() & upper_bound()
**lower_bound** - Encontra o primeiro elemento que **não é menor que (aka maior ou igual a)** o valor dado.
**upper_bound** - Encontra o primeiro elemento que **não é menor ou igual (aka maior que)** ao valor dado.

- Assumem que o intervalo dado já está ordenado
- Suportam Funções de Comparação personalizadas.

## stack
**Principais Características**
- LIFO (Last In, First Out)
- Acesso apenas ao elemento do topo
- Inserção e Remoção em O(1)
- tão rápido quando o vector

## queue
**Principais Características**
- FIFO (First In, First Out)
- Acesso apenas ao elemento da frente
- Lento (É uma adaptação do deque)

## deque
**Principais Características**
- Inserções no início e no final em O(1)
- **LENTO**
- Acesso aleatório em O(1)

## priority_queue
**Principais Características**
- Mantém o maior no topo
- Inserção em O(log n)
- Suporta Comparadores personalizados. Exemplo: priority_queue<int, vector<int>, greater<int>> pq;
- Constante baixa

## set
**Principais Características**
<!-- Mencionar a busca usando set.count() > 0 e usando set.find() != set.end()-->
- Inserção, Remoção e Busca em O(log n)
- Busca pode ser feita com .count() ou .find()
- Não aceita chaves repetidas
- **OBS:** para o lower_bound e upper_bound, deve ser usado o método do próprio set ao invés da função padrão da STL.

## unordered_set
**Principais Características**
- Inserção, Remoção e Busca em O(1) (esperado)
- Sem métodos de busca binária
- Risco de Colisões (Baixo mas existente)
- Constante Alta

## multiset
**Principais Caracterísiticas**
- Suporta Chaves repetidas
<!-- Nas versões multi, o erase() remove todos os elementos correspondentes à uma chave, a remoção de somente um elemento com essa chave ainda pode ser feita com a passagem de um iterator ao invés de valor de chave -->
- Comportamento diferente das funções insert() e erase()
- erase(valor de uma chave) apaga **todas** as ocorrências dessa chave, para apagar somente um elemento precisa passar um iterador
- Operador [] não existe

## map
**Principais Características**
<!-- Mencionar a busca usando map.count() > 0 e usando map.find() != map.end()-->
- Mesma complexidade das operações do set
- Busca também pode ser feita com .count() ou .find()
- Pares Chave-Valor
- Também não aceita chaves repetidas 
- **OBS:** para o lower_bound e upper_bound, deve ser usado o método do próprio map ao invés da função padrão da STL.

## unordered_map
**Principais Características**
- Relação com o map similar à relação do unordered_set com set

## multimap
**Principais Caracterísiticas**
- Suporta Chaves repetidas
<!-- Nas versões multi, o erase() remove todos os elementos correspondentes à uma chave, a remoção de somente um elemento com essa chave ainda pode ser feita com a passagem de um iterator ao invés de valor de chave -->
- Comportamento diferente das funções insert() e erase()
- erase(valor de uma chave) apaga **todas** as ocorrências dessa chave, para apagar somente um elemento precisa passar um iterador
- Operador [] não existe

