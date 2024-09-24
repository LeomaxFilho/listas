#include "grafo.hh"

grafo::grafo(int num)
{
    num_vertices = num; // * cria um grafo com o numero de vertices especificados;
    adj_list.resize(num_vertices);
    adj_matrix = new int*[num_vertices];

    for (int i = 0; i < num_vertices; i++)
    {
        adj_matrix[i] = new int [num_vertices];

        for (int j = 0; j < num_vertices; j++){
            adj_matrix[i][j] = 0;   // * coloca todos os indices da matriz como 0
            adj_list[i].push_back(std::make_pair(j, 0));
        }
    }
}

grafo::~grafo()
{
    for (int i = 0; i < num_vertices; i++)
    {
        delete[] adj_matrix[i];
    }
    delete[] adj_matrix;
}

void grafo::add_node(int i, int j, int val){

    adj_matrix[i][j] = val;
    adj_list[i].push_back(std::make_pair(j, val));

    // adj_list[j].push_back(std::make_pair(i, val)); //  * adiciona a ambos os indices da matriz, mas no caso em especifico a matriz ja e adicionada da maneira devida
    // adj_matrix[j][i] = val; //  * adiciona a ambos os indices da matriz, mas no caso em especifico a matriz ja e adicionada da maneira devida
}

void grafo::from_file(std::string file_name){
    std::ifstream file(file_name);

    if (!file) {
        std::cerr << "Erro ao abrir o arquivo: " << file_name << std::endl;
        return;
    }

    int count;
    file >> count;
    
    int val;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            file >> val;
            add_node(i, j, val);
        }
    }
    file.close();
}

void grafo::to_string_matrix(){
    for (int i = 0; i < num_vertices; i++)
    {
        for (int j = 0; j < num_vertices; j++)
        {
            printf("%d \t", adj_matrix[i][j]);
        }
        printf("\n");
    }
}

void grafo::to_string_list(){
    for (int i = 0; i < num_vertices; i++)
    {
        printf("%d ", i);
        for (const auto& j : adj_list[i])
        {
            if (j.first > 0)
            {
                printf("-> (%d, %d) ", j.first, j.second);
            }
        }
        printf("\n");
    }
}

void grafo::dfs_visto(int v, bool visto[]) {

    visto[v] = true; // * coloca o vertice atual como visitado
    printf("%d", v);
    
    for (int i = 0; i < num_vertices; i++) {
        if (adj_matrix[v][i] != 0 && !visto[i]) {
            printf(" -> ");
            dfs_visto(i, visto);
        }
    }
}

void grafo::dfs(int inicio) {

    bool* visto = new bool[num_vertices];
    for (int i = 0; i < num_vertices; i++) {
        visto[i] = false;
    }
    printf("dfs: ");
    dfs_visto(inicio, visto); // * chama a funcao dfs a partir do vertice do comeco
    
    printf("\n");
    delete[] visto;
}

void grafo::bfs(int inicio) {
    bool* visto = new bool[num_vertices];

    for (int i = 0; i < num_vertices; i++) {
        visto[i] = false;
    }

    std::queue<int> fila;

    visto[inicio] = true;
    fila.push(inicio);
    int a = 0;
    while (!fila.empty()) {
        int v = fila.front();
        if (a == 0){
            printf("bfs: ");
        }else{
            printf("-> ");
        }
        a++;
        printf("%d ", v);
        fila.pop();

        for (int i = 0; i < num_vertices; i++) {
            if (adj_matrix[v][i] != 0 && !visto[i]) {
                visto[i] = true;
                fila.push(i);
            }
        }
    }
    printf("\n");
    delete[] visto;
}