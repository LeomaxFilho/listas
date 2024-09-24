# Listas

<details><summary> <strong>Sumário</strong></summary>

* [Lista Sequencial](https://github.com/LeomaxFilho/listas?tab=readme-ov-file#lista-sequencial)

* [Lista Encadeada](https://github.com/LeomaxFilho/listas?tab=readme-ov-file#lista-encadeada)
  
* [Fila Encadeada](https://github.com/LeomaxFilho/listas#fila-sequencial)

* [Grafos](https://github.com/LeomaxFilho/listas#grafos)
</details>


## Lista Sequencial
### Algoritimo
  Para a implementação de uma lista sequencial se utiliza do array de C, para uma implementação mais completa se adiciona métodos para adicionar e remover valores
  
#### A imagem mostra o processo do algoritimo de inserção:

![Imagem1](/Lista_seq/Insere.png)

#### A imagem mostra o processo do algoritimo de remoção:

![Imagem2](/Lista_seq/Remove.png)

## Lista Encadeada
### Algoritimo
  Para a implementação de uma lista encadeado uma lista composta por nós, os quais armazenam o valor e o ponteiro que aponta para o próximo indice, sendo ele o ultimo da lista, aponta para nullptr

  #### A imagem mostra o processo do algoritimo de inserção:

![Imagem3](/Lista_enc/Adicionar_how.png)

#### A imagem mostra o processo do algoritimo de remoção:

![Imagem4](/Lista_enc/Remover_how.png)

## Fila Sequencial
### Algoritimo
  Funciona principalmente como uma lista sequencial circular, onde obedece as regras do FIFO (first in, first out)
  
#### A imagem mostra o processo do algoritimo de remoção e insreção:

![Imagem5](/Fila_enc/How.png)

### Compile and Run
Requires [make](https://www.gnu.org/software/make/)
Inside the path
```console
foo@bar:~$ make
```
Limpe os arquivos desnecessários
```console
foo@bar:~$ make clean
```
Exemplos
```console
foo@bar:~$ make run
```
## Grafos
  Um grafo, em termos simples, é uma maneira de representar conexões entre coisas. Imagine, por exemplo, uma rede de amigos: cada pessoa é um nó e a amizade entre elas é uma aresta. Se duas pessoas são amigas, há uma aresta conectando os dois nós.

#### Estrutura de um grafo:

![Imagem6](/Grafos/imgs/Graph.png)

#### Estrutura de um grafo implementada por matriz de adjacência:

![Imagem7](/Grafos/imgs/Graph_mtx.png)

#### Estrutura de um grafo implementada por lista de adjacência:

![Imagem8](/Grafos/imgs/Graph_lst.png)
