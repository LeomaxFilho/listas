#ifndef grafo

#include <iostream>
#include <vector>
#include <list>
#include <fstream>
#include <queue>
#include <utility>

class grafo
{
private:
    int** adj_matrix; // * é uma matriz de adjacencia implementada dinamicamente
    std::vector<std::list<std::pair<int, int>>> adj_list; // * um vetor de listas encadeadas, formando uma lista de adjacencia
    int num_vertices;
    void dfs_visto(int v, bool visto[]);
public:
    grafo(int num);
    ~grafo();
    void add_node(int i, int j, int val);
    void from_file(std::string file_name); // * le arquivos a partir de um arquivo
    void to_string_matrix();
    void to_string_list();
    void dfs(int inicio); // * busca em profundidade
    void bfs(int inicio); // * busca em largura
};

#endif // !grafo(grafo)