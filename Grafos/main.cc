#include "grafo.cc"

int main(int argc, char const *argv[])
{
    if (argc < 0)
    {
        perror("[ERROR] Faltando indíces");
        exit(EXIT_FAILURE);
    }

    int count;
    std::ifstream file(argv[1]);
    file >> count;
    file.close();

    grafo graph(count);
    graph.from_file(argv[1]);
    graph.to_string_matrix();

    graph.to_string_list();
    graph.dfs(2);
    graph.bfs(2);

    return 0;
}